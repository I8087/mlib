@echo off
title win-build
cd src
nasm -f elf -o ..\libm.a libm.asm
if %errorlevel%==0 goto skip
color C

:skip
pause
exit
