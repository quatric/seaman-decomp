#include "../decls.h"
uint FUN_8c1019f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  uint uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  ar6_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  ar5_00 = *(undefined4 *)(ar4 + 0x2c);
  uVar1 = FUN_8c101de0(ar4,ar5_00,ar6_00,ar7);
  uVar2 = 0x16e360;
  if (0x16e360 < uVar1) {
    uVar2 = FUN_8c101c64(ar4,ar5_00,ar6_00,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1019f8\n.set _FUN_8c1019f8, _FUN_8c1019f8_def\n");
