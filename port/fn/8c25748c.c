#include "../decls.h"
undefined4 FUN_8c25748c_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined *a4;
  int ar5_00;
  code *ar5_01;
  uint ar6_00;
  code *pcVar2;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  FUN_8c236454(ar4,ar5,ar6,ar7);
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x18),ar5_00,ar6_00,ar7);
  FUN_8c2371be((int)*(short *)(*(int *)(ar4 + 0x1c) + ar5 * 0x14 + 0x10),ar5_00,ar6_00,ar7);
  if ((ar6 & 0x20) == 0) {
    uVar1 = 0x80028;
    ar5_01 = FUN_8c236b3c;
  }
  else {
    uVar1 = 0x2100028;
    ar5_01 = FUN_8c236c38;
  }
  pcVar2 = ar5_01;
  FUN_8c237124(uVar1,ar5_01,ar6_00,ar7,ar5_01);
  a4 = &DAT_8c4aa52c;
  if ((ar6 & 2) == 0) {
    a4 = &DAT_8c271de8;
  }
  (*pcVar2)(a4,ar5_01,ar6_00,ar7);
  FUN_8c257e10(ar4,ar5,ar6,ar7);
  uVar1 = ar4_00;
  FUN_8c2370dc(ar4_00,ar5,ar6,ar7);
  uVar1 = FUN_8c2364b2(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c25748c\n.set _FUN_8c25748c, _FUN_8c25748c_def\n");
