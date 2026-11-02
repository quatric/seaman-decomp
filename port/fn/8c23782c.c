#include "../decls.h"
undefined4 FUN_8c23782c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  if ((ar4[4] & 2) == 0) {
    iVar2 = FUN_8c25a914(0,ar4 + 5);
    puVar1 = (&FUN_8c25a1ee);
    if (iVar2 < 0) {
      *(short *)((int)ar4 + 0x42) = -(short)iVar2;
      return 0xffffffff;
    }
    *(undefined2 *)((int)ar4 + 0x42) = 0;
    iVar2 = (*(code *)puVar1)((uint)ar4[6] >> 0x10 & 0xff00);
    puVar1 = (&FUN_8c2571fe);
    if (iVar2 == 0) {
      *(short *)(ar4 + 0x10) = *(short *)(ar4 + 0x10) + 1;
      ar4[4] = ar4[4] | 2;
      (*(code *)puVar1)(ar4);
    }
    else {
      FUN_8c25a608(*ar4,2,ar4[5]);
      ar4[4] = ar4[4] | 8;
    }
  }
  else {
    *(short *)(ar4 + 0x10) = *(short *)(ar4 + 0x10) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c23782c\n.set _FUN_8c23782c, _FUN_8c23782c_def\n");
