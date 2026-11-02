#include "../decls.h"
uint FUN_8c122070_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  uint in_r2;
  int iVar2;
  uint unaff_r12;
  uint uVar3;
  int unaff_r14;
  
  iVar2 = *(int *)(in_r0 + unaff_r14);
  uVar3 = unaff_r12;
  if (in_r2 < *(uint *)(0x240 + unaff_r14)) {
    do {
      if (*(int *)(uVar3 * 8 + 0x268 + unaff_r14 + 4) != 0) {
        (**(code **)(iVar2 + 0x18))
                  (*(undefined4 *)(uVar3 * 8 + 0x268 + unaff_r14 + 4),
                   0xf4 + unaff_r14,ar6,ar7);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(0x240 + unaff_r14));
  }
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(0x148 + unaff_r14) = 3;
  uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x23,0,0);
  if ((((uVar3 & 0xff) == 0) &&
      (uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x15,0,0), (uVar3 & 0xff) == 0)) &&
     (uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x10,*(undefined4 *)(0x248 + unaff_r14),2),
     puVar1 = (&FUN_8c121f38), (uVar3 & 0xff) == 0)) {
    *(char *)(0x234 + unaff_r14) = (char)unaff_r12;
    *(undefined **)(0xdc + unaff_r14) = puVar1;
  }
  else {
    unaff_r12 = 1;
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c122070\n.set _FUN_8c122070, _FUN_8c122070_def\n");
