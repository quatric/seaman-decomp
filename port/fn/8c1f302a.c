#include "../decls.h"
undefined4 FUN_8c1f302a_def(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  
  if ((ar4 != (int *)0x0) && (*(int **)(*ar4 + 0x1c) != ar4)) {
    ar4[1] = ar5;
    iVar1 = (int)0x7ff;
    ar4[2] = ar6;
    ar4[3] = ar7;
    ar4[4] = ar7 + iVar1 >> 0xb;
    ar4[5] = 0;
    ar4[6] = 0;
    ar4[7] = 0;
    ar4[8] = 0;
    ar4[0xf] = 0;
    ar4[0x11] = 0;
    *(undefined2 *)(ar4 + 0x12) = 0;
    *(undefined2 *)((int)ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x13) = 1;
    *(undefined2 *)(ar4 + 0x14) = 0;
    *(undefined2 *)((int)ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f302a\n.set _FUN_8c1f302a, _FUN_8c1f302a_def\n");
