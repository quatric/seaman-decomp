"""Generated code is kept in one file per 64 KB of guest address space (mod_8cXX0000.<ext>, as in src/clean and decomp/), not in
one file per function. Each unit in a region file starts with a marker line `//@unit <addr>`; the text up to the next marker is
the unit, exactly as the generator wrote it.
load(dir, ext) -> {addr: text}; save(dir, units, ext) writes the region files (only those whose text changed) and removes
per-function files left over from the old layout."""
import os, re, glob

MARK = '//@unit '
REGION = re.compile(r'^mod_(8c[0-9a-f]{2})0000\.(\w+)$')
UNIT = re.compile(r'^[0-9a-f]{8}\.\w+(\.\w+)?$')    # old layout: 8c0b6c3c.c, 8c0b6c3c.cpp, 8c0b6c3c.c.err, 8c0b6c3c.o


def region(addr):
    return 'mod_%s0000' % addr[:4]


def region_files(d, ext):
    return sorted(f for f in glob.glob(os.path.join(d, 'mod_8c*.' + ext)) if REGION.match(os.path.basename(f)))


def split(text):
    """{addr: unit text} of one region file"""
    out = {}
    parts = ('\n' + text).split('\n' + MARK)[1:]
    for i, part in enumerate(parts):
        addr, _, body = part.partition('\n')
        out[addr.strip()] = body + ('\n' if i < len(parts) - 1 else '')   # the newline in front of the next marker is the unit's own
    return out


def load(d, ext):
    units = {}
    for f in region_files(d, ext):
        units.update(split(open(f).read()))
    return units


def join(units, head=''):
    return head + ''.join('%s%s\n%s%s' % (MARK, a, units[a], '' if units[a].endswith('\n') else '\n') for a in sorted(units))


def save(d, units, ext, head=''):
    """write {addr: text} as region files; returns the names of the region files that changed"""
    os.makedirs(d, exist_ok=True)
    by = {}
    for a, t in units.items():
        by.setdefault(region(a), {})[a] = t
    changed = []
    for r, us in sorted(by.items()):
        p = os.path.join(d, '%s.%s' % (r, ext)); t = join(us, head)
        if not (os.path.exists(p) and open(p).read() == t):
            open(p, 'w').write(t); changed.append(os.path.basename(p))
    for f in region_files(d, ext):                     # regions that no longer hold any unit
        if os.path.basename(f)[:-len(ext) - 1] not in by: os.remove(f)
    for f in os.listdir(d):                            # the old one-file-per-function layout
        if UNIT.match(f): os.remove(os.path.join(d, f))
    return changed


def line_unit(text, line):
    """address of the unit that holds 1-based line `line` of a region file"""
    cur = None
    for i, l in enumerate(text.split('\n'), 1):
        if l.startswith(MARK): cur = l[len(MARK):].strip()
        if i >= line: return cur
    return cur
