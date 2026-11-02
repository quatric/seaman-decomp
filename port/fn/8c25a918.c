#include "../decls.h"
int FUN_8c25a918_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *ar4_00;
  undefined4 ar5_00;
  undefined4 *unaff_r14;
  
  iVar2 = FUN_8c25a962(ar5,ar5,ar6,ar7);
  if (iVar2 < 0) {
    return iVar2;
  }
  ar5_00 = *unaff_r14;
  ar4_00 = unaff_r14 + 1;
  iVar2 = FUN_8c25ab74(ar4_00,ar5_00,ar6,ar7);
  puVar1 = (&FUN_8c20a7e0);
  if (iVar2 == 0) {
    do {
      iVar2 = (*(code *)puVar1)(ar4_00,ar5_00,ar6,ar7);
    } while (iVar2 != 0);
    return 1;
  }
  FUN_8c20cf88(unaff_r14 + 1,ar5_00,ar6,ar7);
  *(undefined4 *)0x8c4aa6b4 = 8;
  return 0xfffffff8;
}

__asm__(".globl _FUN_8c25a918\n.set _FUN_8c25a918, _FUN_8c25a918_def\n");
