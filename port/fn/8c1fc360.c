#include "../decls.h"
undefined4 FUN_8c1fc360_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(ar4 + 0x28);
  iVar1 = FUN_8c1fce88(uVar2,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(uVar2,4,ar6,ar7,ar4);
    FUN_8c1fcea8(uVar2,ar4,1,0,0,0,0,ar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc360\n.set _FUN_8c1fc360, _FUN_8c1fc360_def\n");
