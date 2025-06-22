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

#################################
# Commit HOJ/AtCoder to org (and origin)
#################################
echo "[Git] Preparing changes to org..."

git reset 
#適宜変更
git add HOJ AtCoder README.md

org_committed=false

if git diff --cached --quiet; then
    echo "[Git] No changes to commit."
else
    read -p "Commit Message (Org): " orgmsg
    [[ -z "$orgmsg" ]] && orgmsg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    git commit -m "$orgmsg"
    org_committed=true
fi

if [ "$org_committed" = true ]; then
    echo "[Git] Force pushing changes to org..."
    git push -f org main

    echo "[Git] Also pushing same commit to origin..."
    git push origin main
fi

####################################
# Commit remaining personal changes to origin
####################################
echo "[Git] Preparing personal commit for origin..."

git reset
git add .

if git diff --cached --quiet; then
    echo "[Git] No additional personal changes to push."
else
    read -p "Commit Message (Origin): " msg
    [[ -z "$msg" ]] && msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    git commit -m "$msg"
    echo "[Git] Pushing to personal (origin)..."
    git push origin main
fi

echo "[Git] Done."
