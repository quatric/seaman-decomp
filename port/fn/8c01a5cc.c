#include "../decls.h"
undefined4 FUN_8c01a5cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = thunk_FUN_8c1fda7e(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)0x8c2791b0 = 1;
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_8c01a630(ar4,ar5,ar6,ar7);
      if (iVar2 == 3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01a5cc\n.set _FUN_8c01a5cc, _FUN_8c01a5cc_def\n");
