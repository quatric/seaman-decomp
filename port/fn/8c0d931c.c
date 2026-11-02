#include "../decls.h"
undefined8 * FUN_8c0d931c_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  char cVar1;
  
  cVar1 = '\0';
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  FUN_8c015224(ar4 + 4,ar5,ar6,ar7);
  FUN_8c015ab8(ar4 + 5,ar5,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = free_if_nonnull_wrap_0247b0;
  ar5_00 = FUN_8c015b94;
  FUN_8c010120((undefined4 *)((int)ar4 + 0x2c),FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,7);
  if (cVar1 == '\0') {
    *(undefined4 *)ar4 = 0x43a6299a;
    *(undefined4 *)((int)ar4 + 4) = 0x44a05ccd;
    *(undefined4 *)(ar4 + 1) = 0x43557405;
  }
  else {
    *ar4 = 0x44a05ccd43a6299a;
    *(undefined8 *)((int)ar4 + 4) = 0x4355740544a05ccd;
    ar4[1] = 0x8c0d98f843557405;
  }
  FUN_8c0d98f8(ar4,ar5_00,ar6_00,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c0d931c\n.set _FUN_8c0d931c, _FUN_8c0d931c_def\n");
