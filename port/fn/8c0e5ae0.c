#include "../decls.h"
undefined4 FUN_8c0e5ae0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  
  ar5_00 = ar5;
  s_Failed_to_set_texture_wrap_0d6058(ar4 + 0x15bc,ar5,ar6,ar7);
  s_Failed_to_set_texture_s_015252(ar4 + 0x10dc,ar5_00,ar6,ar7);
  uVar1 = FUN_8c0d9b60(ar4,ar5 & 0xff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e5ae0\n.set _FUN_8c0e5ae0, _FUN_8c0e5ae0_def\n");
