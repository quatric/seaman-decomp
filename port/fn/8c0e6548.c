#include "../decls.h"
undefined4 Class_12b580_m2_0e6548_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  int iVar2;
  
  Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7);
  ar5_00 = *(undefined4 *)(0x10dc + ar4);
  s_64_JUNGLE_NIGHT_0e7062(ar4,ar5_00,ar6,ar7);
  FUN_8c0dbd80(ar4,ar5_00,ar6,ar7);
  ar6_00 = ar4 + 0xa68;
  FUN_8c0d8710(ar4 + 0x10dc,ar5,ar6_00,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6_00,ar7);
    if (iVar1 == 1) {
      ar5 = ar4;
      FUN_8c0f7204(ar4 + iVar2 * 0x68 + 0xc0c,ar4,ar6_00,ar7);
    }
  }
  return 1;
}

__asm__(".globl _Class_12b580_m2_0e6548\n.set _Class_12b580_m2_0e6548, _Class_12b580_m2_0e6548_def\n");
