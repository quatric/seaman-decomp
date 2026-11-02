#include "../decls.h"
undefined4 s_HARDWARE_205e00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c01439c(ar4,s_HARDWARE_8c26d2a0,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_8c01439c(ar5,s_EnableTexture16MB_8c26d2ac,ar6_00,ar7), ar6 = ar5, iVar1 == 0)) {
    ar6 = 0;
  }
  return ar6;
}

__asm__(".globl _s_HARDWARE_205e00\n.set _s_HARDWARE_205e00, _s_HARDWARE_205e00_def\n");
