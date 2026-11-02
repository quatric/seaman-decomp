import re, subprocess, sys, glob
R = sys.argv[1]; E = R + '/port/exec'
out = subprocess.run(['clang', '-arch', 'x86_64', '-Wl,-pagezero_size,0x1000', '-o', R + '/port/game_x86'] + glob.glob(E + '/*.o'), capture_output=True, text=True).stderr
syms = sorted(set(re.findall(r'"_([A-Za-z0-9_]+)"', out)))
with open(E + '/stubs.c', 'w') as f:
    f.write('#include <stdlib.h>\n#include <stdio.h>\n')
    for s in syms:
        if s.startswith('func_'):
            f.write('void %s(void){fprintf(stderr,"call to raw address %s\\n");abort();}\n' % (s, s))
        else:
            f.write('char %s[64] __attribute__((aligned(16)));\n' % s)
print(len(syms), 'stub symbols')
