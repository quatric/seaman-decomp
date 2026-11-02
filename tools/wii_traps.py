#!/usr/bin/env python3
"""List the compiled units in which g++ emitted a `trap`: it does that where it proves the C dereferences a null pointer, which in
these decompiles is always a register Ghidra lost (an `extraout_rN` result kept live across a call, an `unaff_rN` input of a
function fragment). wii_xform.py runs the listed units in the SH-4 interpreter, which keeps those registers.
Writes port/wii/trap_units.txt and prints how many units were added. usage: wii_traps.py <port/wii dir>"""
import os, subprocess, sys
from concurrent.futures import ThreadPoolExecutor
W = sys.argv[1]; obj = os.path.join(W, 'obj'); out = os.path.join(W, 'trap_units.txt')
def has_trap(o):
    d = subprocess.run(['powerpc-eabi-objdump', '-d', os.path.join(obj, o)], capture_output=True, text=True).stdout
    return o.split('.')[0] if '\ttrap' in d else None
objs = [o for o in os.listdir(obj) if o.startswith('8c') and o.endswith('.cpp.o')]
with ThreadPoolExecutor(8) as ex: found = set(a for a in ex.map(has_trap, objs) if a)
old = set(l.strip() for l in open(out)) if os.path.exists(out) else set()
open(out, 'w').write(''.join(a + '\n' for a in sorted(found | old)))
print(len(found - old), 'new trap units;', len(found | old), 'listed')
