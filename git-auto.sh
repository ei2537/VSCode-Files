#!/bin/bash

cd ~/VSCode  # リポジトリのパスに合わせて変更

echo "[Git] Pulling from remote..."
git pull --rebase

echo "[Git] Adding changes..."
git add .

if git diff --cached --quiet; then
    echo "[Git] 変更なし。コミットはスキップします。"
else
    # メッセージ入力を促す
    read -p "コミットメッセージを入力してください（何も入力しなければ「自動更新」）: " msg

    # 空欄なら自動メッセージをセット
    if [ -z "$msg" ]; then
        msg="自動更新 $(date '+%Y-%m-%d %H:%M:%S')"
    fi

    echo "[Git] コミットメッセージ: $msg"
    git commit -m "$msg"
fi

echo "[Git] Pushing to GitHub..."
git push

echo "[Git] 完了！"
