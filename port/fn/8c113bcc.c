#include "../decls.h"
int FUN_8c113bcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)0xfc;
  puVar2 = *(undefined4 **)(iVar1 + ar4);
  *(undefined4 *)(ar4 + 0x38) = *puVar2;
  *(undefined4 *)(iVar1 + 0x48 + ar4) = puVar2[1];
  *(undefined4 *)(ar4 + 0x44) = puVar2[2];
  *(undefined4 *)(ar4 + 0x48) = puVar2[3];
  *(undefined4 *)(ar4 + 0xc0) = puVar2[4];
  *(undefined4 *)(0x1c0 + ar4) = puVar2[5];
  iVar1 = (int)0x98;
  *(undefined4 *)(iVar1 + ar4) = puVar2[6];
  *(undefined4 *)(iVar1 + 4 + ar4) = puVar2[7];
  iVar1 = (int)0x148;
  *(undefined4 *)(iVar1 + ar4) = puVar2[8];
  *(undefined4 *)(iVar1 + 0x10 + ar4) = puVar2[9];
  iVar1 = (int)0xa8;
  *(undefined4 *)(iVar1 + ar4) = puVar2[10];
  *(undefined4 *)(iVar1 + 4 + ar4) = puVar2[0xb];
  *(undefined4 *)(iVar1 + -8 + ar4) = puVar2[0xc];
  *(undefined4 *)(iVar1 + 0x10 + ar4) = puVar2[0xd];
  *(undefined4 *)(iVar1 + 0xc + ar4) = puVar2[0xe];
  *(int *)(iVar1 + -4 + ar4) =
       (*(int *)(ar4 + 0x38) + *(int *)(iVar1 + 0x10 + ar4) + 1) * 4 + *(int *)(iVar1 + -8 + ar4);
  *(undefined4 *)(iVar1 + 0x60 + ar4) = *(undefined4 *)(ar4 + 0x38);
  return iVar1 + 0x60;
}

__asm__(".globl _FUN_8c113bcc\n.set _FUN_8c113bcc, _FUN_8c113bcc_def\n");
