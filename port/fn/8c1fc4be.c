#include "../decls.h"
undefined4 FUN_8c1fc4be_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x11,uVar2,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc4be\n.set _FUN_8c1fc4be, _FUN_8c1fc4be_def\n");
