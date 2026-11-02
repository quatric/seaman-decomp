#include "../decls.h"
uint FUN_8c11ffb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  uint unaff_r9;
  uint uVar3;
  uint uVar4;
  int a5;
  int iVar5;
  ushort *unaff_r14;
  
  a5 = (int)0xff;
  uVar3 = unaff_r9;
  uVar4 = unaff_r9;
  if (*unaff_r14 != 0) {
    do {
      iVar5 = *(int *)(*(int *)(unaff_r14 + 2) + uVar4 * 4);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) != 0)) {
        ar7 = 0;
        ar6 = 0;
        uVar2 = (**(code **)(iVar5 + 0x1c))(iVar5,a5,0,0);
        uVar3 = uVar3 | (uVar2 & 0xff) == 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)*unaff_r14);
  }
  puVar1 = (&FUN_8c1113d0);
  if (unaff_r14[4] != 0) {
    do {
      iVar5 = *(int *)(*(int *)(unaff_r14 + 6) + unaff_r9 * 4);
      if (iVar5 != 0) {
        ar7 = 0;
        ar6 = 0;
        uVar4 = (*(code *)puVar1)(iVar5,a5,0,0);
        uVar3 = uVar3 | (uVar4 & 0xff) == 0;
      }
      unaff_r9 = unaff_r9 + 1;
    } while ((int)unaff_r9 < (int)(uint)unaff_r14[4]);
  }
  (**(code **)(unaff_r14 + 0xc))(unaff_r14,*(undefined4 *)(unaff_r14 + 2),ar6,ar7);
  (**(code **)(unaff_r14 + 0xc))(unaff_r14,*(undefined4 *)(unaff_r14 + 6),ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c11ffb8\n.set _FUN_8c11ffb8, _FUN_8c11ffb8_def\n");
