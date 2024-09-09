#!/bin/sh

for i in `ls -1 /dev`
do
  echo $i
done

for i in 1 2 3 4 5
do
  echo `expr $i + 1`
done
