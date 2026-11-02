#include "../decls.h"
undefined4 s_64_JUNGLE_NIGHT_0e7062_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  double in_xd14;
  int ar4_00;
  int iVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar4 = (float)ar5;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  uVar1 = 0x43b40000;
  fVar4 = (((fVar4 * 360.0) / 72000.0) * 65536.0) / 360.0;
  dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar4);
  ar4_00 = (int)fVar4;
  iVar6 = ar5;
  FUN_8c25747c(ar4_00,ar5,ar6,ar7,ar5);
  FUN_8c010e38(ar4_00,ar5,ar6,ar7,iVar6);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),uVar1);
  }
  else {
    in_xd14 = (double)CONCAT44(uVar1,in_fr1);
  }
  if (*(int *)(ar4 + 0x10dc) == 0) {
    uVar1 = rand(ar4_00,ar5,ar6,ar7);
    uVar1 = libgcc_divide_helper_01031c(uVar1,2,ar6,ar7);
    *(undefined4 *)(ar4 + 0x8410) = uVar1;
    *(undefined **)(ar4 + 0x83f8) = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[*(int *)(ar4 + 0x8410)];
  }
  else if (*(int *)(ar4 + 0x10dc) == 36000) {
    *(undefined4 *)(ar4 + 0x8410) = 2;
    *(undefined **)(ar4 + 0x83f8) = (&PTR_s_62_JUNGLE_DAYTIME1_8c13f2fc)[*(int *)(ar4 + 0x8410)];
  }
  if (cVar8 == '\0') {
    dVar2 = (double)CONCAT44(0x461ba000,in_fr1);
  }
  else {
    dVar2 = 8.349145204665365e+24;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar2,0);
  }
  if (cVar8 == '\0') {
    in_xd14 = (double)CONCAT44(fVar4,fVar4);
    fVar3 = 2490.0;
  }
  else {
    fVar4 = 2490.0;
    fVar3 = 4.73527e-41;
  }
  if (cVar7 == '\0' && fVar3 < fVar4) {
    if (cVar8 == '\0') {
      in_xd14 = (double)CONCAT44(0x451ba000,SUB84(in_xd14,0));
    }
    else {
      in_xd14 = 7.17070546069488e-310;
    }
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(float)((ulonglong)in_xd14 >> 0x20);
  }
  else {
    iVar6 = (int)in_xd14;
  }
  *(int *)(ar4 + 0x8400) = 0xbae - iVar6;
  return 0x8400;
}

__asm__(".globl _s_64_JUNGLE_NIGHT_0e7062\n.set _s_64_JUNGLE_NIGHT_0e7062, _s_64_JUNGLE_NIGHT_0e7062_def\n");
