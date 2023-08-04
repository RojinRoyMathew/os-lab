#/bin/bash
i=1
echo "Enter the limit"
read n
while [ $i -le $n ]
do 
echo "$i"
i=$(expr $i + 1 )
done

