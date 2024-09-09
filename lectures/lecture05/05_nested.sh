while read -r line
do
    FIRST=`echo $line | cut -f 1 -d ','`
    SECOND=`echo $line | cut -f 2 -d ','`
    if [ $FIRST -eq 0 ]
    then
        echo $SECOND
    fi
done < myfile.csv