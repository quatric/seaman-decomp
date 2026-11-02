#!/bin/sh
# usage: port_rebuild.sh <root> - decompile output -> clean -> port/fn -> exec units -> objects -> link
R="$1"
python3 -I - "$R" <<'PY'
import re, glob, sys
R = sys.argv[1]
have = set()
for f in glob.glob(R + '/src/modules/mod_8c*.c'): have |= set(re.findall(r'^/\* \S+ @ ([0-9a-f]{8}) ', open(f).read(), re.M))
t = open(R + '/src/modules/mod_extra.c').read()
blocks = re.split(r'(?=\n/\* \S+ @ [0-9a-f]{8} callers=)', t)
keep = [b for b in blocks if not re.match(r'\n/\* \S+ @ ([0-9a-f]{8}) ', b) or re.match(r'\n/\* \S+ @ ([0-9a-f]{8}) ', b).group(1) not in have]
open(R + '/src/modules/mod_extra.c', 'w').write(''.join(keep))
PY
python3 -I "$R/tools/postprocess.py" "$R" >/dev/null
python3 -I "$R/tools/port_build.py" "$R" | tail -1
sh "$R/tools/port_check.sh" "$R"; python3 -I "$R/tools/port_report.py" "$R" | head -1
python3 -I "$R/tools/port_exec.py" "$R" | tail -1
cd "$R/port/exec" && ls | grep '\.c$' | grep -v 'xlat_tab\|main\|stubs' | xargs -P 8 -n 1 sh -c '[ -f "${0%.c}.o" ] && [ "${0%.c}.o" -nt "$0" ] && exit 0; clang -arch x86_64 -O0 -w -std=gnu17 -fno-stack-protector -Wno-int-conversion -Wno-incompatible-pointer-types -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -c "$0" -o "${0%.c}.o" 2> "$0.err" || echo "FAIL $0"'
python3 -I "$R/tools/port_link.py" "$R"
