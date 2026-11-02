#include "../decls.h"
undefined4 FUN_8c263bc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  code *in_r3;
  undefined4 ar5_00;
  int ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  ar6_00 = (int)*(short *)(ain0 + unaff_r14) << 0xb;
  (*in_r3)(*(undefined4 *)(unaff_r14 + 8),(int)*(short *)(unaff_r14 + 0x3e) << 0xb,ar6_00,ar7);
  ar5_00 = 0x19;
  FUN_8c26357a(*(undefined4 *)(unaff_r14 + 8),0x19,ar6_00,ar7,in_PR);
  FUN_8c26346e(*(undefined4 *)(unaff_r14 + 8),ar5_00,ar6_00,ar7);
  FUN_8c263b34(unaff_r14,*(undefined4 *)(unaff_r14 + 0x10),ar6_00,ar7);
  *(undefined1 *)(unaff_r14 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c263bc8\n.set _FUN_8c263bc8, _FUN_8c263bc8_def\n");
