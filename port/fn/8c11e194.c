#include "../decls.h"
undefined4 FUN_8c11e194_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + unaff_r14) != 0x218df4f5) {
    uVar1 = FUN_8c11cd02(*(undefined4 *)(0xfc + unaff_r14),0xb);
    return uVar1;
  }
  if (ar5 == (uint *)0x0) {
    uVar2 = FUN_8c1204c4(unaff_r14 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(unaff_r14 + 0x3e);
  return 0;
}

__asm__(".globl _FUN_8c11e194\n.set _FUN_8c11e194, _FUN_8c11e194_def\n");
