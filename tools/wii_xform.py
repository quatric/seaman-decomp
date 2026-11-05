#!/usr/bin/env python3
"""Wii (big-endian PowerPC) source transform for the units in port/exec (region files, tools/units.py).
Guest memory stays little-endian; every pointer to a multi-byte scalar becomes a pointer to the le<T> proxy
(port/wii/lep.h), so loads/stores byte-swap. Pointer cells (T**) become le<T*>* (guest addresses are 32-bit LE words).
usage: wii_xform.py <port dir> <out dir> [glob-prefix]"""
import re, sys, os, glob
WIDE = r'(?:unsigned\s+long\s+long|unsigned\s+int|unsigned\s+short|unsigned|int|uint|short|ushort|float|double|longlong|ulonglong|undefined2|undefined4|undefined8|float10|wchar16)'
NARROW = r'(?:const\s+char|unsigned\s+char|char|byte|uchar|undefined1|undefined|void|code|bool|int3|uint3|undefined3)'
TY = re.compile(r'(?<![\w])((?:const\s+)?(?:' + WIDE + '|' + NARROW + r'))\s*(\*+)(?![\w]*\s*=\s*\*)')
WIDE_RE = re.compile(r'^(?:const\s+)?' + WIDE + '$')
def repl(m):
    base, stars = m.group(1), len(m.group(2))
    if not WIDE_RE.match(base) and stars < 2:
        return m.group(0)
    cur = ('le<%s>' % re.sub(r'\s+', ' ', base)) if WIDE_RE.match(base) else re.sub(r'\s+', ' ', base)
    # first star: pointer to cur; each further star: pointer to a 32-bit pointer cell
    t = cur
    for i in range(stars):
        if i == 0:
            t = t + '*'
        else:
            t = 'le<%s>*' % t
    return t + ' '
CLASH = ('memmove', 'memset', 'rand', 'strcpy')
HWPTR = re.compile(r'\(le<([^<>]*)>\* ?\)((?:\(unsigned(?: long)?\))+)(0x(?:(?:a0|a4|a5|e0|f0)[0-9a-f]{6}|ff[0-9a-e][0-9a-f]{5}))')
DMAC_UNIT = """#include "../decls.h"
extern "C" {
unsigned host_dmac(unsigned, unsigned, unsigned, unsigned);
int sh4_dmac_202f40_def(int ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  return (int)host_dmac(ar4, ar5, ar6, ar7);
}
__asm__(".globl sh4_dmac_202f40\\n.set sh4_dmac_202f40, sh4_dmac_202f40_def\\n");
}
"""
import json
_HERE = os.path.dirname(os.path.abspath(__file__))
# pointer-to-member call helper 8c0101bc (Ghidra: pure_virtual_stub) loses r0, the member-pointer record; tools/pmf_sites.py recovers it per call site
PMF = json.load(open(os.path.join(_HERE, 'pmf_sites.json')))
_NAME2ADDR = {}
def _load_names(port):
    for m in re.finditer(r'\{0x(8c[0-9a-f]{6}),\(void\*\)\w+,"(\w+)"\}', open(os.path.join(port, 'exec', 'xlat_tab.c')).read()): _NAME2ADDR[m.group(2)] = m.group(1)
def pmf_fix(src):
    m = re.search(r'(?:ring\[rp\+\+ & 255\] = |TRACE_ENTER\()"(\w+)"', src)
    recs = PMF.get(_NAME2ADDR.get(m.group(1), '')) if m else None
    if not recs: return src
    pat = re.compile(r'(?<![\w])pure_virtual_stub\(')
    ms = list(pat.finditer(src))
    if len(ms) != len(recs): return src
    out, pos = [], 0
    for mm, rec in zip(ms, recs):
        i = mm.end(); depth = 1
        while depth:
            depth += {'(': 1, ')': -1}.get(src[i], 0); i += 1
        args = src[mm.end():i - 1]
        out.append(src[pos:mm.start()])
        if rec: out.append('({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(%s),%s); })' % (rec, args))
        else: out.append(src[mm.start():i])
        pos = i
    out.append(src[pos:])
    return ''.join(out)

