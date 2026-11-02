#include "../decls.h"
undefined4 FUN_8c1f103e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int *ain1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*ain1 == 0) {
    return 0xfffffff5;
  }
  iVar1 = syscall_1f98ec(*(undefined4 *)(*ain1 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = FUN_8c1f0b58(_DAT_8c2739d8,ar5,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f103e\n.set _FUN_8c1f103e, _FUN_8c1f103e_def\n");
