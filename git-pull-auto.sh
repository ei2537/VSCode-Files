#!/bin/bash

cd ~/VSCode || exit 1  

echo "[Git] Auto pull..."

git pull --rebase origin main

echo "[Git] 完了！"

