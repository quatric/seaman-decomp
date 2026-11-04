#!/bin/sh
# usage: wii_link.sh <root> - compile the host layer, link port/wii/seaman.elf and convert to .dol
R="$1"; W="$R/port/wii"; export DEVKITPRO=/opt/devkitpro DEVKITPPC=/opt/devkitpro/devkitPPC
F="-std=gnu++17 -fpermissive -w -fno-exceptions -fno-rtti -fno-strict-aliasing -fsigned-char -Os -mcpu=750 -meabi -mhard-float -DGEKKO -mrvl -I$DEVKITPRO/libogc/include -ffunction-sections ${TRACE_BLOCK:+-DTRACE_BLOCK=$TRACE_BLOCK} ${HOST_DEFS}"
# libwiiinput (port/wii/libwiiinput, a submodule): every controller, the USB keyboard, the Wii Speak and USB microphones
L="$W/libwiiinput"; LOPT="WITH_MIC=1 WITH_GCADAPTER=1 WITH_HIDPADS=1"
[ -f "$L/lib/libinput-wii.a" ] && [ "$(cat "$W/obj/libwiiinput.options" 2>/dev/null)" = "$LOPT" ] || { make -C "$L" $LOPT > "$W/libwiiinput.log" 2>&1 && echo "$LOPT" > "$W/obj/libwiiinput.options" || echo "FAIL libwiiinput"; }
# libwiiupdate (port/wii/libwiiupdate, a submodule): the update check against the GitHub releases (host/wii_update.cpp)
U="$W/libwiiupdate"
[ -f "$U/lib/libwiiupdate.a" ] || make -C "$U" > "$W/libwiiupdate.log" 2>&1 || echo "FAIL libwiiupdate"
F="$F -I$L/include -I$U/include -DSEAMAN_VERSION=\"$(cat "$W/VERSION")\""
# the Wii Speak's boot firmware (Nintendo's, not in the repository): built in when port/wii/data/pmic_firm.bin is there, else read from the SD card
[ -s "$W/data/pmic_firm.bin" ] && FM="-DPMIC_FIRM=\"$W/data/pmic_firm.bin\"" || FM=""
cd "$W/host" || exit 1
for f in wii_hostlib wii_bios wii_xlat wii_dsi wii_intrinsics wii_pad wii_audio wii_vmu wii_update; do powerpc-eabi-g++ $F -c $f.cpp -o ../obj/$f.o || echo "FAIL $f"; done
powerpc-eabi-g++ $F $FM -c wii_mic.cpp -o ../obj/wii_mic.o || echo "FAIL wii_mic"
for f in wii_sh4 wii_gx wii_pvr; do powerpc-eabi-g++ $F -O2 -c $f.cpp -o ../obj/$f.o || echo "FAIL $f"; done   # interpreter, TA -> GX: hot, built for speed
powerpc-eabi-g++ $F -O2 -c wii_aica.cpp -o ../obj/wii_aica.o || echo "FAIL wii_aica"   # ARM7 + AICA: hot loop, built for speed
powerpc-eabi-g++ $F -DIMG_PATH="\"$R/disc/1ST_READ.BIN\"" -c wii_main.cpp -o ../obj/wii_main.o || echo "FAIL wii_main"
# statically translated SH-4 functions (tools/sh4_translate.py): one object per region file, built for speed
rm -f ../obj/sh4x_*.o
for f in ../sh4x/mod_8c*.cpp; do [ -f "$f" ] || continue; b=$(basename "$f" .cpp); powerpc-eabi-g++ $F -O2 -c "$f" -o "../obj/sh4x_$b.o" || echo "FAIL $f" & done; wait
cd "$W" && ls obj/*.o > objs.txt
powerpc-eabi-g++ -mrvl -mcpu=750 -meabi -mhard-float -Wl,--gc-sections -o seaman.elf @objs.txt -L$L/lib -L$U/lib -L$DEVKITPRO/libogc/lib/wii -lwiiupdate -linput-wii -lwiikeyboard -lfat -lwiiuse -lbte -logc -lm > link.log 2>&1 && elf2dol seaman.elf seaman.dol && ls -l seaman.dol
grep "undefined reference" link.log | sed 's/.*undefined reference to //' | sort | uniq -c | sort -rn | head -20
