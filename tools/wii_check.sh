#!/bin/sh
# compile-check every transformed unit for Wii (powerpc-eabi-g++); failures listed in port/wii/failing.txt
cd "$1/port/wii/exec" || exit 1
ls *.cpp | xargs -P 8 -I{} sh -c 'powerpc-eabi-g++ -std=gnu++17 -fpermissive -w -fno-exceptions -fno-rtti -fno-strict-aliasing -c -O1 -o /dev/null {} 2>/dev/null || echo {}' > ../failing.txt
wc -l < ../failing.txt
