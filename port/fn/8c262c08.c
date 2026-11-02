#include "../decls.h"
undefined4 FUN_8c262c08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != 0) {
    if (*(int *)(unaff_r14 + 4) != 0) {
      ar4 = *(undefined4 *)(unaff_r14 + 4);
      FUN_8c25fc5c(ar4,ar5,ar6,ar7,in_PR);
    }
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    ar5_00 = 0;
    ar6_00 = 0x9c;
    uVar1 = memset(unaff_r14,0,0x9c,ar7);
    uVar1 = FUN_8c260cc8(unaff_r14,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c262c08\n.set _FUN_8c262c08, _FUN_8c262c08_def\n");
