#1/bin/bash
sum=0
for i in 1 2 3 4 5
do
sum=$(expr $sum + $i)
i=$(expr $i + 1)
done
echo "sum is $sum"
