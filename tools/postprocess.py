import re, struct, sys, os, glob
R = sys.argv[1]
d = open(R + '/disc/1ST_READ.BIN', 'rb').read()
BASE = 0x8c010000
names = {}
for l in open(R + '/src/modules/function_index.tsv').read().splitlines()[1:]:
    p = l.split('\t')
    names[int(p[0], 16)] = p[2]
CODE_END = 0
for l in open(R + '/src/modules/function_index.tsv').read().splitlines()[1:]:
    p_ = l.split('\t')
    if int(p_[0], 16) < 0x8c278000: CODE_END = max(CODE_END, int(p_[0], 16) + int(p_[1]))
CODE_END += 0x200   # literal pool after the last function; the data that follows is not pool
def in_code(a): return 0x8c010000 <= a < 0x8c130000 or 0x8c1d0000 <= a < min(0x8c278000, CODE_END)
def in_file(a): return BASE <= a < BASE + len(d) - 3
def dword(a): return struct.unpack_from('<I', d, a - BASE)[0]
call_re = re.compile(r'\(\*\(code \*\)PTR_\w+?_([0-9a-f]{8})\)\(')
ptr_re = re.compile(r'\bPTR_\w*?_?([0-9a-f]{8})\b')
dat_re = re.compile(r'(?<![&\w])_?DAT_([0-9a-f]{8})\b')
dat2_re = re.compile(r'(?<![&\w])_?DAT_([0-9a-f]{8})\._([0-7])_([1248])_')
# pool widths from the code itself: mov.w @(disp,pc),Rn = 9nXX; mov.l = DnXX
WORD, LONG = set(), set()
for lo, hi in ((0x8c010000, 0x8c130000), (0x8c1d0000, min(0x8c278000, CODE_END))):
    for pc in range(lo, hi, 2):
        if pc - BASE + 2 > len(d): break
        op = struct.unpack_from('<H', d, pc - BASE)[0]
        if op >> 12 == 9: WORD.add(pc + 4 + (op & 0xff) * 2)
        elif op >> 12 == 0xd: LONG.add(((pc + 4) & ~3) + (op & 0xff) * 4)
def pool_val(a):
    if a in WORD and a not in LONG:
        return struct.unpack_from('<h', d, a - BASE)[0] & 0xffffffff
    return dword(a)
stats = {'calls': 0, 'ptrs': 0, 'consts': 0}
def tgt_name(v):
    if v in names: return names[v]
    return 'FUN_%08x' % v if in_code(v) else 'DAT_%08x' % v
def sub_call(m):
    a = int(m.group(1), 16)
    if not in_file(a): return m.group(0)
    v = dword(a)
    if in_code(v):
        stats['calls'] += 1
        return tgt_name(v) + '('
    return m.group(0)
def sub_ptr(m):
    a = int(m.group(1), 16)
    if not (in_code(a) and in_file(a)): return m.group(0)
    v = dword(a)
    stats['ptrs'] += 1
    return '(&%s)' % (names[v] if v in names else 'DATA_%08x' % v)
def sub_dat2(m):
    a = int(m.group(1), 16) + int(m.group(2))
    n = int(m.group(3))
    if not (in_code(a) and in_file(a + n - 1) and ((a & ~3) in LONG or (a & ~1) in WORD)): return m.group(0)
    stats['consts'] += 1
    return '0x%x' % int.from_bytes(d[a - BASE:a - BASE + n], 'little')
def sub_dat(m):
    a = int(m.group(1), 16)
    if not (in_code(a) and in_file(a) and (a in WORD or a in LONG)): return m.group(0)
    stats['consts'] += 1
    v = pool_val(a)
    return '(int)0x%x' % v if (v >= 0x80000000 and a in WORD and a not in LONG) else '0x%x' % v
for f in sorted(glob.glob(R + '/src/modules/mod_*.c')):
    t = open(f).read()
    t = call_re.sub(sub_call, t)
    t = ptr_re.sub(sub_ptr, t)
    t = dat2_re.sub(sub_dat2, t)
    t = dat_re.sub(sub_dat, t)
    open(R + '/src/clean/' + os.path.basename(f), 'w').write(t)
print(stats)
