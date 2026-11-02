#include "../decls.h"
undefined4 FUN_8c121b40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,float *ain0)

{
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  undefined4 extraout_fr0_03;
  float extraout_fr0_04;
  float fVar1;
  float fVar2;
  char cVar3;
  
  fVar2 = *ain0;
  FUN_8c120550(ar4,1,ar6,ar7);
  fVar1 = extraout_fr0;
  if (fVar2 < extraout_fr0) {
    fVar1 = extraout_fr0 + -4.2949673e+09;
  }
  *(int *)(unaff_r14 + 0x50) = (int)fVar1;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  fVar1 = extraout_fr0_00;
  if (fVar2 < extraout_fr0_00) {
    fVar1 = extraout_fr0_00 + -4.2949673e+09;
  }
  *(int *)(unaff_r14 + 0x58) = (int)fVar1;
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  *(float *)(unaff_r14 + 0x60) = (float)(int)(short)(int)extraout_fr0_01 * 0.002302585;
  FUN_8c120550(unaff_r14,4,ar6,ar7);
  cVar3 = '\0';
  *(uint *)(unaff_r14 + 0x5c) = (int)extraout_fr0_02 & 0xffff;
  FUN_8c120550(unaff_r14,5,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(unaff_r14 + 100) = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unaff_r14 + 100) = CONCAT44(extraout_fr0_03,extraout_fr1);
  }
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  fVar1 = extraout_fr0_04;
  if (fVar2 < extraout_fr0_04) {
    fVar1 = extraout_fr0_04 + -4.2949673e+09;
  }
  *(int *)(unaff_r14 + 0x54) = (int)fVar1;
  *(undefined1 *)(unaff_r14 + 0x4c) = 1;
  *(undefined1 *)(unaff_r14 + 0x4d) = 1;
  return 0;
}

__asm__(".globl _FUN_8c121b40\n.set _FUN_8c121b40, _FUN_8c121b40_def\n");
