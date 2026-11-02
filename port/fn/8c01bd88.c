#include "../decls.h"
undefined4 FUN_8c01bd88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = FUN_8c01bde4(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01bd88\n.set _FUN_8c01bd88, _FUN_8c01bd88_def\n");
