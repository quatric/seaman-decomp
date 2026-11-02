#!/bin/sh
# usage: port_objects.sh <root> - compile every port/fn/*.c to port/obj/*.o (host arch), log failures to port/obj_failed.txt
cd "$1/port/fn" || exit 1
ls | grep '\.c$' | xargs -P 8 -n 1 sh -c 'clang -c -w -O0 -fno-stack-protector -std=gnu17 -Wno-int-conversion -Wno-incompatible-pointer-types -Wno-incompatible-function-pointer-types -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -Wno-incompatible-pointer-types-discards-qualifiers "$0" -o "../obj/${0%.c}.o" 2> "$0.err" || echo "$0" >> ../obj_failed.txt'
