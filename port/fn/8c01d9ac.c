#include "../decls.h"
int FUN_8c01d9ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(undefined4 *)0x8c2791b8;
  if ((iVar1 == 4) && (iVar1 = 0, *(undefined4 *)0x8c279284 != 0)) {
    iVar1 = FUN_8c1225fc(*(undefined4 *)0x8c27925c,3,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d9ac\n.set _FUN_8c01d9ac, _FUN_8c01d9ac_def\n");
