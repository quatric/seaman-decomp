#include "../decls.h"
int FUN_8c109f08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  uStack_20 = ar5;
  uStack_14 = ar6;
  iVar1 = FUN_8c109dc4(ar4,auStack_24,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c109e40(ar4,auStack_24,ar6,ar7);
    iVar1 = 1;
    *(undefined4 *)0x8c27d430 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109f08\n.set _FUN_8c109f08, _FUN_8c109f08_def\n");
