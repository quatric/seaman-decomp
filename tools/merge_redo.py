# usage: merge_redo.py <root> <redo file> - replace the function blocks of src/modules/mod_8c*.c and mod_extra.c by the re-decompiled ones
import re, glob, sys
R, redo = sys.argv[1], sys.argv[2]
t = open(redo).read()
new = {}
for b in re.split(r'(?=\n/\* \S+ @ [0-9a-f]{8} callers=)', t):
    m = re.match(r'\n/\* \S+ @ ([0-9a-f]{8}) callers=', b)
    if m: new[m.group(1)] = b
done = set()
for f in glob.glob(R + '/src/modules/mod_8c*.c') + [R + '/src/modules/mod_extra.c']:
    s = open(f).read(); out = []; ch = False
    for p in re.split(r'(?=\n/\* \S+ @ [0-9a-f]{8} callers=)', s):
        m = re.match(r'\n/\* \S+ @ ([0-9a-f]{8}) callers=', p)
        if m and m.group(1) in new:
            hdr = re.match(r'(\n/\* [^\n]*\*/)', p).group(1)
            out.append(re.sub(r'^\n/\*[^\n]*\*/', lambda _: hdr, new[m.group(1)], count=1)); done.add(m.group(1)); ch = True
        else: out.append(p)
    if ch: open(f, 'w').write(''.join(out))
print(len(done), 'of', len(new))
