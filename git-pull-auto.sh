#!/bin/bash

cd ~/VSCode || exit 1

echo "Enter branch to pull (main or dev). Press Enter to skip:"
read -r branch

if [[ -z "$branch" ]]; then
    echo "[Git] No branch selected. Skipping pull."
    exit 0
fi

if [[ "$branch" != "main" && "$branch" != "dev" ]]; then
    echo "[Git] Invalid branch name. Skipping pull."
    exit 1
fi

echo "[Git] Switching to branch '$branch'..."
git checkout "$branch"

echo "[Git] Pulling latest changes on '$branch'..."
git pull --rebase

if [[ "$branch" == "main" ]]; then
    echo "[Git] Returning to dev branch..."
    git checkout dev
fi

echo "[Git] Done!"
