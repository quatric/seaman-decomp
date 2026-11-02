#include "../decls.h"
undefined4 FUN_8c0f82a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  
  if (*(int *)(0x1014 + ar4) != 0) {
    if (*(int *)(0x1014 + ar4) != 1) {
      return 0;
    }
    uVar1 = ar5;
    ar6_00 = ar6;
    FUN_8c0f8214(ar4,ar5,ar6,ar7);
    if (*(int *)(0x8913c + ar4) == 1) {
      FUN_8c0fa6c8(ar4,uVar1,ar6_00,ar7);
    }
  }
  *(undefined4 *)(0x89138 + ar4) = 2;
  uVar1 = s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f82a4\n.set _FUN_8c0f82a4, _FUN_8c0f82a4_def\n");
