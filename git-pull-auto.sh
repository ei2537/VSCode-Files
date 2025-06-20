#!/bin/bash

cd ~/VSCode || exit 1

# === プロキシ自動設定（学校だけ） ===
if grep -q "hamako-ths" /etc/resolv.conf; then
    export http_proxy="http://proxy.hamako-ths.ed.jp:8080"
    export https_proxy="http://proxy.hamako-ths.ed.jp:8080"
    echo "[Proxy] School proxy settings are being applied..."
else
    unset http_proxy
    unset https_proxy
    echo "[Proxy] Home."
fi

# === Git 自動pull ===
echo "[Git] Auto pull..."
git pull --rebase
echo "[Git] Done."
