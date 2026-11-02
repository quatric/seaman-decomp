#!/usr/bin/env python3
"""Iteratively repair units in port/wii/failing.txt: pointer-to-pointer conversions that C accepted but C++ rejects.
Reads g++ diagnostics, wraps the right-hand side of the offending single-line assignment/initialisation in a cast.
usage: wii_fixup.py <port/wii dir> [rounds]"""
import re, subprocess, sys, os
from concurrent.futures import ThreadPoolExecutor
W = sys.argv[1]; ROUNDS = int(sys.argv[2]) if len(sys.argv) > 2 else 6
CMD = ['powerpc-eabi-g++','-std=gnu++17','-fpermissive','-w','-fno-exceptions','-fno-rtti','-fno-strict-aliasing','-fsyntax-only']
CONV = re.compile(r"^(\S+?):(\d+):\d+: error: cannot convert '([^']+)'(?: \{aka '[^']+'\})? to '([^']+)'(?: \{aka '[^']+'\})? in (assignment|initialization)")
NOMATCH = re.compile(r"^(\S+?):(\d+):\d+: error: no match for 'operator=' \(operand types are '[^']+' and '[^']+\*'\)")
def split_assign(line):
    d = 0
    for i, c in enumerate(line):
        if c in '([{': d += 1
        elif c in ')]}': d -= 1
        elif c == '=' and d == 0 and line[i-1] not in '=!<>+-*/|&^%' and line[i+1] != '=':
            return i
    return -1
def rhs_end(t, i):
    d = 0
    for j in range(i, len(t)):
        c = t[j]
        if c in '([{': d += 1
        elif c in ')]}':
            if d == 0: return j
            d -= 1
        elif c in ',;' and d == 0: return j
    return len(t)
def patch_col(lines, ln, col, cast):
    t = lines[ln-1]
    eqs = [i for i, c in enumerate(t) if c == '=' and t[i-1] not in '=!<>+-*/|&^%' and t[i+1:i+2] != '=']
    if not eqs: return False
    i = min(eqs, key=lambda k: abs(k - (col - 1)))
    j = rhs_end(t, i + 1); rhs = t[i+1:j].strip()
    if rhs.startswith('(' + cast + ')('): return False
    lines[ln-1] = t[:i+1] + ' (' + cast + ')(' + rhs + ')' + t[j:]
    return True
CMP = re.compile(r"^(\S+?):(\d+):\d+: error: comparison between distinct pointer types")
RET = re.compile(r"^(\S+?):(\d+):\d+: error: cannot convert '[^']+'(?: \{aka '[^']+'\})? to '([^']+)'(?: \{aka '[^']+'\})? in return")
def patch_cmp(lines, ln):
    t = lines[ln-1]
    u = re.sub(r'(==|!=|<=|>=|<|>)(\s*)(\(*)(\(le<[^>]*>\* ?\))', r'\1\2(void* )\3\4', t)
    if u == t: return False
    lines[ln-1] = u; return True
def patch_ret(lines, ln, cast):
    t = lines[ln-1]; m = re.match(r'(\s*return )(.*);\s*$', t)
    if not m or m.group(2).startswith('(' + cast + ')'): return False
    lines[ln-1] = m.group(1) + '(' + cast + ')(' + m.group(2) + ');'; return True
def patch(lines, ln, cast):
    s = lines[ln-1]
    t = s.rstrip()
    if not t.endswith(';'): return False
    i = split_assign(t[:-1])
    if i < 0: return False
    rhs = t[i+1:-1].strip()
    if rhs.startswith('(' + cast + ')('): return False
    lines[ln-1] = t[:i+1] + ' (' + cast + ')(' + rhs + ');'
    return True
def fix(name):
    path = os.path.join(W, 'exec', name); n = 0
    for _ in range(ROUNDS):
        r = subprocess.run(CMD + [path], capture_output=True, text=True)
        if r.returncode == 0: return name, 'ok', n
        lines = open(path).read().split('\n'); changed = False
        for e in r.stderr.split('\n'):
            m = CMP.match(e)
            if m:
                if patch_cmp(lines, int(m.group(2))): changed = True; n += 1
                continue
            m = RET.match(e)
            if m:
                if patch_ret(lines, int(m.group(2)), m.group(3)): changed = True; n += 1
                continue
            m = CONV.match(e)
            if m:
                dst = m.group(4); col = int(e.split(':')[2])
                if '*' in dst and (patch(lines, int(m.group(2)), dst) or patch_col(lines, int(m.group(2)), col, dst)): changed = True; n += 1
                continue
            m = NOMATCH.match(e)
            if m and patch(lines, int(m.group(2)), 'unsigned'): changed = True; n += 1
        if not changed: break
        open(path, 'w').write('\n'.join(lines))
    r = subprocess.run(CMD + [path], capture_output=True, text=True)
    return name, 'ok' if r.returncode == 0 else 'fail', n
names = [l.strip() for l in open(os.path.join(W, 'failing.txt')) if l.strip()]
with ThreadPoolExecutor(8) as ex: res = list(ex.map(fix, names))
bad = [r[0] for r in res if r[1] != 'ok']
open(os.path.join(W, 'failing.txt'), 'w').write('\n'.join(bad) + ('\n' if bad else ''))
print(len(res), 'tried;', len(bad), 'still failing')
