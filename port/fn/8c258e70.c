#include "../decls.h"
undefined1 * FUN_8c258e70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 *ar4_00;
  uint unaff_r11;
  undefined4 in_PR;
  
  _DAT_8c4aad24 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar1 = unaff_r11;
  if (_DAT_8c4aa6dc != 0) {
    while ((_DAT_8c4aa6d4 != 0 && (uVar1 < 0x28870))) {
      ar5 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
      ar4 = FUN_8c1f88f0(_DAT_8c4aad24,ar5,ar6,ar7);
      uVar1 = FUN_8c1f892a(ar4,ar5,ar6,ar7);
    }
    if (uVar1 < 0x28870) {
      FUN_8c258e50(ar4,ar5,ar6,ar7,in_PR);
    }
  }
  _DAT_8c4aa6d4 = 1;
  FUN_8c20b7a0(ar4,ar5,ar6,ar7);
  ar4_00 = &DAT_8c4aa540;
  _DAT_8c4aa540 = _DAT_8c4aa540 + 1;
  _DAT_8c4aa518 = unaff_r11;
  _DAT_8c4aa51c = unaff_r11;
  _DAT_8c4aa520 = unaff_r11;
  FUN_8c20b260(&DAT_8c4aa540,ar5,ar6,ar7);
  FUN_8c1f61c6(ar4_00,ar5,ar6,ar7,in_PR);
  _DAT_8c4aad28 = sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7);
  _DAT_8c4aa4f4 = *_DAT_8c4aabdc;
  _DAT_8c4aa4f8 = _DAT_8c4aabdc[1];
  _DAT_8c4aa4fc = _DAT_8c4aabdc[2];
  _DAT_8c4aa500 = _DAT_8c4aabdc[3];
  _DAT_8c4aa504 = _DAT_8c4aabdc[4];
  return &DAT_8c4aa4fc;
}

__asm__(".globl _FUN_8c258e70\n.set _FUN_8c258e70, _FUN_8c258e70_def\n");
