#include "../decls.h"
undefined4 FUN_8c1f716c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(undefined4 *)0x8c4748c0 < 2) {
    if ((*(undefined4 *)0x8c4748b4 == 0) || (*(undefined4 *)0x8c4748b8 == 0)) {
      uVar1 = 0;
      *(undefined4 *)0x8c4748a8 = 0xb;
    }
    else {
      FUN_8c1f6b14(*(undefined4 *)0x8c4748ac,*(undefined4 *)0x8c4748b0,*(undefined4 *)0x8c4748b8);
      FUN_8c1f6dcc(0xfffffffd);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f716c\n.set _FUN_8c1f716c, _FUN_8c1f716c_def\n");