def xform(src):
    src = pmf_fix(src)
    # the draw-mode words at 8c4aad80/82/84/86 are 16-bit fields (mov.w) that the decompile typed as 32-bit
    src = re.sub(r'\*\((?:le<undefined4>\* |undefined4 \*)\)\(unsigned\)\(unsigned\)(0x8c4aad8[0246])\b', r'*(le<unsigned short>* )(unsigned)(unsigned)\1', src)
    # a vtable pointer Ghidra typed as float is converted numerically by the (int) cast; the hardware just reads the bits
    src = src.replace('(((int)*(le<float>* )(unsigned)(', '((*(le<int>* )(unsigned)(').replace('(((int)*(float *)(unsigned)(', '((*(int *)(unsigned)(')
    # a call through a constant the generator already translated got translated again (a host pointer is no guest address)
    src = src.replace('xlat((unsigned long)(xlat(0x', 'xlat((unsigned long)((0x')
    # constant addresses in the hardware windows are polled registers: make those accesses volatile
    # SH-4 DMAC channel 2 queue (8c202f40): no DMAC or interrupt here, so every request is carried out at once by the host (TA FIFO and texture memory)
    if 'sh4_dmac_202f40_def' in src:
        return DMAC_UNIT
    if 's_SPEECH_0faa98_def' in src:
        # speech resource lookups: no microphone/speech data here, so report "nothing to load" and let the state machine return to idle
        src = re.sub(r'(\(vsp = \(\(unsigned long\)\(fr0_ - 76\)\), FUN_8c02126c\(([^;]*)\)\));', lambda m: '({ extern void host_log(const char*,...); int r_ = (int)(%s); static int n_; if (n_++ < 30) host_log("02126c %%s r=%%d\\n", (const char*)(unsigned long)(%s), r_); r_; });' % (m.group(1), m.group(2).split(',')[1]), src)
    if 's_SPEECH_0fae26_def' in src:
        # speech vocabulary load at request start: log the real loader result
        src = re.sub(r'(\(vsp = \(\(unsigned long\)\(fr0_ - 80\)\), FUN_8c02126c\(([^;]*)\)\));', lambda m: '({ extern void host_log(const char*,...); int r_ = (int)(%s); static int n_; if (n_++ < 30) host_log("02126c-b %%s r=%%d\\n", (const char*)(unsigned long)(%s), r_); r_; });' % (m.group(1), m.group(2).split(',')[1]), src)
    if 'FUN_8c013bdc_def' in src:
        # atoi is `mov #10,r6; jmp strtol; mov #0,r5` with the string still in r4; the decompile shifted the arguments and lost it,
        # so every atoi returned 0 (script variables: the narration's closing `V=14` never reported "done" and INTRO_FIRST replayed)
        src = src.replace('FUN_8c0143f0(0,10,vr6,vr7)', 'FUN_8c0143f0(ar4,0,10,vr7)', 1)
    # disc request 8c02126c takes three stack words (first sector, sector count, flag) that every caller pushes and the decompile drops,
    # so the callee read stale stack: speech_update's section load (SCL sector index/count at +0x7c/+0x80) always got sector 0 of the
    # SDP, and the INTRO_FIRST jump re-loaded the section it came from forever
    REQ10 = {'FUN_8c01da90_def': [('0', '0', '0xa')], 's_SPEECH_0faa98_def': [('0', '0', '1'), ('(unsigned)ar4[0x1f]', '(unsigned)ar4[0x20]', '1')],
             's_SPEECH_0fae26_def': [('0', '0', '1')], 's_SPEECH_0fbf2e_def': [('0', '0', '1')]}
    for d, sites in REQ10.items():
        if d not in src:
            continue
        parts = re.split(r'(vsp = \(\(unsigned long\)\(fr0_ - \d+\)\)), FUN_8c02126c\(', src)
        assert len(parts) == 2 * len(sites) + 1, (d, len(parts))
        out = [parts[0]]
        for i, w in enumerate(sites):
            sp = parts[1 + 2 * i][len('vsp = '):]
            out.append('*(unsigned *)(%s - 12) = %s, *(unsigned *)(%s - 8) = %s, *(unsigned *)(%s - 4) = %s, vsp = %s - 12, FUN_8c02126c(' % (sp, w[0], sp, w[1], sp, w[2], sp))
            out.append(parts[2 + 2 * i])
        src = ''.join(out)
    if 'FUN_8c0fb20c_def' in src and os.environ.get('NARRATION_STANDIN'):
        # narration step: a record without a target file re-selects itself forever (the voice sample is what would end it); before ADX audio worked it was counted as played (0xe). Opt-in now (NARRATION_STANDIN=1)
        src = src.replace('    iVar2 = ar4[0x22];', '    iVar2 = ar4[0x22];\n    if (*(char *)(unsigned)(iVar2 + 0x48) == 0) { *(int *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0x70) = 0xe; *ar4 = 2; return 2; }', 1)
    if 'FUN_8c02077c_def' in src:
        # every call to the name search 8c02051c pushes this function's first stack argument (r11) as its fifth argument; the decompile drops it
        src = src.replace('vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(', '*(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)s0, vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c02051c(')
    if 'FUN_8c2122ea_def' in src:
        # user tile clip line: x/y max are the fifth and sixth (stack) arguments, which the decompile never reads, so the clip came out
        # as (xmin, ymin, 0, 0) and the title plate's "Welcome"/clock slid past the plate unclipped
        src = src.replace('(*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(ar7));',
                          '(*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(ar7));\n  (*(unsigned *)(fr0_ - 0x28)) = *(unsigned *)(fr0_ + 0);\n  (*(unsigned *)(fr0_ - 0x24)) = *(unsigned *)(fr0_ + 4);', 1)
        assert 'fr0_ - 0x24' in src
    if 'FUN_8c0208ec_def' in src:
        # same dropped fifth (stack) argument for the name searches it calls
        for f in ('FUN_8c02051c', 'FUN_8c020600'):
            src = src.replace('vsp = ((unsigned long)(fr0_ - 0)), %s(' % f, '*(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = *(unsigned *)(fr0_ + 0), vsp = (((unsigned long)(fr0_ - 0)) - 8), %s(' % f)
    if 'FUN_8c01fec4_def' in src:
        # fifth (stack) argument of the name search: the node's second name field, ar5 + 0x30
        src = src.replace('vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(', '*(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)ar5 + 0x30, vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c02051c(', 1)
    if 'FUN_8c01fab4_def' in src:
        src = src.replace('vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c020600(', '*(unsigned *)((((unsigned long)(fr0_ - 2048)) - 8) + 0) = (unsigned)ar4[1] + 0x30, vsp = (((unsigned long)(fr0_ - 2048)) - 8), FUN_8c020600(', 1)
    if 'FUN_8c239150_def' in src:
        src = src.replace('  iVar1 = 0;\n  do {', '  { extern void host_log(const char*,...); extern const char *ring[256]; extern unsigned rp; if (ar5 > 0x1000) { static int nb_; if (nb_++ < 2) { host_log("tex key bad %x vsp=%lx ring:", ar5, vsp); for (int q_ = 2; q_ < 26; q_++) host_log(" %s", ring[(rp - q_) & 255]); host_log("\\n"); } } static int nl_; if (nl_++ < 4) { unsigned e_ = (unsigned)*ar4; host_log("tex lookup ar4=%x ent=%x key=%x e0=%08x %08x %08x e1=%08x %08x %08x\\n", (unsigned)(unsigned long)ar4, e_, ar5, (unsigned)*(le<unsigned>*)(e_), (unsigned)*(le<unsigned>*)(e_+4), (unsigned)*(le<unsigned>*)(e_+8), (unsigned)*(le<unsigned>*)(e_+12), (unsigned)*(le<unsigned>*)(e_+16), (unsigned)*(le<unsigned>*)(e_+20)); } }\n  iVar1 = 0;\n  do {', 1)
    if 'FUN_8c20732e_def' in src:
        src = src.replace('  CacheBlockWriteBack(ar4);', '  { extern void host_log(const char*,...); static unsigned c_, l_; c_++; if (c_ % 200000 == 1 || (c_ < 6)) host_log("wb %u ar4=%x (delta %d) vsp=%lx\\n", c_, (unsigned)ar4, (int)((unsigned)ar4 - l_), vsp); l_ = (unsigned)ar4; }\n  CacheBlockWriteBack(ar4);', 1)
    if 's_HARDWARE_211130_def' in src:
        # Ghidra models ftrc as the low word of a double built from the float's bits; the real result is the truncated integer
        src = src.replace('uVar3 = (uint)SUB84(in_dr2,0);', 'uVar3 = (uint)(long long)fVar13;')
        # the decompile drops the stack arguments pushed before bsr 211730 / 211876 / 211c98 (the fifth list size, 0, and the region count)
        S, A4 = '((unsigned long)(fr0_ - 172))', '((uint *)(fr0_ - 0x4c))[4]'
        ARGS = '((uint *)(fr0_ - 0x4c))[0],'
        def push(n, vals): return ', '.join('*(unsigned *)(%s - %d) = %s' % (S, 4 * n - 4 * i, v) for i, v in enumerate(vals)) + ', vsp = %s - %d, ' % (S, 4 * n)
        src = src.replace('vsp = %s, FUN_8c211730(%s' % (S, ARGS), push(1, [A4]) + 'FUN_8c211730(' + ARGS, 1)
        src = src.replace('vsp = %s, FUN_8c211876(%s' % (S, ARGS), push(2, [A4, '0']) + 'FUN_8c211876(' + ARGS, 1)
        src = src.replace('vsp = %s, FUN_8c211c98(%s' % (S, ARGS), push(3, [A4, '0', '(*(uint *)(fr0_ - 0x88))']) + 'FUN_8c211c98(' + ARGS, 1)
    if 'FUN_8c20a8e0_def' in src:
        src = src.replace('iVar1 = 0; (*(unsigned *)(fr0_ - 0x24)', '({ extern void host_vram_dma(unsigned,unsigned,unsigned); host_vram_dma(ar4,ar5,ar6_01); }); iVar1 = 0; (*(unsigned *)(fr0_ - 0x24)',1)
    return HWPTR.sub(r'(volatile le<\1>* )\2\3', TY.sub(repl, src))
