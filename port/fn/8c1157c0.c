#include "../decls.h"
int FUN_8c1157c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(0x1ac + ar4) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined2 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined2 *)(ar4 + 0x70) = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar1 + *(int *)(0xa8 + ar4)) = 0;
  } while (uVar2 <= *(uint *)(ar4 + 0x38));
  uVar2 = 0;
  if (*(int *)(0x144 + ar4) + *(int *)(0xb4 + ar4) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(0xac + ar4) + iVar1) = 0;
    } while (uVar2 < (uint)(*(int *)(0x144 + ar4) + *(int *)(0xb4 + ar4)));
  }
  iVar1 = 0xa0 + 0x18;
  puVar3 = (undefined4 *)**(undefined4 **)(0xa0 + ar4);
  uVar2 = 0;
  if (*(int *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (int)0xb8;
      uVar2 = uVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(uint *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1157c0\n.set _FUN_8c1157c0, _FUN_8c1157c0_def\n");
