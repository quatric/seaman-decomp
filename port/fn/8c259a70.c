#include "../decls.h"
int FUN_8c259a70_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,
                undefined4 s4,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,
                undefined4 s24,undefined4 s28,undefined4 s32,undefined4 s36,undefined4 s40,
                undefined4 s44)

{
  float fVar1;
  undefined8 in_dr2;
  undefined4 uVar3;
  double dVar2;
  undefined4 in_fr5;
  double dVar4;
  double dVar5;
  undefined4 in_fr7;
  double dVar7;
  double in_xd2;
  bool bVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  uint uStack_bc;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [20];
  int iStack_28;
  int iStack_24;
  float fVar6;
  
  uVar3 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c20aacc(auStack_d0,ar5,ar6,ar7);
  *ar4 = uStack_c4;
  ar4[1] = uStack_bc;
  if ((uint)ar4[2] < uStack_bc) {
    ar4[2] = uStack_bc;
  }
  FUN_8c23c814(ar4 + 3,auStack_50,0x14,ar7);
  FUN_8c23c814(ar4 + 8,auStack_3c,0x14,ar7);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x4f000000,in_fr7);
    in_fr5 = 0x3fa3d70a;
  }
  else {
    dVar7 = 0.03875000204425305;
  }
  fVar1 = (float)iStack_28;
  dVar2 = (double)CONCAT44(uVar3,fVar1);
  if (iStack_28 < 0) {
    if (cVar10 == '\0') {
      dVar2 = (double)CONCAT44(0x4f800000,fVar1 + 4.2949673e+09);
    }
    else {
      dVar2 = (double)CONCAT44(0x4f800000,fVar1) + (double)CONCAT44(0x4f800000,fVar1);
    }
  }
  dVar4 = in_xd2;
  if (cVar11 == '\0') {
    dVar4 = (double)CONCAT44(SUB84(dVar2,0),in_fr5);
  }
  fVar1 = (float)((ulonglong)dVar7 >> 0x20);
  if (cVar10 == '\0') {
    fVar6 = (float)((ulonglong)dVar4 >> 0x20) * SUB84(dVar4,0);
    dVar4 = (double)CONCAT44(fVar6,SUB84(dVar4,0));
    bVar8 = fVar1 < fVar6;
  }
  else {
    dVar4 = dVar4 * dVar4;
    fVar6 = (float)((ulonglong)dVar4 >> 0x20);
    bVar8 = dVar7 < dVar4;
  }
  dVar5 = dVar4;
  if (bVar8) {
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(0xcf800000,fVar6);
      dVar5 = in_xd2;
    }
    else {
      dVar2 = -1.803317530245569e-130;
    }
    if (cVar10 == '\0') {
      fVar6 = (float)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(fVar6,SUB84(dVar2,0) + fVar6);
    }
    else {
      dVar2 = dVar2 + dVar2;
    }
  }
  else if (cVar11 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar6);
    dVar5 = in_xd2;
  }
  if (cVar10 == '\0') {
    iVar9 = (int)SUB84(dVar2,0);
  }
  else {
    iVar9 = (int)dVar2;
  }
  ar4[0xd] = iVar9;
  fVar6 = (float)iStack_24;
  dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar6);
  if (iStack_24 < 0) {
    if (cVar10 == '\0') {
      dVar2 = (double)CONCAT44(0x4f800000,fVar6 + 4.2949673e+09);
    }
    else {
      dVar2 = (double)CONCAT44(0x4f800000,fVar6) + (double)CONCAT44(0x4f800000,fVar6);
    }
  }
  if (cVar11 == '\0') {
    dVar5 = (double)CONCAT44(SUB84(dVar2,0),SUB84(dVar4,0));
  }
  if (cVar10 == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0);
    bVar8 = fVar1 < fVar6;
  }
  else {
    fVar6 = (float)((ulonglong)(dVar5 * dVar5) >> 0x20);
    bVar8 = dVar7 < dVar5 * dVar5;
  }
  if (bVar8) {
    if (cVar11 == '\0') {
      dVar2 = (double)CONCAT44(0xcf800000,fVar6);
    }
    else {
      dVar2 = -1.803317530245569e-130;
    }
    if (cVar10 == '\0') {
      fVar1 = (float)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(fVar1,SUB84(dVar2,0) + fVar1);
    }
    else {
      dVar2 = dVar2 + dVar2;
    }
  }
  else if (cVar11 == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar6);
  }
  if (cVar10 == '\0') {
    iVar9 = (int)SUB84(dVar2,0);
  }
  else {
    iVar9 = (int)dVar2;
  }
  ar4[0xe] = iVar9;
  _DAT_8c4aa734 = uStack_a0 | 0xa5000000;
  _DAT_8c4aa738 = uStack_9c | 0xa5000000;
  ar4[0xf] = *_DAT_8c4aabdc - _DAT_8c4aa4f4;
  ar4[0x10] = _DAT_8c4aabdc[1] - _DAT_8c4aa4f8;
  ar4[0x11] = _DAT_8c4aabdc[2] - _DAT_8c4aa4fc;
  ar4[0x12] = _DAT_8c4aabdc[3] - _DAT_8c4aa500;
  iVar9 = _DAT_8c4aabdc[4] - _DAT_8c4aa504;
  ar4[0x13] = iVar9;
  return iVar9;
}

__asm__(".globl _FUN_8c259a70\n.set _FUN_8c259a70, _FUN_8c259a70_def\n");
