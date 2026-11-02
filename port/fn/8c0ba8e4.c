#include "../decls.h"
undefined4 * FUN_8c0ba8e4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 extraout_fr1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0ba898(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12b350;
  FUN_8c015224(ar4 + 0x12,ar5,ar6,ar7);
  FUN_8c0162f8(ar4 + 0x14,ar5,ar6,ar7);
  FUN_8c0ba354(ar4 + 0x56,ar5,ar6,ar7);
  ar4[2] = 0;
  ar4[0xc] = 2;
  *(undefined2 *)(ar4 + 0xe) = 0xff;
  ar4[0xf] = 1;
  ar4[0x10] = 0;
  ar4[0x11] = 0;
  if (cVar2 == '\0') {
    ar4[0xd] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0xd) = CONCAT44(0x3f800000,extraout_fr1);
  }
  uVar1 = DAT_8c13bd80;
  ar4[3] = DAT_8c13bd7c;
  ar4[4] = uVar1;
  ar4[5] = PTR_s_GRAPHICS_0baac0_8c13bd84;
  uVar1 = DAT_8c13bd8c;
  ar4[6] = DAT_8c13bd88;
  ar4[7] = uVar1;
  ar4[8] = PTR_FUN_8c13bd90;
  uVar1 = DAT_8c13bd98;
  ar4[9] = DAT_8c13bd94;
  ar4[10] = uVar1;
  ar4[0xb] = PTR_FUN_8c13bd9c;
  ar4[0x53] = 0;
  ar4[0x54] = 1;
  ar4[0x55] = 0xffffff;
  return ar4;
}

__asm__(".globl _FUN_8c0ba8e4\n.set _FUN_8c0ba8e4, _FUN_8c0ba8e4_def\n");
