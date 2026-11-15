set -e

git add .

read -p "message: " message
git commit -m "$message"

git push -q
