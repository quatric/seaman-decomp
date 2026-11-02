#include "../decls.h"
undefined4 s_GRAPHICS_ENV_0d819c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  uVar1 = 0;
  FUN_8c0d82f0(ar4,0,ar6,ar7);
  thunk_FUN_8c20a1d0(0x8c43786c,uVar1,ar6,ar7);
  FUN_8c257120(0xfffafafa,uVar1,ar6,ar7);
  for (iVar2 = 0; iVar2 < 1; iVar2 = iVar2 + 1) {
    *(undefined4 *)(0x6e64 + iVar2 * 0xc + ar4) = 0;
  }
  ar4_00 = get_field_4_0253e4(ar4 + 0x6e50,uVar1,ar6,ar7);
  ar7_00 = 1;
  iVar2 = ar4 + 0x6e60;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4_00,iVar2,0x8c4312a8,1);
  uVar1 = get_field_4_0253e4(ar4 + 0x6e50,iVar2,uVar1,ar7_00);
  ar6_00 = (&DATA_8c13f7c0) + 0x10b;
  ar5_00 = (&DATA_8c13f7c0) + 0x470;
  iVar2 = FUN_8c02100c(ar5,ar5_00,ar6_00,uVar1);
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (undefined *)0x0;
    ar5_00 = (&DATA_8c13f7c0) + 0x495;
    (*(code *)(&report_error_message))
              ((&DATA_8c13f7c0) + 0x480,ar5_00,0,2);
  }
  FUN_8c0d7b44(ar4 + 0x78,ar5_00,ar6_00,uVar1);
  uVar1 = 0x5a;
  FUN_8c0d7e80(ar4 + 0x78,1,0xf,0x5a,1,0xb4);
  uVar1 = FUN_8c0d7e24(ar4 + 0x78,0xf666666,0x6333333,uVar1);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d819c\n.set _s_GRAPHICS_ENV_0d819c, _s_GRAPHICS_ENV_0d819c_def\n");
