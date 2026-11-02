#include "../decls.h"
undefined4 FUN_8c016584_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[0xb] = 0;
  ar4[9] = 0;
  ar4[10] = 0x42c80000;
  ar4[0xd] = -1;
  ar4[0xc] = -1;
  *(undefined2 *)((int)ar4 + 0x3e) = 0;
  *(undefined2 *)(ar4 + 0xf) = 0;
  *(undefined2 *)((int)ar4 + 0x3a) = 0;
  *(undefined2 *)(ar4 + 0xe) = 0;
  *ar4 = (int)(ar4 + 6);
  ar4[1] = (int)(ar4 + 0xc);
  ar4[2] = (int)(ar4 + 0xe);
  ar4[4] = 2;
  uVar1 = FUN_8c016658(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016584\n.set _FUN_8c016584, _FUN_8c016584_def\n");
