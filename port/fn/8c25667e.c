#include "../decls.h"
undefined4 FUN_8c25667e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  int *unaff_r13;
  uint uVar4;
  
  puVar2 = (&FUN_8c2567f8);
  puVar1 = 0x8c4aa6ac;
  for (uVar4 = 0; uVar4 < (uint)unaff_r13[1]; uVar4 = uVar4 + 1) {
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(uVar4 * 0xc + *unaff_r13 + 8),ar5,ar6,ar7);
    if (iVar3 < 0) {
      *puVar1 = uVar4;
      unaff_r12 = unaff_r11;
    }
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c25667e\n.set _FUN_8c25667e, _FUN_8c25667e_def\n");