# functions that use the FPU keep their SH-4 code and run in the interpreter (port/wii/host/wii_sh4.cpp): the decompile loses float
# arguments, results and FPU state across calls. notes/fpu_funcs.txt comes from tools/fpu_funcs.py.
sys.path.insert(0, _HERE)
from patches import NATIVE, HOST, STUBS
import units
def _fpu_set(port):
    p = os.path.join(port, '..', 'notes', 'fpu_funcs.txt')
    if not os.path.exists(p): return set()
    return set(l.split()[0] for l in open(p) if l.strip()) - set(NATIVE) - set(HOST)
# besides those, the register-argument helpers stay in the interpreter when it calls them (pointer-to-member call, r1/r0 divides,
# libgcc block copy with r0/r1/r2 arguments)
# 8c25754c (Ninja strip draw) carries the SQ write pointer in r2 from the header writer through the vertex writer into 8c2370dc,
# which the decompile drops (the list cursor became 0xac000000 and the translucent list was thrown away as an overflow).
# 8c239212 (texture-set loader) passed a misaligned surface descriptor (0x8c43b7da) to 8c25a838, so the surface it created overwrote
# the descriptor of the next texture-list entry (the tank's hamon0010r ended up with TCW 0x000c0000)
# sprintf callers: the SH-4 code pushes the format and every variadic word; the decompile keeps only the format, so they run interpreted
SPRINTF_CALLERS = ('8c0fc94c', '8c0fb494', '8c08bd20', '8c06d618', '8c029400', '8c015250', '8c0fd764', '8c0fcd2c', '8c0fc7c4', '8c0fc4fc', '8c0fa624', '8c0fa5f0',
                   '8c0fa5bc', '8c0fa204', '8c0f9774', '8c0f4f0c', '8c0f4e34', '8c0d99e8', '8c0bf7d0', '8c0a4590', '8c09d9c0', '8c0851f4', '8c0314fc', '8c015cdc', '8c015310')
