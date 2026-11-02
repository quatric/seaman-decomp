#include "../decls.h"
undefined4 FUN_8c09ad94_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4ebc(ar4,ar5,ar6,ar7);
  FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7);
  uVar1 = FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c09ad94\n.set _FUN_8c09ad94, _FUN_8c09ad94_def\n");
