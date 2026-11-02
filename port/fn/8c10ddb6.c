#include "../decls.h"
undefined4 FUN_8c10ddb6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int *piVar1;
  int a6;
  undefined4 a7;
  int iVar2;
  int *unaff_r11;
  int *piVar3;
  int a4;
  
  a4 = *unaff_r11;
  (**(code **)(a4 + 0x18))(a4,**(undefined4 **)(in_r0 + (int)unaff_r11),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x134 + (int)unaff_r11),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x120 + (int)unaff_r11),ar6,ar7);
  FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1b,(int)0x8c + (int)unaff_r11,0);
  a7 = 0;
  a6 = (int)0x8e + (int)unaff_r11;
  FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1c,a6,0);
  iVar2 = 0;
  piVar1 = (int *)((int)0xc0 + (int)unaff_r11);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (**(code **)(a4 + 0x18))(a4,*piVar1,a6,a7);
    }
    if (piVar3[1] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[1],a6,a7);
    }
    if (piVar3[2] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[2],a6,a7);
    }
    if (piVar3[3] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[3],a6,a7);
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (**(code **)(a4 + 0x18))(a4,*piVar1,a6,a7);
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)((int)0xac + (int)unaff_r11) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xac + (int)unaff_r11),a6,a7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xb0 + (int)unaff_r11),a6,a7);
  }
  (**(code **)(a4 + 0x18))(a4,unaff_r11[3],a6,a7);
  (**(code **)(a4 + 0x18))(a4,unaff_r11[4],a6,a7);
  (**(code **)(a4 + 0x18))(a4,unaff_r11,a6,a7);
  return 0;
}

__asm__(".globl _FUN_8c10ddb6\n.set _FUN_8c10ddb6, _FUN_8c10ddb6_def\n");
