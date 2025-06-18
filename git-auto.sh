#!/bin/bash
cd ~/VSCode || exit 1

echo "[Git] -----------------------------------"
current_branch=$(git symbolic-ref --short HEAD)
echo "[Git] Current branch: $current_branch"

# devブランチ以外なら警告
if [ "$current_branch" != "dev" ]; then
    echo "[Git] ⚠️  You are not on the 'dev' branch."
    read -p "Do you want to switch to 'dev'? (y/N): " switch
    if [[ "$switch" == "y" || "$switch" == "Y" ]]; then
        git checkout dev || exit 1
        git pull origin dev
        current_branch="dev"
    else
        echo "[Git] Aborting script since you're not on 'dev'."
        exit 1
    fi
fi

echo "[Git] Fetching latest info from origin..."
git fetch

# ワーキングツリーに変更があるか確認
if git diff --quiet && git diff --cached --quiet; then
    echo "[Git] No local changes. Pulling latest from dev..."
    git pull --rebase origin "$current_branch"
else
    echo "[Git] Local changes detected. Skipping pull to avoid conflicts."
fi

echo "[Git] Staging changes..."
git add .

# コミットが必要かどうか判定
if git diff --cached --quiet; then
    echo "[Git] No staged changes. Skipping commit and push."
else
    read -p "Commit Message: " msg
    if [[ -z "$msg" ]]; then
        msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    fi
    git commit -m "$msg"

    echo "[Git] Pushing to 'dev' branch..."
    git push origin "$current_branch"
fi

# マージするか確認（dev → main）
read -p "Do you want to merge 'dev' into 'main'? (y/N): " do_merge
if [[ "$do_merge" == "y" || "$do_merge" == "Y" ]]; then
    echo "[Git] Merging dev into main..."

    git checkout main || exit 1
    git pull origin main
    git merge dev
    git push origin main

    git checkout dev
    echo "[Git] ✅ Merged 'dev' into 'main' and returned to 'dev'."
fi

echo "[Git] Done."
