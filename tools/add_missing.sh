#!/bin/sh
# usage: add_missing.sh <root> <hex addr>... - create functions in Ghidra, merge into the index/modules, rebuild the exec harness
R="$1"; shift
rm -f "$R/src/modules/function_index_extra.tsv"
/Applications/ghidra_12.1.2_PUBLIC/support/analyzeHeadless "$R/ghidra_proj" Seaman -process 1ST_READ.BIN -noanalysis -scriptPath "$R/ghidra_scripts" -postScript AddFunctions.java "$R/src/modules/mod_extra.c" "$R/src/modules/function_index_extra.tsv" "$@" 2>&1 | grep 'AddFunctions.java>'
python3 -I - "$R" <<'PY'
import sys
R = sys.argv[1]; p = R + '/src/modules/function_index.tsv'
have = {l.split('\t')[0] for l in open(p).read().splitlines()}
with open(p, 'a') as f:
    for l in open(R + '/src/modules/function_index_extra.tsv').read().splitlines():
        if l.split('\t')[0] not in have: f.write(l + '\n')
PY
python3 -I "$R/tools/postprocess.py" "$R" >/dev/null && python3 -I "$R/tools/port_build.py" "$R" | tail -1
python3 -I "$R/tools/port_exec.py" "$R" >/dev/null
cd "$R/port/exec" && ls | grep '\.c$' | grep -v 'xlat_tab\|main\|stubs' | xargs -P 8 -n 1 sh -c '[ -f "${0%.c}.o" ] && [ "${0%.c}.o" -nt "$0" ] && exit 0; clang -arch x86_64 -O0 -w -std=gnu17 -fno-stack-protector -Wno-int-conversion -Wno-incompatible-pointer-types -Wno-int-to-pointer-cast -Wno-pointer-to-int-cast -c "$0" -o "${0%.c}.o" 2> "$0.err" || echo "FAIL $0"'
