#include "../decls.h"
int FUN_8c0f54ec_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint *puVar1;
  char cVar2;
  uint uStackY_38;
  
  cVar2 = '\0';
  uStackY_38 = (ulonglong)uStackY_38;
  ar7_00 = 0xffffffff;
  ar6_00 = 2;
  ar5_00 = ar6;
  FUN_8c0f4040(ar4,ar6,2,0xffffffff,0);
  *(undefined **)(ar4 + 8) = &DAT_8c12c058;
  FUN_8c015224(ar4 + 0x170,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x178,ar5_00,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x17c,ar5_00,ar6_00,ar7_00);
  noop_0f58a0(ar4,ar5_00,ar6_00,ar7_00,ar5);
  if (cVar2 == '\0') {
    puVar1 = (uint *)&stack0xffffffcc;
    uStackY_38 = CONCAT44(s0,uStackY_38);
  }
  else {
    uStackY_38 = CONCAT44(s4,s0);
    puVar1 = &uStackY_38;
  }
  Class_12c058_m1_0f5660(ar4,*(undefined4 *)((int)puVar1 + 4),ar6_00,ar7_00);
  if (ar6 == 0x10) {
    *(undefined4 *)(ar4 + 0x16c) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f54ec\n.set _FUN_8c0f54ec, _FUN_8c0f54ec_def\n");
