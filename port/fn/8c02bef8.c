#include "../decls.h"
int FUN_8c02bef8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_10;
  
  uVar1 = FUN_8c02bfd8(ar4,ar5,ar6,ar7);
  iStack_10 = *(short *)((&DATA_8c1302bc) + (short)uVar1 * 2) + -1;
  uVar1 = FUN_8c02bf8c(ar4,ar5,ar6,ar7);
  if ((int)*(short *)((&DATA_8c1302e0) + *(int *)(0x13c + ar4) * 2) + (int)(short)uVar1 <
      iStack_10) {
    uVar1 = FUN_8c02bf8c(ar4,ar5,ar6,ar7);
    iStack_10 = (int)*(short *)((&DATA_8c1302e0) + *(int *)(0x13c + ar4) * 2) +
                (int)(short)uVar1;
  }
  return iStack_10;
}

__asm__(".globl _FUN_8c02bef8\n.set _FUN_8c02bef8, _FUN_8c02bef8_def\n");
