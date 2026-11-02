#include "../decls.h"
uint FUN_8c26501c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int ar7_00;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int ain0;
  
  if (*(int *)(ar4 + 0xc) == 1) {
    *(undefined4 *)(ar4 + 0xc) = 2;
  }
  uVar1 = *(uint *)(ar4 + 0xc);
  if (uVar1 == 2) {
    if (*(int *)(ar4 + 0x14) == 1) {
      uVar1 = FUN_8c261058(*(undefined4 *)(ar4 + 0x18),*(undefined4 *)(ar4 + 0x1c),
                           *(undefined4 *)(ar4 + 0x20),ar4 + 0x28,(int)*(short *)(ar4 + 0x30),
                           (int)*(short *)(ar4 + 0x32));
      *(uint *)(ar4 + 0x10) = uVar1;
    }
    else {
      ar7_00 = ar4 + 0x28;
      ar5_00 = *(undefined4 *)(ar4 + 0x1c);
      ar6_00 = *(undefined4 *)(ar4 + 0x20);
      ar4_00 = *(undefined4 *)(ar4 + 0x18);
      ain0 = ar7_00;
      uVar1 = FUN_8c261170(ar4_00,ar5_00,ar6_00,ar7_00,*(undefined4 *)(ar4 + 0x24),ar4 + 0x2c,
                           (int)*(short *)(ar4 + 0x30),(int)*(short *)(ar4 + 0x32));
      *(uint *)(ar4 + 0x10) = uVar1;
      if ((int)uVar1 < 0) {
        uVar1 = ~(~uVar1 + 1 & 1) + 1;
      }
      else {
        uVar1 = uVar1 & 1;
      }
      if (uVar1 == 1) {
        uVar1 = FUN_8c264ffc(ar4_00,ar5_00,ar6_00,ar7_00,ain0);
      }
    }
    *(undefined4 *)(ar4 + 0xc) = 3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26501c\n.set _FUN_8c26501c, _FUN_8c26501c_def\n");
