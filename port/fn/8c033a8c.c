#include "../decls.h"
undefined4 s_CAnimBody_SetAnimation_033a94_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  if (*(int *)(ar4 + 0x1c) == ar5) {
    *(undefined4 *)(ar4 + 0x70) = 0;
    uVar1 = 6;
  }
  else if (ar6 == -1) {
    *(int *)(ar4 + 0x1c) = ar5;
    *(undefined4 *)(ar4 + 0x28) = ar7;
    FUN_8c031b58(ar4,ar5,0xffffffff,ar7);
    *(undefined1 *)(ar4 + 0x54) = 0;
    *(undefined4 *)(ar4 + 0x70) = 0;
    uVar1 = 0;
  }
  else if ((*(int *)(ar4 + 0x2c) < 0) || (ar6 == 1)) {
    if (*(char *)(ar4 + 0x54) == '\x01') {
      *(undefined4 *)(ar4 + 0x70) = 0;
      uVar1 = 3;
    }
    else if (*(int *)(ar4 + 0x10) + -1 < ar5) {
      (*(code *)(&report_error_message))
                ((&DATA_8c132cb8),(&DATA_8c132cb8) + 0x16,1,
                 2);
      uVar1 = 4;
    }
    else if (ar6 == 0) {
      if (*(int *)(ar4 + 0x70) == 0) {
        *(int *)(ar4 + 0x2c) = ar5;
        *(undefined4 *)(ar4 + 0x30) = ar7;
        uVar1 = 1;
      }
      else {
        *(int *)(ar4 + 0x1c) = ar5;
        *(undefined4 *)(ar4 + 0x28) = ar7;
        uVar1 = 0;
      }
    }
    else if (ar6 == 1) {
      ar5_00 = ar5;
      s_CAnimBody_SetInterpolate_033f7e(ar4,ar5,1,ar7);
      *(int *)(ar4 + 0x1c) = ar5;
      FUN_8c031b58(ar4,ar5_00,ar6,ar7);
      uVar1 = 2;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(ar4 + 0x70) = 0;
    uVar1 = 5;
  }
  return uVar1;
}

__asm__(".globl _s_CAnimBody_SetAnimation_033a94\n.set _s_CAnimBody_SetAnimation_033a94, _s_CAnimBody_SetAnimation_033a94_def\n");
