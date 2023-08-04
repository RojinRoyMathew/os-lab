#1/bin/bash
echo "Enter the number"
read a b
sum=$(expr $a + $b)
dif=$(expr $a - $b)
pdt=$(expr $a \* $b)
div=$(expr $a / $b)
echo "sum is $sum"
echo "dif is $dif"
echo "mult is $pdt"
echo "div is $div"
