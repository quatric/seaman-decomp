# usage: prune_shadow.py <root> <redo file> - drop blocks for the redo file's addresses from the side module files (mod_redo*.c, redo_region.c) that would shadow the merged bodies
import re, sys
R, redo = sys.argv[1], sys.argv[2]
addrs = set(re.findall(r'@ ([0-9a-f]{8}) ', open(redo).read()))
for name in ('mod_redo.c', 'mod_redo2.c', 'redo_region.c'):
    p = R + '/src/modules/' + name
    t = open(p).read()
    keep, drop = [], 0
    for b in re.split(r'(?=\n/\* \S+ @ [0-9a-f]{8} callers=)', t):
        m = re.match(r'\n/\* \S+ @ ([0-9a-f]{8}) ', b)
        if m and m.group(1) in addrs: drop += 1; continue
        keep.append(b)
    open(p, 'w').write(''.join(keep)); print(name, 'dropped', drop)
