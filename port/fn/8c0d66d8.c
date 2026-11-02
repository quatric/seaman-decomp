#include "../decls.h"
undefined4 FUN_8c0d66d8_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar6;
  double dVar3;
  double dVar4;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  double in_xd14;
  bool bVar7;
  char cVar8;
  char cVar9;
  float afStack_1c [5];
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar2 = *(float *)(ar4 + 1);
  fVar6 = *(float *)((int)ar4 + 0x54);
  if (fVar6 < fVar2) {
    fVar6 = *(float *)((int)ar4 + 0x54);
    *(float *)(ar4 + 1) = fVar6;
  }
  if (*(float *)((int)ar4 + 100) == 4.2039e-45) {
    if (360.0 <= *(float *)ar4) {
      if (2140.0 < *(float *)ar4) {
        *(float *)ar4 = 2140.0;
      }
    }
    else {
      *(float *)ar4 = 360.0;
    }
    fVar2 = *(float *)(ar4 + 1);
    if (240.0 <= fVar2) {
      fVar2 = *(float *)(ar4 + 1);
      fVar6 = 1300.0;
      if (1300.0 < fVar2) {
        fVar6 = 1300.0;
        *(float *)(ar4 + 1) = 1300.0;
      }
    }
    else {
      fVar6 = 240.0;
      *(float *)(ar4 + 1) = 240.0;
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x15) + 0xc))(ar4 + 0x15,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(*(float *)ar4,fVar2);
    in_fr15 = fVar6;
  }
  else {
    in_xd14 = (double)CONCAT44(fVar6,fVar2);
    dVar3 = *ar4;
    afStack_1c[0] = fVar6;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar3;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)ar4 = in_fr15;
    }
    else {
      *ar4 = in_xd14;
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x19) + 0xc))(ar4 + 0x19,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(*(float *)ar4,SUB84(dVar3,0));
    in_fr15 = (float)((ulonglong)dVar3 >> 0x20);
    dVar3 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar4 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar4 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)ar4 = in_fr15;
    }
    else {
      *ar4 = dVar3;
    }
  }
  if (((*(float *)((int)ar4 + 100) == 0.0) || (*(float *)((int)ar4 + 100) == 1.4013e-45)) ||
     (dVar5 = dVar4, *(float *)((int)ar4 + 100) == 2.8026e-45)) {
    (**(code **)((int)*(float *)(ar4 + 0xd) + 0xc))(ar4 + 0xd,ar5,ar6,ar7);
    if (cVar9 == '\0') {
      dVar5 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar4,0));
      in_fr15 = (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      dVar5 = *(double *)((int)ar4 + 4);
      dVar3 = dVar4;
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr15 < (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar5;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        *(float *)((int)ar4 + 4) = in_fr15;
      }
      else {
        *(double *)((int)ar4 + 4) = dVar3;
      }
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x11) + 0xc))(ar4 + 0x11,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar4 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar5,0));
    in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
    dVar5 = dVar3;
  }
  else {
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar4 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar4 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)((int)ar4 + 4) = dVar5;
    }
  }
  (**(code **)((int)*(float *)(ar4 + 0x1d) + 8))(ar4 + 0x1d,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44(*(float *)((int)ar4 + 4),SUB84(dVar4,0));
    in_fr15 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = dVar5;
  }
  else {
    dVar3 = *(double *)((int)ar4 + 4);
  }
  if (cVar8 == '\0') {
    bVar7 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
  }
  else {
    bVar7 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      *(float *)((int)ar4 + 4) = in_fr15;
    }
    else {
      *(double *)((int)ar4 + 4) = dVar4;
    }
  }
  fVar2 = *(float *)((int)ar4 + 100);
  if (fVar2 == 0.0) {
    Vec3_assign(ar4 + 4,ar4,ar6,ar7);
    fVar2 = SUB84(dVar3,0);
    if (cVar9 == '\0') {
      fVar2 = *(float *)(ar4 + 5);
    }
    else {
      in_xd0 = ar4[5];
    }
    if (cVar8 == '\0') {
      fVar2 = fVar2 - 1.0;
    }
    else {
      fVar2 = SUB84((double)CONCAT44(0x3f800000,fVar2) - (double)CONCAT44(0x3f800000,fVar2),0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 5) = fVar2;
    }
    else {
      ar4[5] = in_xd0;
    }
    goto LAB_8c0d68ba;
  }
  if (fVar2 != 2.8026e-45) {
    if (fVar2 == 4.2039e-45) {
      if (cVar9 == '\0') {
        *(float *)(ar4 + 4) = *(float *)ar4;
        dVar3 = (double)(ulonglong)(uint)*(float *)(ar4 + 1);
      }
      else {
        dVar3 = *ar4;
        ar4[4] = dVar3;
        in_xd0 = ar4[1];
      }
      dVar4 = (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
      if (cVar8 == '\0') {
        fVar2 = SUB84(dVar3,0) - 1.0;
      }
      else {
        fVar2 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 5) = fVar2;
      }
      else {
        ar4[5] = in_xd0;
      }
      goto LAB_8c0d68ba;
    }
    if (fVar2 != 7.00649e-45) goto LAB_8c0d68ba;
  }
  Vec3_assign(ar4 + 4,ar4,ar6,ar7);
  fVar2 = SUB84(dVar3,0);
  if (cVar9 == '\0') {
    fVar2 = *(float *)(ar4 + 5);
  }
  else {
    in_xd0 = ar4[5];
  }
  if (cVar8 == '\0') {
    fVar2 = fVar2 - 1.0;
  }
  else {
    fVar2 = SUB84((double)CONCAT44(0x3f800000,fVar2) - (double)CONCAT44(0x3f800000,fVar2),0);
  }
  if (cVar9 == '\0') {
    *(float *)(ar4 + 5) = fVar2;
  }
  else {
    ar4[5] = in_xd0;
  }
LAB_8c0d68ba:
  Vec3_sub(ar4 + 4,ar4,ar6,ar7,afStack_1c);
  Vec3_assign(ar4 + 2,afStack_1c,ar6,ar7);
  uVar1 = Vec3_dtor(afStack_1c,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d66d8\n.set _FUN_8c0d66d8, _FUN_8c0d66d8_def\n");
