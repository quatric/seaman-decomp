#include "../decls.h"
int FUN_8c120550_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = *(int *)(*ar4 + 0x34);
  for (psVar2 = *(short **)(iVar1 + (uint)*(byte *)(ar4 + 1) * 4);
      (*psVar2 != (short)ar5 && (*psVar2 != 0)); psVar2 = psVar2 + 4) {
  }
  if (*psVar2 != 0) {
    iVar1 = 4;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c120550\n.set _FUN_8c120550, _FUN_8c120550_def\n");
