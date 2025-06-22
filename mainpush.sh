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

echo "[Git] Preparing changes to org..."
git reset
# 適宜変更
git add HOJ AtCoder README.md

if git diff --cached --quiet; then
    echo "[Git] No changes to push."
else
    read -p "Commit Message (org): " orgmsg
    [[ -z "$orgmsg" ]] && orgmsg="Auto Update $(date '+%Y-%m-%d %H:%M:%S') [Org Only]"
    git commit -m "$orgmsg"
    echo "[Git] Pushing changes to org..."
    git push org main
fi

echo "[Git] Done."
