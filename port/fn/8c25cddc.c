#include "../decls.h"
undefined4
FUN_8c25cddc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = DAT_8c278778;
  uVar6 = DAT_8c278774;
  uVar5 = DAT_8c278770;
  uVar4 = DAT_8c27876c;
  uVar3 = DAT_8c278768;
  uVar2 = (*(uint*)((uchar*)&DAT_8c278760+4));
  uVar1 = (undefined4)DAT_8c278760;
  if (ar4 == (undefined4 *)0x0) {
    return ain0;
  }
  ar4[7] = DAT_8c27877c;
  ar4[6] = uVar7;
  ar4[5] = uVar6;
  ar4[4] = uVar5;
  ar4[3] = uVar4;
  ar4[2] = uVar3;
  ar4[1] = uVar2;
  *ar4 = uVar1;
  uVar7 = DAT_8c278798;
  uVar6 = DAT_8c278794;
  uVar5 = DAT_8c278790;
  uVar4 = DAT_8c27878c;
  uVar3 = DAT_8c278788;
  uVar2 = DAT_8c278784;
  uVar1 = DAT_8c278780;
  ar4[0xf] = DAT_8c27879c;
  ar4[0xe] = uVar7;
  ar4[0xd] = uVar6;
  ar4[0xc] = uVar5;
  ar4[0xb] = uVar4;
  ar4[10] = uVar3;
  ar4[9] = uVar2;
  ar4[8] = uVar1;
  return ain0;
}

__asm__(".globl _FUN_8c25cddc\n.set _FUN_8c25cddc, _FUN_8c25cddc_def\n");
