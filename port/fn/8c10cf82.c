#include "../decls.h"
undefined4 FUN_8c10cf82_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  ushort unaff_r8;
  int iVar2;
  undefined4 *unaff_r10;
  int unaff_r11;
  ushort *unaff_r12;
  int *piVar3;
  int a4;
  
  piVar3 = (int *)*unaff_r10;
  a4 = *ar4;
  iVar2 = unaff_r11;
  if (*unaff_r12 != 0) {
    do {
      if (*piVar3 != 0) {
        (**(code **)(a4 + 0x18))(a4,*piVar3,ar6,ar7);
        (**(code **)(a4 + 0x18))(a4,piVar3[2],ar6,ar7);
        *piVar3 = unaff_r11;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < (int)(uint)*unaff_r12);
  }
  if (*unaff_r12 != unaff_r8) {
    if (*unaff_r12 != 0) {
      (**(code **)(a4 + 0x18))(a4,*unaff_r10,ar6,ar7);
    }
    if (unaff_r8 != 0) {
      uVar1 = (**(code **)(a4 + 0x14))(a4,(uint)unaff_r8,0xc,ar7);
      *unaff_r10 = uVar1;
    }
    *unaff_r12 = unaff_r8;
  }
  return *unaff_r10;
}

__asm__(".globl _FUN_8c10cf82\n.set _FUN_8c10cf82, _FUN_8c10cf82_def\n");
