#!/bin/bash
cd ~/VSCode  

echo "[Git] Checking for changes..."
git fetch

# ワーキングツリーに変更があるか確認（ステージされていなくても）
if git diff --quiet && git diff --cached --quiet; then
    # 変更なし
    echo "[Git] No changes. Getting latest information from remote..."
    git pull --rebase
else
    # 変更あり
    echo "[Git] Detecting changes in the working tree. Skip pull."
fi

echo "[Git] Staging changes..."
git add .

# コミットするかチェック
if git diff --cached --quiet; then
    echo "[Git] No changes. Skip commit and push."
else
    read -p "Commit Message: " msg
    if [[ -z "$msg" ]]; then
        msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    fi
    git commit -m "$msg"

    echo "[Git] Pushing to GitHub..."
    git push
fi

echo "[Git] Done."
