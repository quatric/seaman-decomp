#include "../decls.h"
undefined4 FUN_8c2391a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iStack_14;
  undefined1 auStack_10 [4];
  uint uStack_c;
  
  iVar1 = FUN_8c259c48(&iStack_14,4,ar6,ar7);
  if (((iVar1 < 0) || (iStack_14 != 0x54525650)) ||
     (iVar1 = FUN_8c259c48(auStack_10,0xc,ar6,ar7), iVar1 < 0)) {
    return 0xfffffffc;
  }
  FUN_8c25a122(0xfffffff0,1,ar6,ar7);
  uStack_c = 0xff00 & uStack_c;
  if (((uStack_c != (int)0x500) && (uStack_c != (int)0x600)) &&
     ((uStack_c != (int)0x700 && (uStack_c != (int)0x800)))) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c2391a8\n.set _FUN_8c2391a8, _FUN_8c2391a8_def\n");
