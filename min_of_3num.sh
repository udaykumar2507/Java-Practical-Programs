echo "Enter Num1"
read num1
echo "Enter Num2"
read num2
echo "Enter Num3"
read num3
if [ $num1 -gt $num2 -a $num1 -gt $num3 ]
then echo "num1 is Greater"
elif [ $num2 -gt $num3 ]
then echo "Num2 is Greater"
else
echo "Num3 is Greater"
fi
