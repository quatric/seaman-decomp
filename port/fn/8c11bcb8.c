#include "../decls.h"
undefined4 FUN_8c11bcb8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  puVar1 = (&memmove);
  puVar5 = ar5 + 2;
  iVar3 = *(int *)(ar4 + 0x54);
  iVar4 = iVar3 * 4;
  *ar5 = (uint)*(ushort *)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(ar4 + 0x2a);
  (*(code *)puVar1)(puVar5,*(undefined4 *)(ar4 + 0x2c),iVar4);
  puVar5 = puVar5 + iVar3;
  (*(code *)puVar1)(puVar5,*(undefined4 *)(ar4 + 0x34),iVar4);
  (*(code *)puVar1)(puVar5 + iVar3,*(undefined4 *)(ar4 + 0x38),iVar4);
  iVar4 = *(int *)(ar4 + 0x44) - *(int *)(ar4 + 0x3c);
  puVar5 = puVar5 + iVar3 + iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  *puVar5 = iVar4 >> 2;
  iVar4 = *(int *)(ar4 + 0x48) - *(int *)(ar4 + 0x3c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  puVar5[1] = iVar4 >> 2;
  uVar2 = (*(code *)puVar1)(puVar5 + 2,*(undefined4 *)(ar4 + 0x3c),
                            iVar3 * (*(ushort *)(ar4 + 0x4c) + 1) * 4);
  return uVar2;
}

__asm__(".globl _FUN_8c11bcb8\n.set _FUN_8c11bcb8, _FUN_8c11bcb8_def\n");
