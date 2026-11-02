#include "../decls.h"
undefined4 FUN_8c1fbe1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int unaff_r13;
  int unaff_r14;
  
  do {
    iVar2 = FUN_8c1fce88(unaff_r14,ar5,ar6,ar7);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    unaff_r14 = unaff_r14 + 1;
  } while (unaff_r14 < unaff_r13);
  ar5_00 = 0;
  DAT_8c273a44 = 0;
  uVar1 = DAT_8c26d1e0;
  FUN_8c1f03a6(DAT_8c26d1e0,0,ar6,ar7,0);
  FUN_8c1fcadc(uVar1,ar5_00,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fbe1a\n.set _FUN_8c1fbe1a, _FUN_8c1fbe1a_def\n");
