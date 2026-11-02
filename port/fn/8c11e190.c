#include "../decls.h"
undefined4 FUN_8c11e190_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + ar4) != 0x218df4f5) {
    uVar1 = FUN_8c11cd02(*(undefined4 *)(0xfc + ar4),0xb);
    return uVar1;
  }
  if (ar5 == (uint *)0x0) {
    uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13);
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(ar4 + 0x3e);
  return 0;
}

__asm__(".globl _FUN_8c11e190\n.set _FUN_8c11e190, _FUN_8c11e190_def\n");
