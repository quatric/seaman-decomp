#!/bin/sh
# usage: wii_dolphin.sh <root> [seconds] - run port/wii/seaman.dol in headless Dolphin (own user dir, MMU on), stop it by PID, print the guest-visible log lines
R="$1"; S="${2:-45}"; U="${DOLPHIN_USER:-$R/dolphin-user}"
rm -rf "$U/Logs"; mkdir -p "$U/Logs"
/Applications/Dolphin.app/Contents/MacOS/Dolphin -u "$U" -b -e "$R/port/wii/seaman.dol" -v Null > "$U/dolphin.out" 2>&1 &
PID=$!; sleep "$S"; kill $PID 2>/dev/null
for i in 1 2 3 4 5 6 7 8; do sleep 2; kill -0 $PID 2>/dev/null || break; done
kill -0 $PID 2>/dev/null && kill -9 $PID
pgrep -fl "^/Applications/Dolphin.app" | wc -l
