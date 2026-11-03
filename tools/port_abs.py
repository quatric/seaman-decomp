import re, sys, os, glob
R = sys.argv[1]; names = sys.argv[2:]
sys.path.insert(0, R + '/tools'); import units
FN = units.load(R + '/port/fn', 'c')
idx = {}
for l in open(R + '/src/modules/function_index.tsv').read().splitlines()[1:]:
    a, sz, n, ci, co = l.split('\t'); idx[n] = a
os.makedirs(R + '/port/harness/abs', exist_ok=True)
for f in glob.glob(R + '/port/harness/abs/*'): os.remove(f)
SYM = re.compile(r'\b(_?[A-Za-z][A-Za-z0-9_]*_([0-9a-f]{8}))\b')
for n in names:
    src = FN[idx[n]]
    arrs = set(re.findall(r'\b([A-Za-z_]\w*)\[', src))
    def sub(m):
        name, addr = m.group(1), int(m.group(2), 16)
        if not (0x8c000000 <= addr < 0x8d000000) or name.startswith(('FUN_8c', 'thunk')) and False: return m.group(0)
        if re.match(r'^(param_|iVar|uVar|puVar|local_|auStack|uStack|in_|extraout_)', name): return m.group(0)
        if name in idx or name.endswith('_def'): return m.group(0)
        return '((undefined1 *)0x%x)' % addr if name in arrs else '(*(undefined1 *)0x%x)' % addr
    body = src.split('\n', 1)[1]
    body = SYM.sub(sub, body)
    open(R + '/port/harness/abs/%s.c' % idx[n], 'w').write('#include "../../decls.h"\n' + body)
print('wrote', len(names), 'abs units')
