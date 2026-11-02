#!/bin/sh
# usage: port_loop.sh <root> <max iterations> - run the game; when it hits an address that is not a known function, add it in Ghidra and retry
R="$1"; N="${2:-10}"; i=0
cd "$R/port"
while [ $i -lt $N ]; do
  timeout 295 arch -x86_64 ./game_x86 ../disc/1ST_READ.BIN 8 > ${TMPDIR:-/tmp}/r.out 2>&1
  t=$(sed -n 's/^xlat: unmapped call target \([0-9a-f]*\)$/\1/p' ${TMPDIR:-/tmp}/r.out | head -1)
  [ -z "$t" ] && break
  echo "adding $t"
  sh "$R/tools/add_missing.sh" "$R" "$t" | grep 'AddFunctions\|error'
  python3 -I "$R/tools/port_link.py" "$R" | tail -1
  i=$((i+1))
done
