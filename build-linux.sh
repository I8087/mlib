#!/bin/bash
cd src
nasm -f elf -o ../mlib.a mlib.asm
if [ $? == 0 ]
then
    echo "Success!"
else
    echo "Error!"
fi

pause