#!/bin/sh

VAR=1
VAR=`expr $VAR + 1`
MOD=`expr $VAR % 2`
if [ $MOD -eq 0 ]
then
  echo "Even"
else
  echo "Odd"
fi
