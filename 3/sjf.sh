#FOR SJF 
cpuBt2=(24 3 4)

echo "Befor Sorting"

echo ${cpuBt2[*]}

#Sorting (Bubble)

for ((i=0;i<4;i++))
do

for ((k=0;k<4-i-1;k++))
do

if [ ${cpuBt2[k]} -gt ${cpuBt2[$((k+1))]} ]

then

#swap
temp=${cpuBt2[k]}
cpuBt2[$k]=${cpuBt2[$((k+1))]}
cpuBt2[$((k+1))]=$temp

fi
done
done


echo "After Sorting"
echo ${cpuBt2[*]}

#NOW APPLY SCSF ALGO ON CPUBT2


#Gaint CHART
temp=0
j=0

for i in ${cpuBt2[@]}
do

temp=$((temp+i))
gaintc[$j]=$temp
j=$((j+1))
done

echo "Gaint CHart"

echo ${gaintc[@]}

#Finding the waiting Time

sum=0

for ((i=0;i<${#gaintc[@]}-1;i++))
do
temp=${gaintc[$i]}
sum=$((sum+temp))
done

WT=$(bc -l <<< "scale=3;$sum/$j")

echo "Waiting Time is--------"
echo $WT
