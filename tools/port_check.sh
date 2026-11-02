#!/bin/sh
# usage: port_check.sh <root> - compile every port/fn/*.c from inside that dir, write .err beside it
cd "$1/port/fn" || exit 1
ls | grep '\.c$' | xargs -P 8 -n 1 sh -c 'clang -fsyntax-only -w -std=gnu17 -ferror-limit=3 -Wno-int-conversion -Wno-incompatible-pointer-types -Wno-incompatible-function-pointer-types -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -Wno-incompatible-pointer-types-discards-qualifiers "$0" 2> "$0.err"'
