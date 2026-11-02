#include "../decls.h"
undefined4 FUN_8c1f3c78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1f3d28(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_8c1f3d9c((uint)(byte)(&DAT_8c26c684)[ar4] * 0xc0 + -0x73b8f048,ar5,ar6,ar7);
    iVar1 = FUN_8c1efeac(ar4,4,0,0);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f3c78\n.set _FUN_8c1f3c78, _FUN_8c1f3c78_def\n");
