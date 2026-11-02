#include "../decls.h"
int FUN_8c0af2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_14 [16];
  
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 0x24,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0x14;
  *(undefined4 *)(ar4 + 0x48) = 0;
  FUN_8c023de0(auStack_14,ar5,ar6,ar7);
  FUN_8c023e04(ar4 + 0x24,auStack_14,ar6,ar7);
  free_if_nonnull_wrap_016ac4(auStack_14,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x30) = 0xff2f2f2f;
  *(undefined4 *)(ar4 + 0x34) = 0xff2f2f2f;
  *(undefined4 *)(ar4 + 0x38) = 0xff2f2f2f;
  *(undefined4 *)(ar4 + 0x3c) = 0xff2f2f2f;
  *(undefined1 *)(ar4 + 0x33) = 0;
  *(undefined1 *)(ar4 + 0x37) = 0;
  *(undefined1 *)(ar4 + 0x3b) = 0;
  *(undefined1 *)(ar4 + 0x3f) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0af2b8\n.set _FUN_8c0af2b8, _FUN_8c0af2b8_def\n");
