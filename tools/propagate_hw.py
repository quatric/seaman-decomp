import re, glob, sys, collections
R = sys.argv[1]
hdr = re.compile(r'^/\* (\S+) @ ([0-9a-f]{8}) callers=(\d+) callees=(\d+) \*/$', re.M)
ident = re.compile(r'\b([A-Za-z_]\w*)\(')
funcs = {}
for f in sorted(glob.glob(R + '/src/clean/mod_*.c')):
    t = open(f).read(); ms = list(hdr.finditer(t))
    for i, m in enumerate(ms):
        body = t[m.end(): ms[i+1].start() if i + 1 < len(ms) else len(t)]
        funcs[int(m.group(2), 16)] = [m.group(1), set(ident.findall(body))]
byname = {v[0]: a for a, v in funcs.items()}
CAT = {'ta_fifo': 'gfx', 'pvr': 'gfx', 'vram': 'gfx', 'vram64': 'gfx', 'aica_reg': 'snd', 'aica_ram': 'snd',
       'g2dma': 'dma', 'syscall': 'sys', 'sh4_tmu': 'timer', 'sh4_dmac': 'dma'}
cat = {}
for a, (n, c) in funcs.items():
    p = re.match(r'^(ta_fifo|pvr|vram64|vram|aica_reg|aica_ram|g2dma|syscall|sh4_tmu|sh4_dmac)_', n)
    if p: cat[a] = CAT[p.group(1)]
new = {}
for rnd in range(3):
    add = {}
    for a, (n, callees) in funcs.items():
        if a in cat or not n.startswith('FUN_'): continue
        cs = collections.Counter(cat[byname[c]] for c in callees if c in byname and byname[c] in cat and byname[c] != a)
        if cs:
            add[a] = cs.most_common(1)[0][0]
    for a, k in add.items():
        cat[a] = k; new[a] = 'uses_%s_%06x' % (k, a & 0xffffff); funcs[a][0] = new[a]; byname[new[a]] = a
    print('round', rnd, 'labeled', len(add))
    if not add: break
open(R + '/notes/names_propagated.tsv', 'w').write(''.join('%08x\t%s\n' % kv for kv in sorted(new.items())))
print(collections.Counter(v.split('_')[1] for v in new.values()), len(new))
