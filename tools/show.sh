#!/bin/sh
# usage: show.sh <addr> [ninsn] - decompiled body and raw disassembly of one function
R=$(cd "$(dirname "$0")/.." && pwd)
f="$R/port/fn/mod_$(echo $1 | cut -c1-4)0000.c"; awk -v u="//@unit $1" '$0==u{p=1;next} /^\/\/@unit /{p=0} p' "$f" | sed -n '2,39p' | grep -v '^__asm'
rizin -a sh -b 32 -e asm.cpu=sh4 -e scr.color=0 -e asm.lines=false -m 0x8c010000 -qc "s 0x$1; pd ${2:-16}" -F raw "$R/disc/1ST_READ.BIN" 2>&1 | sed 's/ \+/ /g' | cut -c1-60
