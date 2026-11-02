#include "../decls.h"
undefined4 FUN_8c25a608_def(int ar4,uint ar5,int ar6,undefined4 ar7,undefined4 ain0)

{
  int *a4;
  uint a5;
  int a6;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  a5 = ar5;
  a6 = ar6;
  for (uVar1 = 0; uVar1 < DAT_8c277b0c; uVar1 = uVar1 + 1) {
    a4 = (int *)(DAT_8c277b08 + iVar2);
    if (*a4 == ar4) {
      a4[4] = a4[4] | ar5;
      a4[5] = ar6;
      if ((ar5 & 2) != 0) {
        *(short *)(a4 + 0x10) = (short)a4[0x10] + 1;
        ain0 = FUN_8c2571fe(a4,a5,a6,ar7);
      }
    }
    iVar2 = iVar2 + 0x44;
  }
  return ain0;
}

__asm__(".globl _FUN_8c25a608\n.set _FUN_8c25a608, _FUN_8c25a608_def\n");
