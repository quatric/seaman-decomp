#include "../decls.h"
int FUN_8c113b54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)0xfc;
  puVar3 = *(undefined4 **)(iVar1 + ar4);
  *puVar3 = *(undefined4 *)(ar4 + 0x38);
  puVar3[1] = *(undefined4 *)(iVar1 + 0x48 + ar4);
  puVar3[2] = *(undefined4 *)(ar4 + 0x44);
  puVar3[3] = *(undefined4 *)(ar4 + 0x48);
  iVar1 = (int)0x1c0;
  puVar3[4] = *(undefined4 *)(ar4 + 0xc0);
  iVar2 = (int)0x98;
  puVar3[5] = *(undefined4 *)(iVar1 + ar4);
  puVar3[6] = *(undefined4 *)(iVar2 + ar4);
  iVar1 = (int)0x148;
  puVar3[7] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar3[8] = *(undefined4 *)(iVar1 + ar4);
  iVar2 = (int)0xa8;
  puVar3[9] = *(undefined4 *)(iVar1 + 0x10 + ar4);
  puVar3[10] = *(undefined4 *)(iVar2 + ar4);
  puVar3[0xb] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar3[0xc] = *(undefined4 *)(iVar2 + -8 + ar4);
  puVar3[0xd] = *(undefined4 *)(iVar2 + 0x10 + ar4);
  puVar3[0xe] = *(undefined4 *)(iVar2 + 0xc + ar4);
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c113b54\n.set _FUN_8c113b54, _FUN_8c113b54_def\n");
