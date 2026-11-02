#include "../decls.h"
undefined4 FUN_8c20a420_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_8c2756c0)[ar5])(ar4,ar5,ar6,ar7);
  _DAT_8c4a9c50 = _DAT_8c4a9c50 & 0xfff00000;
  return uVar1;
}

__asm__(".globl _FUN_8c20a420\n.set _FUN_8c20a420, _FUN_8c20a420_def\n");
