#include "../decls.h"
int FUN_8c10bba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r11;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  iVar1 = FUN_8c11eb6c(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 == 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  if (((unaff_r14 == 0) && (iVar2 = unaff_r13[0xb], *unaff_r11 = iVar2, iVar2 != 0)) &&
     (iVar1 != *(int *)*unaff_r11)) {
    unaff_r14 = 0xb;
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c10bba8\n.set _FUN_8c10bba8, _FUN_8c10bba8_def\n");
