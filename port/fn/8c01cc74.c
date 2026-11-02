#include "../decls.h"
undefined4 FUN_8c01cc74_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b8 < 2) {
    iVar2 = FUN_8c201994(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = FUN_8c201a1a(*ar4,ar5,ar6,ar7,0,0,0x113a,5,*(undefined4 *)0x8c279274,ar4 + 3)
      ;
      *(undefined4 *)0x8c27926c = uVar1;
      uVar1 = FUN_8c201c3e(*(undefined4 *)0x8c27926c,ar5,ar6,ar7);
      *(undefined4 *)0x8c279270 = uVar1;
      *(undefined4 *)0x8c2791b8 = 2;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01cc74\n.set _FUN_8c01cc74, _FUN_8c01cc74_def\n");
