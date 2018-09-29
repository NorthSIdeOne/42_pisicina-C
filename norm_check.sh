echo "Please enter the directory for Norminette: "
read FILE
cd /nfs/2018/a/andstefa/$FILE
norminette -R CheckForbiddenSourceHeader
