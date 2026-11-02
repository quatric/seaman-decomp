#include "../decls.h"
undefined4 FUN_8c0e6c8c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR;
  
  ar5_00 = ar5;
  FUN_8c0d9b60(ar4,ar5,ar6,ar7);
  s_Failed_to_set_texture_s_015252(ar4 + 4,ar5_00,ar6,ar7);
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = noop_0d8458(ar4 + 0x10dc,ar5_00,ar6,ar7,in_PR);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e6c8c\n.set _FUN_8c0e6c8c, _FUN_8c0e6c8c_def\n");
