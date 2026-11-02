# Link port/game_x86; for symbols Ghidra invented (uniqueN/registerN pseudo-variables, raw-address calls) add stubs to port/exec/stubs.c and retry.
import subprocess, glob, re, sys, os
R = sys.argv[1]; E = R + '/port/exec'
for src in ('xlat_tab', 'main'):
    subprocess.run(['clang', '-arch', 'x86_64', '-O0', '-w', '-std=gnu17', '-c', src + '.c', '-o', src + '.o'], cwd=E)
for _ in range(5):
    r = subprocess.run(['clang', '-arch', 'x86_64', '-Wl,-pagezero_size,0x1000', '-o', '../game_x86'] + sorted(os.path.basename(x) for x in glob.glob(E + '/*.o')), capture_output=True, text=True, cwd=E)
    miss = sorted(set(re.findall(r'"_([A-Za-z0-9_]+)"', r.stderr)))
    if not miss: print('linked' if r.returncode == 0 else r.stderr[:500]); break
    have = open(E + '/stubs.c').read()
    with open(E + '/stubs.c', 'a') as f:
        for s in miss:
            if s in have: continue
            if s.startswith('func_'): f.write('void %s(void){fprintf(stderr,"raw call %s\\n");abort();}\n' % (s, s))
            else: f.write('char %s[64] __attribute__((aligned(16)));\n' % s)
    subprocess.run(['clang', '-arch', 'x86_64', '-O0', '-w', '-c', E + '/stubs.c', '-o', E + '/stubs.o'])
    print('added stubs:', miss)
