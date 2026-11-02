#include "../decls.h"
int FUN_8c113132_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x10c + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)0x110 + (int)unaff_r14));
  }
  if (*(int *)((int)0x10c + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x10c + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)0x10c;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  iVar2 = iVar2 + 4;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  return iVar2;
}

__asm__(".globl _FUN_8c113132\n.set _FUN_8c113132, _FUN_8c113132_def\n");