# rtc_seconds_to_date: the decompile loses the divisor of days % 365 and the remainder it reuses (extraout_r2), so the date came out as e.g. Dec 160
# save layer: save_write_step 8c0b6c3c, save_check_files 8c0b6e6c and memcard_process_save_file_name 8c0b726c pass the VMS descriptions
# ("Seaman User Data" / "SEAMAN") to the memory-card manager as stack words, which the decompile drops, so the USR header was blank
SAVE_LAYER = ('8c0b6c3c', '8c0b6e6c', '8c0b726c')
# creature code whose switch Ghidra could not recover ("Could not recover jumptable"): the decompile calls the jump table as a function
# table (from the wrong base, 0x40 bytes past the real one) and drops every case body. CAnimal_release_child_and_update 8c060044
# (FrogMan line) and its Higyo-line counterpart 8c105094 hung the port on the first frame a Tadman or Gillman was in the tank
JUMPTABLE_UNITS = ('8c060044', '8c105094')
# Class_12a25c_m6_06e69c (the Higyo line's motion object: per-stage setup) copies its state handler's pointer-to-member records from
# 0x8c137900.. but Ghidra typed the index words (0xffffffff = not virtual) as bytes, so the record got index 0xff and the call
# through 8c0101bc took it as a vtable offset and crashed on the first frame a Gillman or Podfish was in the tank
PMF_BYTE_UNITS = ('8c06e69c',)
# the recogniser's per-frame sample feed (FUN_8c01d15c) pushes a pointer for the 64-bit read position as a stack word before both of its
# calls to the Maple mic library's 8c201da0, which copies 8 bytes through it; the decompile drops the push, so once a microphone
# delivered samples every frame wrote 8 bytes to whatever address that stack slot held, and the tank crashed a few hundred frames later
# (garbage vertex indices in gfx_box_overlap_test_like 8c23340c). Statically translated too (port/wii/sh4x/sh4x_list.txt)
MIC_STACK_UNITS = ('8c01d15c',)
# libc qsort (8c0140b4, only called by the recogniser's search, 8c11a83e) builds {base, size, compare} in its own stack frame and
# passes the worker (8c0140cc) a pointer to it; the decompile drops those stores, so the worker sorted with a garbage compare
# function and never returned (the game hung on the first spoken word). Statically translated too
QSORT_UNITS = ('8c0140b4', '8c0140cc')
INTERP_UNITS = ('8c25754c', '8c239212', '8c1f8300') + SPRINTF_CALLERS + SAVE_LAYER + JUMPTABLE_UNITS + PMF_BYTE_UNITS + MIC_STACK_UNITS + QSORT_UNITS
#   ADX core, ADXF, ADXSTM, ADXT | mwRna | SJ (stream joint)
INTERP_RANGES = (('8c25eca0', '8c26a246'), ('8c26b1ca', '8c26c000'), ('8c01a308', '8c01c9e0'), ('8c10a000', '8c126000'), ('8c201804', '8c202a84'))   # + the game's memory-card manager (its queue and wait loops; host/wii_vmu.cpp does the ops) + the L&H ASR1600 speech recogniser (its decompile left an object's callback unset) + Sega's Maple microphone library (64-bit sample positions passed on the stack, which the decompile drops)   # CRI ADX/SJ/mwRna and the Manatee sd library (its SR-dependent callbacks need the interpreter)
INTERP_EXTRA = ('8c0101bc', '8c010468', '8c01051c', '8c010614', '8c0106dc', '8c010794', '8c0107a0') + INTERP_UNITS
STUB_DEF = re.compile(r'^([A-Za-z_][A-Za-z_0-9 \*]*?)\s*([A-Za-z_0-9]+)_def\(', re.M)
def interp_stub(src, addr):
    m = STUB_DEF.search(src)
    if not m: return None
    t, name = re.sub(r'\s+', ' ', m.group(1).strip()), m.group(2)
    if t in ('unsigned long long', 'ulonglong', 'undefined8', 'longlong', 'long long'):
        rt, ret = 'unsigned long long', 'unsigned long long r_ = sh4_interp(0x%s, ar4, ar5, ar6, ar7); return ((unsigned long long)vin1 << 32) | (unsigned)r_;' % addr
    elif t == 'float':
        rt, ret = 'float', 'sh4_interp(0x%s, ar4, ar5, ar6, ar7); return sh4_fpu_fr0();' % addr
    elif t == 'void':
        rt, ret = 'void', 'sh4_interp(0x%s, ar4, ar5, ar6, ar7);' % addr
    else:
        rt, ret = 'unsigned', 'return (unsigned)sh4_interp(0x%s, ar4, ar5, ar6, ar7);' % addr
    tr = re.search(r'ring\[rp\+\+ & 255\] = ("[^"]*");', src)
    alias = re.search(r'__asm__\("\.globl (\w+)\\n\.set \1, (\w+)\\n"\);', src)
    return ('#include "../decls.h"\nextern "C" {\n#include "../trace.h"\n'
            'unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);\n'
            'extern unsigned vin1; float sh4_fpu_fr0(void);\n'
            '%s %s_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)\n{\n  TRACE_ENTER(%s);\n  %s\n}\n%s\n}\n'
            % (rt, name, tr.group(1) if tr else '"%s"' % name, ret, alias.group(0) if alias else ''))

