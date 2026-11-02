#include "../decls.h"
int FUN_8c113e64_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = (uint *)(*(int *)(*(int *)(ar4 + 0x44) + ar5 * 4) + 4);
  iVar4 = ar6 - *(int *)(ar4 + 0x48);
  uVar1 = *puVar3;
  while (uVar1 < (uint)((int)(iVar4 + (uint)(iVar4 < 0)) >> 1)) {
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
    uVar1 = *puVar3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c113e64\n.set _FUN_8c113e64, _FUN_8c113e64_def\n");
