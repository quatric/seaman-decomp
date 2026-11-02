#include "../decls.h"
undefined4 FUN_8c11bccc_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  int unaff_r13;
  int a4;
  int *piVar5;
  int unaff_r14;
  
  puVar1 = (&memmove);
  iVar4 = *(int *)(in_r0 + unaff_r14);
  ar6_00 = iVar4 * 4;
  *ar4 = (uint)*(ushort *)(unaff_r14 + 0x28);
  ar4[1] = (uint)*(ushort *)(unaff_r14 + 0x2a);
  (*(code *)puVar1)(unaff_r13,*(undefined4 *)(unaff_r14 + 0x2c),ar6_00,ar7);
  (*(code *)puVar1)(unaff_r13 + ar6_00,*(undefined4 *)(unaff_r14 + 0x34),ar6_00,ar7);
  a4 = unaff_r13 + ar6_00 + ar6_00;
  (*(code *)puVar1)(a4,*(undefined4 *)(unaff_r14 + 0x38),ar6_00,ar7);
  iVar3 = *(int *)(unaff_r14 + 0x44) - *(int *)(unaff_r14 + 0x3c);
  piVar5 = (int *)(a4 + ar6_00);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *piVar5 = iVar3 >> 2;
  iVar3 = *(int *)(unaff_r14 + 0x48) - *(int *)(unaff_r14 + 0x3c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  piVar5[1] = iVar3 >> 2;
  uVar2 = (*(code *)puVar1)(piVar5 + 2,*(undefined4 *)(unaff_r14 + 0x3c),
                            iVar4 * (*(ushort *)(unaff_r14 + 0x4c) + 1) * 4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11bccc\n.set _FUN_8c11bccc, _FUN_8c11bccc_def\n");
