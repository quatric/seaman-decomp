#!/bin/sh
# usage: wii_build.sh <root> [xform] - (re)generate the Wii C++ units, compile all of them to port/wii/obj, repair units g++ rejects, then link with wii_link.sh
R="$1"; W="$R/port/wii"; cd "$R" || exit 1
mkdir -p "$W/obj"
if [ "$2" = "xform" ]; then
  python3 tools/wii_xform.py port "$W/exec" 8c && python3 tools/wii_decls.py port || exit 1
fi
cd "$W/exec" || exit 1
ls *.cpp | xargs -P 8 -n 1 "$R/tools/wii_cc.sh" > ../build.log 2>&1
grep '^FAIL ' ../build.log | awk '{print $2}' > ../failing.txt
if [ -s ../failing.txt ]; then
  python3 "$R/tools/wii_fixup.py" "$W" 6
  ls *.cpp | xargs -P 8 -n 1 "$R/tools/wii_cc.sh" > ../build2.log 2>&1
  grep '^FAIL ' ../build2.log
fi
# units g++ compiled to a trap (lost registers) go to the SH-4 interpreter: when new ones turn up, run the whole build again
if [ "$2" = "xform" ] && python3 "$R/tools/wii_traps.py" "$W" | grep -v '^0 new'; then exec sh "$R/tools/wii_build.sh" "$R" xform; fi
"$R/tools/wii_link.sh" "$R"
