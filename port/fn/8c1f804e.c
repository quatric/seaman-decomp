#include "../decls.h"
undefined4 FUN_8c1f804e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (ar4 == 0) {
    return 0;
  }
  uVar2 = 0;
  syscall_1f3b1c(0,ar5,ar6,ar7);
  iVar1 = syscall_1f3b44(uVar2,ar5,ar6,ar7);
  uVar2 = 6;
  ar5_00 = iVar1 + 2;
  memmove(ar4,ar5_00,6,ar7);
  iVar1 = FUN_8c1f80d0(iVar1,ar5_00,uVar2,ar7);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f804e\n.set _FUN_8c1f804e, _FUN_8c1f804e_def\n");
