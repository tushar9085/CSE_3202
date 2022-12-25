#! /bin/bash
cpuBt=(24 3 4)
echo "The CPU Burst Time is-------"
echo ${cpuBt[*]}

#Finding the gaint chart
temp=0
j=0

for i in ${cpuBt[@]}
do

temp=$((temp+i))
gaintc[$j]=$temp
j=$((j+1))

done

echo "The Gaint Chart is-------"
echo ${gaintc[*]}

#Finding the waiting Time
sum=0

for ((i=0;i<${#gaintc[@]}-1;i++))
do
temp=${gaintc[$i]}
sum=$((sum+temp))
done

WT=$(bc -l <<< "scale=3;$sum/$j")

echo "The Waiting Time is--------------"
echo $WT




