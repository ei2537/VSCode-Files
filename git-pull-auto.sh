#!/bin/bash

cd ~/VSCode || exit 1   # 作業ディレクトリに移動（違うなら変えてね）

echo "[Git] Auto pull..."

git pull --rebase origin main

echo "[Git] 完了！"

