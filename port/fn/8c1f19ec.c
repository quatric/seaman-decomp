#include "../decls.h"
undefined4 FUN_8c1f19ec_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int ar7_00;
  
  ar7_00 = ar5 << 0xb;
  ar4_00 = FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,ar4,ar7_00);
  if (ar4_00 == 0) {
    return 0xfffffff3;
  }
  uVar1 = FUN_8c1f31c6(ar4_00,ar5,ar6,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c1f19ec\n.set _FUN_8c1f19ec, _FUN_8c1f19ec_def\n");
