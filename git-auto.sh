#!/bin/bash
cd ~/VSCode || exit 1

echo "[Git] Checking for changes..."
git fetch

if git diff --quiet && git diff --cached --quiet; then
    echo "[Git] No changes. Getting latest information from remote..."
    git pull --rebase
else
    echo "[Git] Detecting changes in the working tree. Skip pull."
fi

echo "[Git] Staging changes..."
git add .

if git diff --cached --quiet; then
    echo "[Git] No changes. Skip commit and push."
else
    read -p "Commit Message: " msg
    if [[ -z "$msg" ]]; then
        msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    fi
    git commit -m "$msg"

    echo "[Git] Pushing to GitHub..."
    git push --set-upstream origin main

    echo "[Git] Also pushing to Organization (ei2537-org)..."
    git push org main
fi

echo "[Git] Done."
