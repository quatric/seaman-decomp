#include "../decls.h"
undefined4 FUN_8c23633c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = DAT_8c278798;
  fVar6 = DAT_8c278794;
  fVar5 = DAT_8c278790;
  fVar4 = DAT_8c27878c;
  fVar3 = DAT_8c278788;
  fVar2 = DAT_8c278784;
  fVar1 = DAT_8c278780;
  _DAT_8c4aa5a0 = 1;
  _DAT_8c4aa4bc = ar4;
  _DAT_8c4aa4c0 = ar4;
  _DAT_8c4aa59c = ar5;
  _DAT_8c4ab148 = ar6;
  ar4[0xf] = DAT_8c27879c;
  ar4[0xe] = fVar7;
  ar4[0xd] = fVar6;
  ar4[0xc] = fVar5;
  ar4[0xb] = fVar4;
  ar4[10] = fVar3;
  ar4[9] = fVar2;
  ar4[8] = fVar1;
  fVar7 = DAT_8c278778;
  fVar6 = DAT_8c278774;
  fVar5 = DAT_8c278770;
  fVar4 = DAT_8c27876c;
  fVar3 = DAT_8c278768;
  fVar2 = (*(uint*)((uchar*)&DAT_8c278760+4));
  fVar1 = (float)DAT_8c278760;
  ar4[7] = DAT_8c27877c;
  ar4[6] = fVar7;
  ar4[5] = fVar6;
  ar4[4] = fVar5;
  ar4[3] = fVar4;
  ar4[2] = fVar3;
  ar4[1] = fVar2;
  *ar4 = fVar1;
  *ar4 = -fVar1;
  ar4[5] = -fVar6;
  return 0x14;
}

__asm__(".globl _FUN_8c23633c\n.set _FUN_8c23633c, _FUN_8c23633c_def\n");
