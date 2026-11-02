#!/bin/sh
# usage: show.sh <addr> [ninsn] - decompiled body and raw disassembly of one function
R=$(cd "$(dirname "$0")/.." && pwd)
sed -n '3,40p' "$R/port/fn/$1.c" | grep -v '^__asm'
rizin -a sh -b 32 -e asm.cpu=sh4 -e scr.color=0 -e asm.lines=false -m 0x8c010000 -qc "s 0x$1; pd ${2:-16}" -F raw "$R/disc/1ST_READ.BIN" 2>&1 | sed 's/ \+/ /g' | cut -c1-60
