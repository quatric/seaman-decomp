#include "../decls.h"
int FUN_8c2029fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (&FUN_8c1efd14);
  iVar1 = 0x8c47e928;
  iVar5 = 0;
  do {
    pbVar3 = (byte *)(*(code *)puVar2)(iVar5);
    iVar6 = iVar5 + 1;
    iVar4 = iVar5 * 4;
    *(uint *)(iVar4 + iVar1) = (uint)*pbVar3;
    iVar5 = iVar6;
  } while (iVar6 < 0x18);
  return iVar4;
}

__asm__(".globl _FUN_8c2029fc\n.set _FUN_8c2029fc, _FUN_8c2029fc_def\n");
