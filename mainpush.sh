#!/bin/bash
DIR=$(pwd)

echo "[Git] Working in $DIR..."
cd "$DIR" || exit 1

echo "[Git] Checking for changes..."
git fetch

if git diff --quiet && git diff --cached --quiet; then
    echo "[Git] No changes. Getting latest information from remote..."
    git pull --rebase
else
    echo "[Git] Detected changes in working tree. Skipping pull."
fi

echo "[Git] Staging ALL changes for personal Repository..."
git add .

if git diff --cached --quiet; then
    echo "[Git] No changes to commit for personal Repository."
else
    read -p "Commit Message: " msg
    [[ -z "$msg" ]] && msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    git commit -m "$msg"
    echo "[Git] Pushing to personal (origin)..."
    git push origin main
fi

echo "[Git] Preparing to push to org..."

git stash -u

git checkout main
git restore --staged . 2>/dev/null
# HOJ と AtCoder/ABC だけ追加してpush
git add HOJ AtCoder

if git diff --cached --quiet; then
    echo "[Git] No HOJ/AtCoder changes to push."
else
    read -p "Commit Message (Org): " orgmsg
    [[ -z "$orgmsg" ]] && orgmsg="Auto Update $(date '+%Y-%m-%d %H:%M:%S') [Org Only]"
    git commit -m "$orgmsg"
    echo "[Git] Pushing HOJ/AtCoder to org..."
    git push org main
fi

git stash pop

echo "[Git] Done."
