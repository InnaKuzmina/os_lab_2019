#!/bin/bash
echo There were $# parameters passed
count=1
sum=0
for param in "$@"
do
sum=$(( $sum + $param ))
count=$(( $count + 1 ))
done
echo " The average = $[$sum/$#]"
