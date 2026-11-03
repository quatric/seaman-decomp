#!/bin/sh
# usage: wii_cc.sh <mod_8cXX0000.cpp> - compile one region file of transformed units to ../obj/<region>.o (skips up-to-date objects); run from port/wii/src
f="$1"; o="../obj/${f%.cpp}.o"
[ -f "$o" ] && [ "$o" -nt "$f" ] && [ "$o" -nt ../decls.h ] && [ "$o" -nt ../prelude.h ] && [ "$o" -nt ../../../tools/wii_cc.sh ] && exit 0
powerpc-eabi-g++ -std=gnu++17 -fpermissive -w -fno-exceptions -fno-rtti -fno-strict-aliasing -fsigned-char -Os -mcpu=750 -meabi -mhard-float -DGEKKO -mrvl -ffunction-sections -c "$f" -o "$o" 2> "../obj/${f%.cpp}.err" || { echo "FAIL $f"; rm -f "$o"; }
