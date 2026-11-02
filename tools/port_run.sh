#!/bin/sh
# usage: port_run.sh <root> - regen xlat table, relink and run the x86_64 harness
R="$1"; cd "$R/port/exec" || exit 1
python3 -I "$R/tools/port_exec.py" "$R" >/dev/null
clang -arch x86_64 -O0 -w -std=gnu17 -c xlat_tab.c -o xlat_tab.o && clang -arch x86_64 -O0 -w -c main.c -o main.o
clang -arch x86_64 -Wl,-pagezero_size,0x1000 -o ../game_x86 *.o 2>&1 | head -3
cd .. && timeout ${2:-30} arch -x86_64 ./game_x86 2>&1 | tail -${3:-12}
