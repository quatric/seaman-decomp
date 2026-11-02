#include "../decls.h"
undefined4 FUN_8c20a8e0_def(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint ar6_00;
  uint ar6_01;
  uint ar5_00;
  byte in_IMASK;
  char in_S;
  byte in_T;
  undefined4 *in_stack_ffffffdc;
  
  if ((((ar4 & 0x1f) == 0) && ((ar5 & 0x1f) == 0)) &&
     (((in_T | in_S << 1) & 0xf0) == 0 && (in_IMASK & 0xf) == 0)) {
    ar5_00 = ar6;
    FUN_8c20a84e(ar5,ar6,ar6,ar7,in_stack_ffffffdc);
    ar6_01 = ar6 & 0xffffffe0;
    if (ar6_01 == 0) {
      _DAT_8c4a9fd8 = 0;
    }
    else {
      do {
        ar7 = 0x18;
        ar5_00 = ar5;
        iVar1 = sh4_dmac_202f40(ar4 + 0x11000000,ar5,ar6_01,0x18,&stack0xffffffdc);
      } while (iVar1 == 0x100);
      _DAT_8c4a9fd8 = *in_stack_ffffffdc;
    }
    ar6_00 = ar6 & 0x1f;
    if (ar6_00 != 0) {
      ar5_00 = ar5 + ar6_01;
      FUN_8c20731e(ar4 + ar6_01 + -0x5c000000,ar5_00,ar6_00,ar7);
    }
    if (_DAT_8c4a9fdc == 1) {
      FUN_8c203320(_DAT_8c4a9fd8,ar5_00,ar6_00,ar7);
    }
  }
  else {
    FUN_8c20731e(ar4 + 0xa4000000,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c20a8e0\n.set _FUN_8c20a8e0, _FUN_8c20a8e0_def\n");
