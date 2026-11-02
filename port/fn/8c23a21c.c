#include "../decls.h"
undefined4 FUN_8c23a21c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iStack_14;
  undefined1 auStack_10 [4];
  uint uStack_c;
  
  FUN_8c238e98(&iStack_14,4,ar6,ar7);
  if (iStack_14 != 0x54525650) {
    return 0xfffffffc;
  }
  FUN_8c238e98(auStack_10,0xc,ar6,ar7);
  FUN_8c238eba(0xfffffff0,1,ar6,ar7);
  uStack_c = 0xff00 & uStack_c;
  if ((((uStack_c != (int)0x500) && (uStack_c != (int)0x600)) &&
      (uStack_c != (int)0x700)) && (uStack_c != (int)0x800)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c23a21c\n.set _FUN_8c23a21c, _FUN_8c23a21c_def\n");
