#include "../decls.h"
undefined4 FUN_8c25b49e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  if (ar4 == 2) {
    return *(undefined4 *)0x8c4aa6a8;
  }
  iStack_8 = ar4;
  FUN_8c20cfe0(&uStack_10,&uStack_c,ar6,ar7);
  if (iStack_8 == 0) {
    return uStack_10;
  }
  return uStack_c;
}

__asm__(".globl _FUN_8c25b49e\n.set _FUN_8c25b49e, _FUN_8c25b49e_def\n");
