#include "../decls.h"
float * FUN_8c0d6164_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  
  *(float *)(ar4 + 0x14) = *(float *)(ar4 + 0x14) + -0.1;
  *(float *)(ar4 + 4) = *(float *)(ar4 + 4) + *(float *)(ar4 + 0x14);
  *(float *)(ar4 + 8) = *(float *)(ar4 + 8) + -4.0;
  *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) + 0.015;
  pfVar1 = *(float **)(ar4 + 0x18);
  if (pfVar1 == (float *)0x0) {
    if (*(uint *)(ar4 + 0x1c) < 0xe6ffffff) {
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + 0x19000000;
    }
    pfVar1 = (float *)(ar4 + 0x10);
    if (1.0 <= *pfVar1) {
      *(undefined4 *)(ar4 + 0x1c) = 0xffffffff;
      pfVar1 = (float *)0x1;
      *(undefined4 *)(ar4 + 0x18) = 1;
    }
  }
  else if (pfVar1 == (float *)0x1) {
    pfVar1 = (float *)libgcc_divide_helper_0103d0(ar5,0x2d,ar6,ar7);
    if (pfVar1 == (float *)0x0) {
      pfVar1 = (float *)0x2;
      *(undefined4 *)(ar4 + 0x18) = 2;
    }
  }
  else if (pfVar1 == (float *)0x2) {
    if (*(uint *)(ar4 + 0x1c) < 0x7000000) {
      pfVar1 = (float *)0x0;
      *(undefined4 *)(ar4 + 0x20) = 0;
    }
    else {
      pfVar1 = (float *)0x6000000;
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + -0x6000000;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0d6164\n.set _FUN_8c0d6164, _FUN_8c0d6164_def\n");
