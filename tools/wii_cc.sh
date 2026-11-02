#!/bin/sh
# usage: wii_cc.sh <unit.cpp> - compile one transformed unit to ../obj/<unit>.o (skips up-to-date objects); run from port/wii/exec
f="$1"; o="../obj/$f.o"
[ -f "$o" ] && [ "$o" -nt "$f" ] && [ "$o" -nt ../decls.h ] && [ "$o" -nt ../prelude.h ] && [ "$o" -nt ../../../tools/wii_cc.sh ] && exit 0
powerpc-eabi-g++ -std=gnu++17 -fpermissive -w -fno-exceptions -fno-rtti -fno-strict-aliasing -fsigned-char -Os -mcpu=750 -meabi -mhard-float -DGEKKO -mrvl -ffunction-sections -c "$f" -o "$o" 2> "../obj/$f.err" || { echo "FAIL $f"; rm -f "$o"; }
