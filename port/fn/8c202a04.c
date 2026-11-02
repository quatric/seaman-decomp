#include "../decls.h"
int FUN_8c202a04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_r13;
  int unaff_r14;
  int iVar5;
  
  puVar2 = (&FUN_8c1efd14);
  iVar1 = 0x8c47e928;
  do {
    pbVar3 = (byte *)(*(code *)puVar2)(unaff_r14,ar5,ar6,ar7);
    iVar5 = unaff_r14 + 1;
    iVar4 = unaff_r14 * 4;
    *(uint *)(iVar4 + iVar1) = (uint)*pbVar3;
    unaff_r14 = iVar5;
  } while (iVar5 <= unaff_r13);
  return iVar4;
}

__asm__(".globl _FUN_8c202a04\n.set _FUN_8c202a04, _FUN_8c202a04_def\n");
