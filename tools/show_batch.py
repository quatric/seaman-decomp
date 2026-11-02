import re, glob, sys
R = sys.argv[1]; n = int(sys.argv[2]); maxsize = int(sys.argv[3]) if len(sys.argv) > 3 else 200
seen = set(open(R + '/notes/seen.txt').read().split())
rows = [l.split('\t') for l in open(R + '/src/modules/function_index.tsv').read().splitlines()[1:]]
un = [r for r in rows if r[2].startswith('FUN_') and r[0] not in seen and int(r[1]) <= maxsize]
un.sort(key=lambda r: -int(r[3]))
want = {r[0]: r for r in un[:n]}
out = []
for f in sorted(glob.glob(R + '/src/clean/mod_*.c')):
    t = open(f).read(); h = list(re.finditer(r'^/\* (\S+) @ ([0-9a-f]{8}) callers=(\d+) callees=(\d+) \*/$', t, re.M))
    for i, m in enumerate(h):
        if m.group(2) in want:
            b = t[m.end(): h[i+1].start() if i + 1 < len(h) else len(t)]
            b = re.sub(r'/\*.*?\*/', '', b, flags=re.S)
            b = re.sub(r'\n\s*(?:undefined\d*|int|uint|char|bool|float|double|ulonglong|longlong|byte|undefined1|short|ushort|code) \*{0,2}\w+(?: \[\d+\])?;', '', b)
            b = re.sub(r'\n\s*\n', '\n', b)
            b = re.sub(r'\n\s*(?:char in_FPSCR_\w+;|undefined\d* in_\w+;)', '', b)
            out.append('### %s callers=%s size=%s\n%s' % (m.group(2), m.group(3), want[m.group(2)][1], b.strip()[:480]))
            seen.add(m.group(2))
print('\n'.join(out))
open(R + '/notes/seen.txt', 'w').write('\n'.join(sorted(seen)) + '\n')
