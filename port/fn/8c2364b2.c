#include "../decls.h"
int FUN_8c2364b2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = 0x8c4aa4f0;
  puVar2 = 0x8c4ab238;
  piVar1 = 0x8c4aabbc;
  iVar5 = (int)0x90;
  *(undefined4 *)(iVar5 + *(undefined4 *)0x8c4aabbc) = *(undefined4 *)0x8c4ab238;
  *(undefined4 *)(iVar5 + 4 + *piVar1) = puVar2[1];
  *(undefined4 *)(iVar5 + 8 + *piVar1) = puVar2[2];
  piVar3 = 0x8c4aabdc;
  *(undefined4 *)(iVar5 + 0xc + *piVar1) = puVar2[3];
  *(undefined4 *)*piVar3 = puVar2[4];
  *(undefined4 *)(*piVar3 + 4) = puVar2[7];
  *(undefined4 *)(*piVar3 + 0xc) = puVar2[8];
  if ((*puVar4 & (int)0x4000) == 0) {
    *(undefined4 *)(*piVar3 + 8) = puVar2[5];
    *(undefined4 *)(*piVar3 + 0x10) = puVar2[6];
  }
  else {
    *(undefined4 *)(*piVar3 + 0x10) = puVar2[5];
    *(undefined4 *)(*piVar3 + 8) = puVar2[6];
  }
  return iVar5 + 0xc;
}

__asm__(".globl _FUN_8c2364b2\n.set _FUN_8c2364b2, _FUN_8c2364b2_def\n");
