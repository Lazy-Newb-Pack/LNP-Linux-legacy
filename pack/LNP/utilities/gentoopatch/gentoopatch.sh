#!/bin/bash
# This script will fix some file extention and settings for gentoo users.
# It takes one optional argument: the path of the Lazy Newb Pack install. By default, the script expects to be at the root of the LNP directory.
# All credit goes to /u/amfournda of reddit

LNPATH="."
if [ ! -z "$1" ]
then
    LNPATH=$1
fi

if [ ! -d $LNPATH/LNP/graphics ] || [ ! -d $LNPATH/df_linux/data/init ] 
then
    echo "Cound not find dwarf fortress install. This scripts expects to either be inside the LNP-linux directory or have you provide the path as an argument to the script."
    exit
fi


echo "Converting all png to bmp"
for E in `find $LNPATH/LNP/graphics -maxdepth 1 -mindepth 1 -type d -not -name "."`
do
    mogrify -format bmp $E/data/art/\*.png 2> /dev/null
    sed -i\.bak -e 's/\.png/\.bmp/g' $E/data/init/init.txt
done

echo
echo "Fixing init.txt"
sed -i\.bak -e 's/\.png/\.bmp/g' $LNPATH/df_linux/data/init/init.txt

echo 
echo "Fixing the df launcher script"
sed -i\.bak -e 's/LD_PRELOAD=\/usr\/lib32\/libz.so/LD_PRELOAD=\/lib32\/libz.so.1/g' $LNPATH/df_linux/df
sed -i -e 's/LD_PRELOAD=\/usr\/lib\/libz.so/LD_PRELOAD=\/lib\/libz.so.1/g' $LNPATH/df_linux/df
sed -i -e 's/ldconfig -p/\/sbin\/ldconfig -p/g' $LNPATH/df_linux/df