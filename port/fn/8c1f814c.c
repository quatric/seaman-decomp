#include "../decls.h"
uint FUN_8c1f814c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((*(undefined4 *)0x8c474a14 & 1) == 0) {
    ar4 = *(undefined4 *)0x8c474a10;
    uVar1 = FUN_8c1f8462(ar4,ar5,ar6,ar7);
    *(undefined4 *)0x8c474a10 = uVar1;
  }
  uVar1 = *(undefined4 *)0x8c474a14;
  if ((uVar1 & 2) != 0) {
    uVar1 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
    *(undefined4 *)0x8c474a10 = uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f814c\n.set _FUN_8c1f814c, _FUN_8c1f814c_def\n");
