#include "../decls.h"
int FUN_8c1f7ad6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  int iVar1;
  
  iVar1 = 0;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else {
    *(undefined4 *)0x8c4749fc = ar4;
    iVar1 = FUN_8c1f74b0((&FUN_8c1f7264),1,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)0x8c474a06 = 1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f7ad6\n.set _FUN_8c1f7ad6, _FUN_8c1f7ad6_def\n");
