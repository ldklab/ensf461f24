#!/bin/sh

for i in `ls -1 /dev`
do
  echo $i | rev
done
