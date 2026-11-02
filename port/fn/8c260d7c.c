#include "../decls.h"
undefined4
FUN_8c260d7c_def(ushort *ar4,int ar5,short *ar6,undefined1 *ar7,undefined1 *s0,undefined1 *s4,
            undefined1 *s8,uint *s12,uint *s16)

{
  undefined4 uVar1;
  undefined4 *extraout_r3;
  uint uVar2;
  
  if (ar5 < 0x10) {
    return 0xffffffff;
  }
  if (((int)(uint)*ar4 >> 8 | (*ar4 & 0xff) << 8) == 0x8000) {
    *ar6 = (ar4[1] >> 8 | ar4[1] << 8) + 4;
    *ar7 = (char)ar4[2];
    *s4 = *(undefined1 *)((int)ar4 + 5);
    *s0 = (char)ar4[3];
    *s8 = *(undefined1 *)((int)ar4 + 7);
    uVar2 = *(uint *)(ar4 + 4);
    *s12 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)(ar4 + 6);
    *s16 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar1 = libgcc_divide_helper_010468(((char)*s4 + -2) * 8,(int)(char)*s0);
    *extraout_r3 = uVar1;
    return 0;
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c260d7c\n.set _FUN_8c260d7c, _FUN_8c260d7c_def\n");
