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

echo "[Git] Staging changes..."
git add .

if git diff --cached --quiet; then
    echo "[Git] No changes to commit."
else
    read -p "Commit Message: " msg
    [[ -z "$msg" ]] && msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    git commit -m "$msg"

    echo "[Git] Pushing to origin..."
    git push origin main

    echo "[Git] Pushing to organization remote (org)..."
    git push org main
fi

echo "[Git] Done."
