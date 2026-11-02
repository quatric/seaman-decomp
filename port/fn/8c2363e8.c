#include "../decls.h"
undefined4
FUN_8c2363e8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_fr3;
  undefined4 in_fr5;
  undefined4 in_fr7;
  undefined4 in_fr9;
  undefined4 in_fr11;
  
  ar4[0x1d] = 0;
  ar4[0x1c] = 0xbf800000;
  ar4[0x1b] = 0;
  ar4[0x1a] = 0;
  ar4[0x19] = 0;
  ar4[0x18] = 0;
  ar4[0x17] = 0;
  ar4[0x16] = 0;
  ar4[0x15] = 0xbf800000;
  ar4[0x14] = 0;
  ar4[0x13] = 0;
  ar4[0x12] = 0;
  ar4[0x11] = 0;
  ar4[0x10] = 0;
  uVar6 = DAT_8c27878c;
  uVar5 = DAT_8c278788;
  uVar4 = DAT_8c278784;
  uVar3 = DAT_8c278780;
  uVar2 = (*(uint*)((uchar*)&DAT_8c278760+4));
  uVar1 = (undefined4)DAT_8c278760;
  ar4[0xf] = in_fr7;
  ar4[0xe] = uVar6;
  ar4[0xd] = in_fr5;
  ar4[0xc] = uVar5;
  ar4[0xb] = in_fr3;
  ar4[10] = uVar4;
  ar4[9] = 0xbf800000;
  ar4[8] = uVar3;
  uVar4 = DAT_8c27876c;
  uVar3 = DAT_8c278768;
  ar4[7] = in_fr5;
  ar4[6] = uVar4;
  ar4[5] = in_fr7;
  ar4[4] = uVar3;
  ar4[3] = in_fr11;
  ar4[2] = uVar2;
  ar4[1] = in_fr9;
  *ar4 = uVar1;
  return ain0;
}

__asm__(".globl _FUN_8c2363e8\n.set _FUN_8c2363e8, _FUN_8c2363e8_def\n");