if __name__ == '__main__':
    port, out = sys.argv[1], sys.argv[2]
    _load_names(port)
    pre = sys.argv[3] if len(sys.argv) > 3 else '8c'
    FPU = _fpu_set(port)
    # Ghidra's `((undefined1 *)(unsigned)K)[ADDR]` reads one byte where the code loads a word or long at ADDR+K (e.g. the TA list base
    # in 8c23666c, which set QACR to 0 and dropped every vertex line): those units keep their SH-4 code too
    BYTEIDX = re.compile(r'\(\((?:undefined1|char|byte|undefined) \*\)\(unsigned\)(?:0x)?[0-9a-f]+\)\[')
    EXEC = units.load(os.path.join(port, 'exec'), 'c')
    for a, t in EXEC.items():
        if a.startswith(pre) and BYTEIDX.search(t): FPU.add(a)
    FPU.update(INTERP_UNITS)
    # units where g++ proved a null dereference (a register the decompile lost); listed by tools/wii_traps.py after a compile
    tp = os.path.join(port, 'wii', 'trap_units.txt')
    if os.path.exists(tp): FPU.update(set(l.strip() for l in open(tp) if l.strip()) - set(NATIVE) - set(HOST) - set(STUBS))
    # CRI audio middleware: its decompile keeps losing registers (stack arguments past the fifth, results kept in r2/r3 across
    # libgcc helpers, function fragments); the whole library runs in the interpreter. The sd library and mwSnd stay native:
    # their AICA command paths are stubbed (patches.STUBS) and the mwSnd port slots are replaced by host/wii_audio.cpp.
    for a in EXEC:
        if any(lo <= a < hi for lo, hi in INTERP_RANGES) and a not in NATIVE and a not in HOST and a not in STUBS: FPU.add(a)
    tab = sorted(set(int(a, 16) for a in FPU) | set(int(a, 16) for a in INTERP_EXTRA))
    open(os.path.join(port, 'wii', 'host', 'interp_tab.inc'), 'w').write(''.join('0x%08xu,\n' % a for a in tab))
    nstub = 0
    pre = sys.argv[3] if len(sys.argv) > 3 else '8c'
    os.makedirs(out, exist_ok=True)
    WII = {}
    for addr in sorted(a for a in EXEC if a.startswith(pre)):
        s = EXEC[addr]
        s = re.sub(r'__asm__\("\.globl _(\w+)\\n\.set _\1, _(\w+)\\n"\);', r'__asm__(".globl \1\\n.set \1, \2\\n");', s)
        s = re.sub(r'\.globl (%s)\\n\.set \1,' % '|'.join(CLASH), lambda m: '.globl guest_%s\\n.set guest_%s,' % (m.group(1), m.group(1)), s)
        s = s.replace('.globl main\\n.set main,','.globl guest_main\\n.set guest_main,')
        s = re.sub(r'((?:case [^:\n]+|default):)([ \t]*\n[ \t]*\})', r'\1 ;\2', s)
        i = s.index('\n', s.index('#include "../decls.h"')) + 1
        s = re.sub(r'ring\[rp\+\+ & 255\] = ("[^"]*");', r'TRACE_ENTER(\1);', s)
        if addr in FPU:
            st = interp_stub(s, addr)
            if st:
                WII[addr] = st; nstub += 1; continue
        s = s[:i] + 'extern "C" {\n#include "../trace.h"\n' + s[i:] + '\n}\n'
        WII[addr] = xform(s)
    units.save(out, WII, 'cpp')
    print(nstub, 'units run in the SH-4 interpreter')
