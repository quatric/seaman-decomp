#include "../decls.h"
undefined4 FUN_8c1133f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_8c113124(ar4,ar5,ar6,ar7);
  uVar2 = 0;
  iVar1 = FUN_8c112fd8(ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    FUN_8c112c90(ar4,uVar2,ar6,ar7);
    uVar2 = 0;
    iVar1 = FUN_8c112b6e(ar4,0,ar6,ar7);
    if (iVar1 != 0) {
      FUN_8c112ec6(ar4,uVar2,ar6,ar7);
      iVar1 = FUN_8c112d82(ar4,0,ar6,ar7);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c1133f6\n.set _FUN_8c1133f6, _FUN_8c1133f6_def\n");
