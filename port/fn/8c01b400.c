#include "../decls.h"
undefined4 FUN_8c01b400_def(int ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    if (0x600 < ar7) {
      uVar1 = 0xffffffff;
    }
    else {
      iVar2 = FUN_8c01b4f0(ar4,ar5,ar6,ar7);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b400\n.set _FUN_8c01b400, _FUN_8c01b400_def\n");
