#include "../decls.h"
int FUN_8c1132da_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(ushort *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x118 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)0x11c + (int)unaff_r14));
  }
  if (*(int *)((int)0x118 + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x118 + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)0x118;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  *(short *)(iVar2 + 4 + (int)unaff_r14) = (short)unaff_r11;
  *(uint *)(iVar2 + 8 + (int)unaff_r14) = unaff_r11;
  *(uint *)(iVar2 + 0xc + (int)unaff_r14) = unaff_r11;
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c1132da\n.set _FUN_8c1132da, _FUN_8c1132da_def\n");
