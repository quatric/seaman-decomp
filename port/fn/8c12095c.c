#include "../decls.h"
uint FUN_8c12095c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int unaff_r10;
  int unaff_r11;
  uint unaff_r12;
  int iVar3;
  int *unaff_r14;
  
  puVar1 = (&FUN_8c120148);
  iVar3 = unaff_r10;
  if (0 < *unaff_r14) {
    do {
      ar7 = 0;
      ar6 = 0;
      uVar2 = (*(code *)puVar1)(unaff_r11,(int)unaff_r14 + iVar3 * 2 + 8,0,0);
      iVar3 = iVar3 + 1;
      unaff_r12 = (uint)((uVar2 & 0xff) == 0);
    } while (iVar3 < *unaff_r14);
  }
  *unaff_r14 = unaff_r10;
  if (unaff_r14[1] == 0) {
    (**(code **)(unaff_r11 + 0x18))(unaff_r11,unaff_r14,ar6,ar7);
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c12095c\n.set _FUN_8c12095c, _FUN_8c12095c_def\n");
