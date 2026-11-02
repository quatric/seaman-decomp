#include "../decls.h"
undefined4 FUN_8c0db5c4_def(int ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  double *ar5_00;
  undefined1 *puVar2;
  int ar5_01;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined4 in_fr12;
  undefined4 in_fr15;
  double dVar9;
  double in_xd14;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [12];
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  uVar3 = 0;
  Vec3_ctor_zero(auStack_34,ar5_00,ar6,ar7);
  Vec3_ctor_zero(auStack_44,ar5_00,ar6,ar7);
  fVar8 = 0.0;
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47435000,in_fr15);
  }
  else {
    dVar9 = -7.932638084811958e-251;
  }
  if (iVar1 == 0) {
    Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    uVar3 = 0;
  }
  else {
    ar7_00 = auStack_3c;
    ar6_00 = auStack_40;
    puVar2 = auStack_44;
    FUN_8c0db5a8(ar4 + 0x9e8,puVar2,ar6_00,ar7_00);
    ar4_00 = FUN_8c0da588(ar4 + 0xa4,puVar2,ar6_00,ar7_00);
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7_00 = auStack_2c;
      ar6_00 = auStack_30;
      FUN_8c0507a4(ar4_00,auStack_34,ar6_00,ar7_00);
      ar5_01 = ar4 + 0xa68;
      FUN_8c023b4c(auStack_34,ar5_01,ar6_00,ar7_00);
      Vec3_length_sq(auStack_34,ar5_01,ar6_00,ar7_00);
      dVar6 = in_dr0;
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
        dVar6 = in_xd14;
      }
      in_xd14 = dVar6;
      Vec3_length(auStack_34,ar5_01,ar6_00,ar7_00);
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      puVar2 = auStack_34;
      FUN_8c022dac(auStack_44,puVar2,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0xba4));
        fVar8 = fVar5;
      }
      else {
        dVar6 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44(0x40000000,fVar5);
      }
      else {
        in_dr0 = -1.2765500855395165e-250;
      }
      if (cVar11 == '\0') {
        fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
        fVar5 = SUB84(in_dr0,0) + fVar7;
        in_dr0 = (double)CONCAT44(fVar7,fVar5);
        bVar10 = fVar8 < fVar5;
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
        bVar10 = (double)CONCAT44(in_fr12,fVar8) < in_dr0;
      }
      if (((bVar10) &&
          (fVar5 = SUB84(dVar9,0), cVar11 == '\0' && fVar5 < (float)((ulonglong)dVar9 >> 0x20))) &&
         (uVar3 = ar4_00, dVar9 = in_xd14, cVar12 == '\0')) {
        dVar9 = (double)CONCAT44(fVar5,fVar5);
      }
      ar4_00 = list_node_next(ar4_00,puVar2,ar6_00,ar7_00);
    }
    if (cVar12 == '\0') {
      *(int *)ar5 = (int)((ulonglong)dVar9 >> 0x20);
    }
    else {
      *ar5 = dVar9;
    }
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0db5c4\n.set _FUN_8c0db5c4, _FUN_8c0db5c4_def\n");
