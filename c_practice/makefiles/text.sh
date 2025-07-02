echo "..............this is a script language............."
echo $1
echo $0
if [ -f "$1" ];
then
	echo "File exists"
else
  echo "File does not exist"
fi

