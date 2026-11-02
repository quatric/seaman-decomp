#include "../decls.h"
undefined4 FUN_8c015098_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)((&DATA_8c12c53c) + 8);
  uStack_c = *(undefined4 *)((&DATA_8c12c53c) + 0xc);
  iStack_18 = ar4 + 4;
  iStack_14 = ar4 + 0x40;
  uVar1 = FUN_8c234d68(&iStack_18,4,0x42,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015098\n.set _FUN_8c015098, _FUN_8c015098_def\n");
