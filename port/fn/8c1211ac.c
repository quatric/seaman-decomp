#include "../decls.h"
int FUN_8c1211ac_def(byte *ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (ar5 != 0) {
    do {
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + *(int *)((&DATA_8c1293e4) + (uint)*ar4 * 4);
      ar4 = ar4 + ar6;
    } while (uVar1 < ar5);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1211ac\n.set _FUN_8c1211ac, _FUN_8c1211ac_def\n");
