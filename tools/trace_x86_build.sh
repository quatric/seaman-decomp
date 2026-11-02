#!/bin/sh
# usage: trace_x86_build.sh <root> - build the traced x86_64 harness (port/trace_x86/game_x86t): same units as port/exec plus TRACE_ENTER checkpoints
R="$1"; cd "$R/port/trace_x86/exec" || exit 1
CF="-arch x86_64 -O0 -w -std=gnu17 -fno-stack-protector -Wno-int-conversion -Wno-incompatible-pointer-types -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast"
ls *.c | xargs -P 8 -n 1 sh -c 'o="${0%.c}.o"; [ -f "$o" ] && [ "$o" -nt "$0" ] && exit 0; clang '"$CF"' -c "$0" -o "$o" 2> "$0.err" || echo "FAIL $0"'
clang -arch x86_64 -Wl,-pagezero_size,0x1000 -o ../game_x86t *.o 2>&1 | head -5
