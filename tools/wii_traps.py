#!/usr/bin/env python3
"""List the compiled units in which g++ emitted a `trap`: it does that where it proves the C dereferences a null pointer, which in
these decompiles is always a register Ghidra lost (an `extraout_rN` result kept live across a call, an `unaff_rN` input of a
function fragment). wii_xform.py runs the listed units in the SH-4 interpreter, which keeps those registers.
Objects hold a whole region (port/wii/src/mod_*.cpp); each trap is charged to the `*_def` function around it.
Writes port/wii/trap_units.txt and prints how many units were added. usage: wii_traps.py <port/wii dir>"""
import os, re, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__))); import units
W = sys.argv[1]; obj = os.path.join(W, 'obj'); out = os.path.join(W, 'trap_units.txt')
DEF = re.compile(r'^[A-Za-z_][A-Za-z_0-9 \*<>]*?\s*([A-Za-z_0-9]+_def)\(', re.M)
owner = {}                                              # *_def name -> unit address
for a, t in units.load(os.path.join(W, 'src'), 'cpp').items():
    for m in DEF.finditer(t): owner.setdefault(m.group(1), a); owner.setdefault(m.group(1)[:-4], a)   # objdump may print the alias
FN = re.compile(r'^[0-9a-f]+ <([^>]+)>:$')
def traps(o):
    d = subprocess.run(['powerpc-eabi-objdump', '-d', os.path.join(obj, o)], capture_output=True, text=True).stdout
    found, cur = set(), None
    for l in d.split('\n'):
        m = FN.match(l)
        if m: cur = m.group(1)
        elif '\ttrap' in l and cur in owner: found.add(owner[cur])
    return found
objs = [o for o in os.listdir(obj) if o.startswith('mod_8c') and o.endswith('.o')]
with ThreadPoolExecutor(8) as ex: found = set().union(*ex.map(traps, objs)) if objs else set()
old = set(l.strip() for l in open(out)) if os.path.exists(out) else set()
open(out, 'w').write(''.join(a + '\n' for a in sorted(found | old)))
print(len(found - old), 'new trap units;', len(found | old), 'listed')
