#include "../decls.h"
undefined4 FUN_8c1f875c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  
  a5 = 0;
  FUN_8c1f6e0c(0,0,ar6,ar7);
  uVar1 = FUN_8c1f8710(*(undefined4 *)0x8c4748b0,a5,ar6,ar7);
  if ((((uVar1 & 0xff) != (int)0xff) && ((uint)*(byte *)*(undefined4 *)0x8c4748b0 == (int)0xff))
     && ((uVar1 & 0xff) != (uint)*(byte *)(*(undefined4 *)0x8c4748b0 + 0x3b))) {
    *(undefined4 *)0x8c4748a8 = 1;
    return 0;
  }
  memmove(0x8c474a28,*(undefined4 *)0x8c4748b0,0x3c,ar7);
  return 1;
}

__asm__(".globl _FUN_8c1f875c\n.set _FUN_8c1f875c, _FUN_8c1f875c_def\n");
