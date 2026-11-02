import struct, re, sys, collections
R = sys.argv[1]
d = open(R + '/disc/1ST_READ.BIN', 'rb').read()
B = 0x8c010000; N = len(d) // 4
ents = {}
for l in open(R + '/src/modules/function_index.tsv').read().splitlines()[1:]:
    p = l.split('\t'); ents[int(p[0], 16)] = p[2]
w = struct.unpack('<%dI' % N, d[:N*4])
def dw(a): return w[(a - B) // 4]
def ok(a): return B <= a < B + N*4 - 64 and a % 4 == 0
# candidate bases: values referenced anywhere that look like [0,0,fn..]
refs = collections.Counter(v for v in w if 0x8c0f0000 <= v < 0x8c1d0000 and ok(v))
bases = []
for v in refs:
    if dw(v) == 0 and dw(v + 4) == 0 and (dw(v + 8) in ents or dw(v + 12) in ents):
        bases.append(v)
bases.sort()
print('vtable bases:', len(bases))
out = []; newn = {}
for i, v in enumerate(bases):
    limit = bases[i + 1] if i + 1 < len(bases) else v + 0x400
    slots = []
    a = v + 8
    while a < min(limit, v + 0x400) and (dw(a) in ents or dw(a) == 0):
        slots.append(dw(a)); a += 4
    # trim trailing zeros
    while slots and slots[-1] == 0: slots.pop()
    fns = [s for s in slots if s in ents]
    if not fns: continue
    cls = [re.sub(r'^s_|_[0-9a-f]{6}$', '', ents[x]) for x in fns if ents[x].startswith('s_C')]
    cn = cls[0].split('_')[0] if cls and re.match(r'^C[A-Z]', cls[0]) else 'Class_%06x' % (v & 0xffffff)
    out.append('%08x\trefs=%d\tslots=%d\t%s\t%s' % (v, refs[v], len(slots), cn, ' '.join(ents[x] for x in fns[:5])))
    for si, x in enumerate(slots):
        if x in ents and ents[x].startswith('FUN_') and x not in newn:
            newn[x] = '%s_m%d_%06x' % (cn, si, x & 0xffffff)
open(R + '/notes/vtables.tsv', 'w').write('\n'.join(out) + '\n')
open(R + '/notes/names_vtable.tsv', 'w').write(''.join('%08x\t%s\n' % kv for kv in sorted(newn.items())))
print('vtables kept:', len(out), 'methods named:', len(newn))
