#include "../decls.h"
undefined4 Class_12a990_m2_09bc2c_def(int ar4,float *ar5,code *ar6,code *ar7)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  code *pcVar8;
  code *pcVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  double dVar13;
  float fVar14;
  undefined8 in_dr2;
  double dVar15;
  undefined8 in_xd0;
  bool bVar16;
  char cVar17;
  char cVar18;
  undefined2 uVar19;
  undefined4 in_stack_ffffff20;
  
  cVar18 = '\0';
  cVar17 = '\0';
  pfVar7 = (float *)0x0;
  cVar1 = *(char *)(ar4 + 0x6e0);
  pcVar9 = ar7;
  if (cVar1 == -1) {
    pcVar8 = ar6;
    uVar2 = FUN_8c028ee4(ar5,0,ar6,ar7);
    uVar2 = uVar2 & 0xffff;
    FUN_8c028edc(ar4 + 0x21c,uVar2,pcVar8,pcVar9,in_stack_ffffff20);
    uVar2 = FUN_8c02602c(ar5,uVar2,pcVar8,pcVar9);
    FUN_8c028ed4(ar4 + 0x21c,uVar2 & 0xffff,pcVar8,pcVar9,in_stack_ffffff20);
    pcVar8 = (code *)0x0;
    pfVar7 = (float *)0x4;
    FUN_8c0b9ed4(ar5,4,0,pcVar9);
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      if (*(int *)(ar4 + iVar5 * 4 + 0x524) != 0) {
        iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
        pfVar7 = ar5;
        (**(code **)(*(int *)(iVar10 + 8) + 0x10c))(iVar10,ar5,pcVar8,pcVar9);
      }
    }
    if (cVar18 == '\0') {
      *(undefined4 *)(ar4 + 0x6cc) = 0x3e4ccccd;
      *(undefined4 *)(ar4 + 0x6d0) = 0x3dcccccd;
    }
    else {
      *(undefined8 *)(ar4 + 0x6cc) = 0x6d03e4ccccd;
      *(undefined8 *)(ar4 + 0x6d0) = 0x6e03dcccccd;
    }
    *(undefined1 *)(ar4 + 0x6e0) = 0;
  }
  else {
    pcVar8 = ar6;
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar4 = FUN_8c02602c(ar5,0,ar6,ar7);
        uVar2 = CONCAT22((short)((uint)in_stack_ffffff20 >> 0x10),(short)uVar4);
        iVar5 = get_field_c_02d1b8(ar4 + 0x21c,pfVar7,pcVar8,pcVar9);
        iVar5 = (uVar2 & 0xffff) - iVar5;
        for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
          if (*(int *)(ar4 + iVar10 * 4 + 0x524) != 0) {
            iVar6 = *(int *)(ar4 + iVar10 * 4 + 0x524);
            (**(code **)(*(int *)(iVar6 + 8) + 0x110))(iVar6,1,pcVar8,pcVar9);
            iVar6 = *(int *)(ar4 + iVar10 * 4 + 0x524);
            pfVar7 = ar5;
            pcVar8 = ar6;
            pcVar9 = ar7;
            (**(code **)(*(int *)(iVar6 + 8) + 0x10))(iVar6,ar5,ar6,ar7);
          }
        }
        ar6 = *(code **)(*(int *)(ar4 + 8) + 0xb4);
        iVar6 = (*ar6)(ar4,pfVar7,ar6,pcVar9);
        iVar10 = 0;
        if (iVar6 != 0) {
          iVar10 = iVar5;
          FUN_8c02c030(ar4 + 0x174,iVar5,ar7,pcVar9);
          ar6 = ar7;
        }
        if (*(char *)(ar4 + 0x9a0) == '\x01') {
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6dc),*(undefined4 *)(ar4 + 0x6d4));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6d4);
            dVar13 = *(double *)(ar4 + 0x6dc);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x6d4) = fVar11;
            dVar13 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x6d4));
          }
          else {
            *(undefined8 *)(ar4 + 0x6d4) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x6d4);
            dVar13 = 12831.689682006836;
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(0x40c90fd8,fVar11);
          }
          else {
            dVar13 = -3.74578248742155e-250;
          }
          if (cVar17 == '\0') {
            fVar14 = (float)((ulonglong)dVar13 >> 0x20);
            fVar11 = SUB84(dVar13,0) / fVar14;
            dVar13 = (double)CONCAT44(fVar14,fVar11);
            iVar6 = (int)fVar11;
          }
          else {
            dVar13 = dVar13 / dVar13;
            iVar6 = (int)dVar13;
          }
          FUN_8c25747c(iVar6,iVar10,ar6,pcVar9,uVar2);
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6d8))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6d8);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x30),fVar11);
          }
          else {
            dVar13 = *(double *)(ar4 + 0x30);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x30) = fVar11;
            fVar11 = *(float *)(ar4 + 0x6d4);
            fVar14 = 18.84;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = in_xd0;
            fVar11 = 18.84;
            fVar14 = 1.3589516e+11;
          }
          if (cVar17 != '\0' || fVar14 <= fVar11) {
            *(undefined1 *)(ar4 + 0x9a0) = 0;
          }
        }
        else {
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6d0),*(undefined4 *)(ar4 + 0x6c8));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
            dVar13 = *(double *)(ar4 + 0x6d0);
          }
          ar6 = (code *)(ar4 + 0x6d0);
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x6c8) = fVar11;
            dVar13 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x6c8));
          }
          else {
            *(undefined8 *)(ar4 + 0x6c8) = in_xd0;
            in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
            dVar13 = 12831.689682006836;
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(0x40c90fd8,fVar11);
          }
          else {
            dVar13 = -3.74578248742155e-250;
          }
          if (cVar17 == '\0') {
            fVar14 = (float)((ulonglong)dVar13 >> 0x20);
            fVar11 = SUB84(dVar13,0) / fVar14;
            dVar13 = (double)CONCAT44(fVar14,fVar11);
            iVar10 = (int)fVar11;
          }
          else {
            dVar13 = dVar13 / dVar13;
            iVar10 = (int)dVar13;
          }
          FUN_8c25747c(iVar10,0x6c8,ar6,pcVar9,uVar2);
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6cc))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x6cc);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 * dVar13,0);
          }
          if (cVar18 == '\0') {
            dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar11);
          }
          else {
            dVar13 = *(double *)(ar4 + 0x34);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
          }
          else {
            fVar11 = SUB84(dVar13 + dVar13,0);
          }
          if (cVar18 == '\0') {
            *(float *)(ar4 + 0x34) = fVar11;
          }
          else {
            *(undefined8 *)(ar4 + 0x34) = in_xd0;
          }
        }
        *(int *)(ar4 + 0x9d4) = *(int *)(ar4 + 0x9d4) + 1;
        for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
          FUN_8c09cdf4(ar4,iVar10,ar6,pcVar9);
          FUN_8c036988(*(undefined4 *)(ar4 + iVar10 * 4 + 0x524),iVar10,ar6,pcVar9);
        }
        pfVar7 = (float *)0x3c;
        iVar5 = libgcc_divide_helper_0101e4(iVar5,0x3c,ar6,pcVar9);
        if (2 < iVar5) {
          *(undefined1 *)(ar4 + 0x6e0) = 2;
        }
        if ((*(char *)(ar4 + 0x9a0) == '\0') &&
           (iVar5 = FUN_8c02c518(ar4 + 0x174,pfVar7,ar6,pcVar9), iVar5 != -1)) {
          *(undefined1 *)(ar4 + 0x6e0) = 0xff;
          *(undefined4 *)(ar4 + 0x9d4) = 0;
        }
      }
      else if (cVar1 == '\x02') {
        ar6 = (code *)0x1b;
        pfVar7 = (float *)0x5;
        FUN_8c0b9ed4(ar5,5,0x1b,ar7);
        for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
          iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
          (**(code **)(*(int *)(iVar10 + 8) + 0x110))(iVar10,0,ar6,pcVar9);
          pfVar7 = *(float **)(ar4 + iVar5 * 4 + 0x524);
          (**(code **)(*(int *)ar7 + 0x4c))(ar7,pfVar7,ar6,pcVar9);
          *(undefined4 *)(ar4 + iVar5 * 4 + 0x524) = 0;
        }
        FUN_8c0f4d84(ar4,pfVar7,ar6,pcVar9);
      }
      goto LAB_8c09c65a;
    }
  }
  uVar2 = FUN_8c028ee4(ar5,pfVar7,pcVar8,pcVar9);
  uVar2 = uVar2 & 0xffff;
  FUN_8c028edc(ar4 + 0x21c,uVar2,pcVar8,pcVar9,in_stack_ffffff20);
  uVar2 = FUN_8c02602c(ar5,uVar2,pcVar8,pcVar9);
  FUN_8c028ed4(ar4 + 0x21c,uVar2 & 0xffff,pcVar8,pcVar9,in_stack_ffffff20);
  pcVar8 = (code *)0x0;
  pfVar7 = (float *)0x4;
  FUN_8c0b9ed4(ar5,4,0,pcVar9);
  for (iVar5 = 0; uVar19 = (undefined2)in_stack_ffffff20, iVar5 < 8; iVar5 = iVar5 + 1) {
    if (*(int *)(ar4 + iVar5 * 4 + 0x524) != 0) {
      iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
      pfVar7 = ar5;
      (**(code **)(*(int *)(iVar10 + 8) + 0x10c))(iVar10,ar5,pcVar8,pcVar9);
    }
  }
  if (cVar18 == '\0') {
    dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6d0),*(undefined4 *)(ar4 + 0x6c8));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
    dVar13 = *(double *)(ar4 + 0x6d0);
  }
  if (cVar17 == '\0') {
    fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
  }
  else {
    fVar11 = SUB84(dVar13 + dVar13,0);
  }
  if (cVar18 == '\0') {
    *(float *)(ar4 + 0x6c8) = fVar11;
  }
  else {
    *(undefined8 *)(ar4 + 0x6c8) = in_xd0;
  }
  uVar4 = FUN_8c02602c(ar5,pfVar7,pcVar8,pcVar9);
  uVar2 = CONCAT22((short)uVar4,uVar19);
  iVar5 = get_field_c_02d1b8(ar4 + 0x21c,pfVar7,pcVar8,pcVar9);
  pfVar3 = (float *)((uVar2 >> 0x10) - iVar5);
  for (iVar5 = 0; uVar4 = (undefined4)in_dr2, iVar5 < 8; iVar5 = iVar5 + 1) {
    if (*(int *)(ar4 + iVar5 * 4 + 0x524) != 0) {
      iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
      (**(code **)(*(int *)(iVar10 + 8) + 0x110))(iVar10,1,pcVar8,pcVar9);
      iVar10 = *(int *)(ar4 + iVar5 * 4 + 0x524);
      pfVar7 = ar5;
      pcVar8 = ar6;
      pcVar9 = ar7;
      (**(code **)(*(int *)(iVar10 + 8) + 0x10))(iVar10,ar5,ar6,ar7);
    }
  }
  iVar5 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,pfVar7,pcVar8,pcVar9);
  ar6 = pcVar8;
  if (iVar5 != 0) {
    ar6 = ar7;
    FUN_8c02c030(ar4 + 0x174,pfVar3,ar7,pcVar9);
    pfVar7 = pfVar3;
  }
  iVar5 = FUN_8c027988(ar4,pfVar7,ar6,pcVar9);
  if (iVar5 == 1) {
    pfVar7 = (float *)(ar4 + 0x34);
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6c4),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar13 = *(double *)(ar4 + 0x6c4);
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 - dVar13,0);
    }
    if (cVar18 == '\0') {
      *pfVar7 = fVar11;
      dVar13 = (double)CONCAT44(0x3f000000,*(undefined4 *)(ar4 + 0x6c4));
    }
    else {
      *(undefined8 *)pfVar7 = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c4);
      dVar13 = 524288.123046875;
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 + dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x6c4) = fVar11;
      fVar11 = *(float *)(ar4 + 0x6c4);
      fVar14 = 10.0;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c4) = in_xd0;
      fVar11 = 10.0;
      fVar14 = 2.1188467e-29;
    }
    if (cVar17 == '\0' && fVar14 < fVar11) {
      if (cVar18 == '\0') {
        *(undefined4 *)(ar4 + 0x6c4) = 0x41200000;
      }
      else {
        *(undefined8 *)(ar4 + 0x6c4) = 0xfd6e06841200000;
      }
    }
  }
  else {
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x6c4),*(undefined4 *)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x34);
      dVar13 = *(double *)(ar4 + 0x6c4);
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 - dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x34) = fVar11;
      dVar13 = (double)CONCAT44(0x3f6b851f,*(undefined4 *)(ar4 + 0x6c4));
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c4);
      dVar13 = 1.3411048255806968e-08;
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      *(float *)(ar4 + 0x6c4) = fVar11;
      fVar11 = *(float *)(ar4 + 0x6c4);
      fVar14 = 0.2;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c4) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c4);
      fVar11 = 0.2;
      fVar14 = 2.43265e-42;
    }
    if (cVar17 == '\0' && fVar11 < fVar14) {
      if (cVar18 == '\0') {
        *(undefined4 *)(ar4 + 0x6c4) = 0x3e4ccccd;
      }
      else {
        *(undefined8 *)(ar4 + 0x6c4) = 0x6c83e4ccccd;
      }
    }
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x6c8));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c8);
      dVar13 = 12831.689682006836;
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(0x40c90fd8,fVar11);
    }
    else {
      dVar13 = -3.74578248742155e-250;
    }
    if (cVar17 == '\0') {
      fVar14 = (float)((ulonglong)dVar13 >> 0x20);
      fVar11 = SUB84(dVar13,0) / fVar14;
      dVar13 = (double)CONCAT44(fVar14,fVar11);
      iVar5 = (int)fVar11;
    }
    else {
      dVar13 = dVar13 / dVar13;
      iVar5 = (int)dVar13;
    }
    FUN_8c25747c(iVar5,pfVar7,ar6,pcVar9,uVar2);
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),*(undefined4 *)(ar4 + 0x6cc));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6cc);
    }
    if (cVar17 == '\0') {
      fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
    }
    else {
      fVar11 = SUB84(dVar13 * dVar13,0);
    }
    if (cVar18 == '\0') {
      dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar11);
    }
    else {
      dVar13 = *(double *)(ar4 + 0x34);
    }
    if (cVar17 == '\0') {
      fVar11 = (float)((ulonglong)dVar13 >> 0x20);
      dVar13 = (double)CONCAT44(fVar11,SUB84(dVar13,0) + fVar11);
    }
    else {
      dVar13 = dVar13 + dVar13;
    }
    if (cVar18 == '\0') {
      *(int *)(ar4 + 0x34) = SUB84(dVar13,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x34) = in_xd0;
    }
    pfVar7 = (float *)(ar4 + 0x30);
    (**(code **)(*(int *)ar7 + 0x128))(ar7,pfVar7,ar6,pcVar9);
    if (cVar18 == '\0') {
      dVar15 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),uVar4);
      dVar13 = (double)CONCAT44(0x435c0000,(int)((ulonglong)dVar13 >> 0x20));
    }
    else {
      dVar15 = *(double *)(ar4 + 0x34);
      dVar13 = 7.89940779200925e-312;
    }
    if (cVar17 == '\0') {
      fVar14 = (float)((ulonglong)dVar13 >> 0x20);
      fVar11 = SUB84(dVar13,0) + fVar14;
      dVar13 = (double)CONCAT44(fVar14,fVar11);
      bVar16 = fVar11 < (float)((ulonglong)dVar15 >> 0x20);
    }
    else {
      dVar13 = dVar13 + dVar13;
      bVar16 = dVar13 < dVar15;
    }
    if (!bVar16) {
      uVar12 = (ulonglong)dVar13 & 0xffffffff;
      if (cVar18 == '\0') {
        *(undefined4 *)(ar4 + 0x6c4) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x6c4) = uVar12;
      }
      iVar5 = FUN_8c02c518(ar4 + 0x174,pfVar7,ar6,pcVar9);
      if (iVar5 == -1) {
        if (cVar18 == '\0') {
          *(undefined4 *)(ar4 + 0x6cc) = 0x3f99999a;
          uVar12 = CONCAT44(0x3d23d70a,(int)uVar12);
          *(undefined4 *)(ar4 + 0x6d0) = 0x3d23d70a;
        }
        else {
          *(undefined8 *)(ar4 + 0x6cc) = 0x6d03f99999a;
          uVar12 = 0x6e03d23d70a;
          *(undefined8 *)(ar4 + 0x6d0) = 0x6e03d23d70a;
        }
        if (cVar18 == '\0') {
          *(undefined4 *)(ar4 + 0x6c8) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x6c8) = uVar12 & 0xffffffff;
        }
        *(undefined1 *)(ar4 + 0x6e0) = 1;
      }
    }
  }
  *(int *)(ar4 + 0x9d4) = *(int *)(ar4 + 0x9d4) + -5;
  if (*(int *)(ar4 + 0x9d4) < 0) {
    *(undefined4 *)(ar4 + 0x9d4) = 0;
  }
  for (pfVar3 = (float *)0x0; (int)pfVar3 < 8; pfVar3 = (float *)((int)pfVar3 + 1)) {
    pfVar7 = pfVar3;
    FUN_8c09cdf4(ar4,pfVar3,ar6,pcVar9);
    FUN_8c036988(*(undefined4 *)(ar4 + (int)pfVar3 * 4 + 0x524),pfVar7,ar6,pcVar9);
  }
LAB_8c09c65a:
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,pfVar7,ar6,pcVar9);
  FUN_8c0f79b8(ar4 + 0xa0,pfVar7,ar6,pcVar9);
  return 1;
}

__asm__(".globl _Class_12a990_m2_09bc2c\n.set _Class_12a990_m2_09bc2c, _Class_12a990_m2_09bc2c_def\n");
