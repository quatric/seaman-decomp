import re, sys, os
R = sys.argv[1]
BIN = R + '/disc/1ST_READ.BIN'; size = os.path.getsize(BIN)
BASE = 0x8c010000; IMG_END = BASE + size; RAM_END = 0x8d000000
undef = [l.strip() for l in open(R + '/port/undef_all.txt') if l.strip()]
out = ['/* Generated: data symbols backed by an embedded copy of the original program image. LINK-LEVEL ONLY - the image still holds SH-4 addresses,',
       ' * so none of this behaves like the Dreamcast memory map. */',
       '__asm__(".section __DATA,__image\\n.globl _g_image\\n.p2align 4\\n_g_image:\\n.incbin \\"%s\\"\\n.text\\n");' % BIN,
       '__asm__(".globl _g_ram\\n.zerofill __DATA,__bss,_g_ram,0x%x,4\\n.globl _g_hw\\n.zerofill __DATA,__bss,_g_hw,0x1000000,4\\n");' % (RAM_END - IMG_END)]
placeholders = []; mapped = 0
for n in undef:
    c = n[1:] if n.startswith('_') else n          # C name
    if c in ('CacheBlockInvalidate','CacheBlockPurge','CacheBlockWriteBack','SQRT','TrapAlways','halt_baddata','halt_unimplemented','mac_lOp','mac_wOp','sin','cos','_chkstk_darwin','chkstk_darwin','_stack_chk_fail','stack_chk_fail','stack_chk_guard') : continue
    m = re.search(r'([0-9a-f]{8})$', c)
    if not m:
        placeholders.append(c); continue
    a = int(m.group(1), 16)
    if BASE <= a < IMG_END: tgt = '_g_image+%d' % (a - BASE)
    elif IMG_END <= a < RAM_END: tgt = '_g_ram+%d' % (a - IMG_END)
    else: tgt = '_g_hw+%d' % (a & 0xffffff)
    out.append('__asm__(".globl _%s\\n.set _%s, %s\\n");' % (c, c, tgt)); mapped += 1
for c in placeholders: out.append('unsigned char %s[16];' % c)
open(R + '/port/data_syms.c', 'w').write('\n'.join(out) + '\n')
print('mapped', mapped, 'placeholders', len(placeholders), placeholders[:8])
