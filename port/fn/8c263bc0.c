#include "../decls.h"
undefined4 FUN_8c263bc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  undefined4 ar5_00;
  int ar6_00;
  
  ar6_00 = (int)*(short *)(ar4 + 0x3c) << 0xb;
  ain0 = FUN_8c263798(*(undefined4 *)(ar4 + 8),(int)*(short *)(ar4 + 0x3e) << 0xb,ar6_00,ar7);
  ar5_00 = 0x19;
  FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x19,ar6_00,ar7,ain0);
  FUN_8c26346e(*(undefined4 *)(ar4 + 8),ar5_00,ar6_00,ar7);
  FUN_8c263b34(ar4,*(undefined4 *)(ar4 + 0x10),ar6_00,ar7);
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c263bc0\n.set _FUN_8c263bc0, _FUN_8c263bc0_def\n");
