#include "../decls.h"
undefined4 FUN_8c0e03d4_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  s_Failed_wrap_0d9b8c(ar4,ar5,ar6,ar7);
  s_Failed_s_015312(ar4 + 0x106c,uVar2,ar6,ar7);
  s_Failed_wrap_0d06a8(ar4 + 0x13b24,uVar2,ar6,ar7);
  uVar2 = ar5;
  FUN_8c0d55a4(ar4 + 0x10ac,ar5,ar6,ar7);
  s_Failed_wrap_0d97d0(ar4 + 0x22704,uVar2,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    s_Failed_wrap_0d0a18(ar4 + 0x13b70,uVar2,ar6,ar7);
  }
  else {
    s_Failed_wrap_0d14cc(ar4 + 0x13b8c,uVar2,ar6,ar7);
  }
  uVar1 = s_Failed_s_015312(ar4 + 4,uVar2,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e03d4\n.set _FUN_8c0e03d4, _FUN_8c0e03d4_def\n");
