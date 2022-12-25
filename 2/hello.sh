#! /bin/bash
echo Hello World!

#2 no
a=10
b=20
echo a=$a and b=$b

#3 no
c=$((a+b))
echo $c

# Try 1
d=$((c*c))
echo $d


#Precision of number
e=10.11
f=10.11
g=$e+$f
echo $g|bc

echo "scale=5;11.2113/3"|bc



#Power
echo "root of 13 is "
echo "scale=4;sqrt(13)"|bc


#Input from user
echo "Enter one number:"
read h
echo "Enter another number:"
read i

echo "Your selected number is $h & $i"


if [ $h -gt 0 ] 
	then
	echo "You selected positive Number"
	else
	echo "Negative"
fi

#While Loop

echo "Printed By While Loop"

i=1
while (($i <= 10))
do
echo $i
((i++))
done


#For Loop

echo "Printed By For Loop"

for i in {1..10}
do
echo $i
done

