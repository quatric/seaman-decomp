#include "../decls.h"
undefined4 FUN_8c0e004c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  uint a5;
  undefined4 in_PR;
  
  FUN_8c0db008(ar4,ar5,ar6,ar7);
  ar5_00 = 0;
  FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7);
  FUN_8c0d064c(ar4 + 0x4ec9,ar5_00,ar6,ar7);
  noop_0d98f4(ar4 + 0x89c1,ar5_00,ar6,ar7,in_PR);
  a5 = ar5;
  FUN_8c0d50ec(ar4 + 0x42b,ar5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    (**(code **)(*ar4 + 0x1c4))(ar4,a5,ar6,ar7);
  }
  else {
    (**(code **)(*ar4 + 0x7c))(ar4,a5,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c0e004c\n.set _FUN_8c0e004c, _FUN_8c0e004c_def\n");
