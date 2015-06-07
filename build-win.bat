@echo off
title win-build
cd src
nasm -f elf -o ..\mlib.a mlib.asm
if %errorlevel%==0 goto skip
color C

:skip
pause
exit
