#include "../decls.h"
undefined4 FUN_8c26304a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(unaff_r13 + 4);
  iVar1 = get_field_4_25ff38(uVar2,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c262e10(unaff_r13,ar5,ar6,ar7);
  }
  FUN_8c2602f4(uVar2,ar5,ar6,ar7);
  iVar1 = get_field_4_25ff38(uVar2,ar5,ar6,ar7);
  if (iVar1 == 3) {
    uVar2 = FUN_8c262f02(unaff_r13,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26304a\n.set _FUN_8c26304a, _FUN_8c26304a_def\n");
