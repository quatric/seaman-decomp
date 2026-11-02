#include "../decls.h"
undefined4 FUN_8c1fc472_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c1fce98(ar4,7,ar6,ar7,0);
    ar7_00 = 0;
    FUN_8c1fcea8(ar4,ar4,ar5,0,uVar2,0,0,0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar7_00);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc472\n.set _FUN_8c1fc472, _FUN_8c1fc472_def\n");
