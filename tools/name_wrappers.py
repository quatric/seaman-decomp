import re, glob, sys
R = sys.argv[1]
funcs = {}   # addr -> (name, body)
hdr = re.compile(r'^/\* (\S+) @ ([0-9a-f]{8}) callers=(\d+) callees=(\d+) \*/$', re.M)
for f in sorted(glob.glob(R + '/src/clean/mod_*.c')):
    t = open(f).read()
    ms = list(hdr.finditer(t))
    for i, m in enumerate(ms):
        body = t[m.end(): ms[i+1].start() if i + 1 < len(ms) else len(t)]
        funcs[int(m.group(2), 16)] = (m.group(1), body, int(m.group(4)))
names = {a: n for a, (n, b, c) in funcs.items()}
def real(n): return not re.match(r'^(FUN_|thunk_FUN_)', n)
call_only = re.compile(r'\{\s*(?:[A-Za-z_]\w*\s+\w+;\s*)*(?:return\s+)?(\w+)\([^;{}]*\);\s*(?:return[^;]*;\s*)?\}', re.S)
new = {}
for it in range(6):
    added = 0
    for a, (n, body, nc) in funcs.items():
        if real(names[a]) or nc != 1: continue
        stripped = re.sub(r'/\*.*?\*/', '', body, flags=re.S)
        sig_end = stripped.find('{')
        m = call_only.search(stripped[sig_end - 1:]) if sig_end > 0 else None
        if not m: continue
        callee = m.group(1)
        if real(callee) and not callee.endswith('_%08x' % a):
            nm = (callee[:-9] if re.search(r'_[0-9a-f]{6}$', callee) else callee) + '_wrap_%06x' % (a & 0xffffff)
            names[a] = nm; new[a] = nm; added += 1
    print('pass', it, 'added', added)
    if not added: break
open(R + '/notes/names_auto_wrappers.tsv', 'w').write(''.join('%08x\t%s\n' % kv for kv in sorted(new.items())))
print('total', len(new))
