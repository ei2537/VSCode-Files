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

###############################################
# Step 1: Create temp branch for org push only
###############################################
echo "[Git] Preparing isolated commit for org..."

# 作業ブランチを作成
git switch -c temp-org-branch || git switch temp-org-branch

# すべてのステージングをリセットし、必要なファイルだけ add
git reset
git add HOJ AtCoder README.md

if git diff --cached --quiet; then
    echo "[Git] No HOJ/AtCoder changes to push."
else
    read -p "Commit Message (Org): " orgmsg
    [[ -z "$orgmsg" ]] && orgmsg="Auto Update $(date '+%Y-%m-%d %H:%M:%S') [Org Only]"
    git commit -m "$orgmsg"
    
    echo "[Git] Force pushing isolated commit to org..."
    git push -f org temp-org-branch:main
fi

# 元の main に戻る
git switch main > /dev/null
git branch -D temp-org-branch > /dev/null

#########################################
# Step 2: Push personal changes to origin
#########################################
echo "[Git] Preparing personal commit for origin..."

git reset
git add .

if git diff --cached --quiet; then
    echo "[Git] No additional personal changes to push."
else
    read -p "Commit Message (Origin): " msg
    [[ -z "$msg" ]] && msg="Auto Update $(date '+%Y-%m-%d %H:%M:%S')"
    git commit -m "$msg"
    echo "[Git] Pushing to personal (origin)..."
    git push origin main
fi

echo "[Git] Done."
