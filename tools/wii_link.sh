#!/bin/sh
# usage: wii_link.sh <root> - compile the host layer, link port/wii/seaman.elf and convert to .dol
R="$1"; W="$R/port/wii"; export DEVKITPRO=/opt/devkitpro DEVKITPPC=/opt/devkitpro/devkitPPC
F="-std=gnu++17 -fpermissive -w -fno-exceptions -fno-rtti -fno-strict-aliasing -fsigned-char -Os -mcpu=750 -meabi -mhard-float -DGEKKO -mrvl -I$DEVKITPRO/libogc/include -ffunction-sections ${TRACE_BLOCK:+-DTRACE_BLOCK=$TRACE_BLOCK} ${HOST_DEFS}"
cd "$W/host" || exit 1
for f in wii_hostlib wii_bios wii_xlat wii_dsi wii_intrinsics wii_pvr wii_sh4 wii_gx wii_pad wii_audio wii_vmu; do powerpc-eabi-g++ $F -c $f.cpp -o ../obj/$f.o || echo "FAIL $f"; done
powerpc-eabi-g++ $F -O2 -c wii_aica.cpp -o ../obj/wii_aica.o || echo "FAIL wii_aica"   # ARM7 + AICA: hot loop, built for speed
powerpc-eabi-g++ $F -DIMG_PATH="\"$R/disc/1ST_READ.BIN\"" -c wii_main.cpp -o ../obj/wii_main.o || echo "FAIL wii_main"
cd "$W" && ls obj/*.o > objs.txt
powerpc-eabi-g++ -mrvl -mcpu=750 -meabi -mhard-float -Wl,--gc-sections -o seaman.elf @objs.txt -L$DEVKITPRO/libogc/lib/wii -lfat -lwiiuse -lbte -logc -lm > link.log 2>&1 && elf2dol seaman.elf seaman.dol && ls -l seaman.dol
grep "undefined reference" link.log | sed 's/.*undefined reference to //' | sort | uniq -c | sort -rn | head -20
