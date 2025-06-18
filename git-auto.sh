#!/bin/bash
cd ~/VSCode  

echo "[Git] リモートから最新を取得中..."
git pull --rebase

echo "[Git] 変更をステージング中..."
git add .

# 変更があるか確認
if git diff --cached --quiet; then
    echo "[Git] 変更なし。コミットはスキップ。"
else
    read -p "Commit Message: " msg
    if [[ -z "$msg" ]]; then
        msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    fi
    git commit -m "$msg"
fi

echo "[Git] GitHubへプッシュ中..."
git push

echo "[Git] 完了！"
