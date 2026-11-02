#include "../decls.h"
undefined4 FUN_8c029dec_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  double in_dr14;
  undefined8 in_xd0;
  bool bVar12;
  int ar6_00;
  int iVar13;
  char cVar14;
  char cVar15;
  undefined4 in_stack_ffffff9c;
  undefined2 uVar16;
  
  uVar16 = (undefined2)((uint)in_stack_ffffff9c >> 0x10);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = ar5;
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar7 = CONCAT22(uVar16,(short)uVar1);
  if (*(int *)(ar4 + 0x3dc) == *(int *)(ar4 + 0x3d8)) {
    **(undefined4 **)(ar5 + 4) =
         *(undefined4 *)
          (*(int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124) + *(int *)(ar4 + 0x3e4) * 4 + 0x40
          );
  }
  else {
    ar6 = (int)*(short *)(ar4 + 0x3fa);
    iVar3 = -0x73d86cf8;
    FUN_8c02ab24(ar4,0x8c279308,ar6,ar7);
    **(undefined4 **)(ar5 + 4) = 0x8c279308;
  }
  FUN_8c0f52c8(ar4,iVar3,ar6,ar7);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x430),iVar3,ar6,ar7);
  iVar4 = 0;
  piVar2 = (int *)get_field_4_0253e4(*(undefined4 *)(ar4 + 0x430),iVar3,ar6,ar7);
  if (*(int *)(ar4 + 0x460) != 0) {
    if (*(int *)(ar4 + 0x460) != 2) goto LAB_8c029f42;
    iVar4 = 2;
  }
  iVar4 = iVar4 + 6;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    uVar1 = *(undefined4 *)(iVar3 * 0xc + *piVar2 + 8);
    *(undefined4 *)(iVar3 * 0xc + *piVar2 + 8) =
         *(undefined4 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8);
    *(undefined4 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8) = uVar1;
  }
LAB_8c029f42:
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x404));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x404);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar3 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x400));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x400);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    ar6_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x3fc);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar13 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar13 = (int)(dVar9 / dVar9);
  }
  FUN_8c256b0c(0,iVar13,ar6_00,iVar3,uVar7);
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x3fc);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x3fc) = fVar8;
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x400));
  }
  else {
    *(undefined8 *)(ar4 + 0x3fc) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x400);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x400) = fVar8;
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x404));
  }
  else {
    *(undefined8 *)(ar4 + 0x400) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x404);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x404) = fVar8;
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x3fc));
    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x400),fVar8);
  }
  else {
    *(undefined8 *)(ar4 + 0x404) = in_xd0;
    dVar9 = *(double *)(ar4 + 0x400);
  }
  if (cVar14 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x404),SUB84(dVar9,0));
  }
  else {
    dVar9 = *(double *)(ar4 + 0x404);
  }
  if (cVar14 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3dcccccd,SUB84(dVar9,0));
  }
  else {
    dVar9 = -5.238690707360522e-11;
  }
  if (cVar14 == '\0') {
    bVar12 = SUB84(in_dr14,0) < (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    bVar12 = in_dr14 < dVar9;
  }
  if (bVar12) {
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44(0xbdcccccd,SUB84(dVar9,0));
    }
    else {
      dVar9 = -8.132627400321583e-251;
    }
    if (cVar14 == '\0') {
      bVar12 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar12 = dVar9 < in_dr14;
    }
    if (bVar12) {
      FUN_8c02a1fc(ar4 + 0x3fc,iVar13,ar6_00,iVar3);
    }
  }
  uVar6 = SUB84(dVar9,0);
  uVar11 = SUB84(in_dr14,0);
  uVar1 = *(undefined4 *)(ar5 + 4);
  FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3);
  if (*(int *)(ar4 + 0x460) != 1) {
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      uVar5 = *(undefined4 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8);
      *(undefined4 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8) =
           *(undefined4 *)(iVar13 * 0xc + *piVar2 + 8);
      *(undefined4 *)(iVar13 * 0xc + *piVar2 + 8) = uVar5;
    }
  }
  if (*(int *)(ar4 + 0x45c) != 0) {
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)*(int *)(ar4 + 0x45c),uVar11);
    }
    else {
      dVar9 = (double)*(int *)(ar4 + 0x45c);
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(0x44e10000,uVar6);
    }
    else {
      dVar10 = 2.3262783273243e-311;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) /
                               (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 / dVar10;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - 1.0,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 - (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x448) = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined4 *)(ar4 + 0x44c) = *(undefined4 *)(ar4 + 0x43c);
      *(undefined4 *)(ar4 + 0x450) = *(undefined4 *)(ar4 + 0x440);
      *(undefined4 *)(ar4 + 0x454) = *(undefined4 *)(ar4 + 0x444);
    }
    else {
      *(double *)(ar4 + 0x448) = dVar9;
      *(undefined8 *)(ar4 + 0x44c) = *(undefined8 *)(ar4 + 0x43c);
      *(undefined8 *)(ar4 + 0x450) = *(undefined8 *)(ar4 + 0x440);
      *(undefined8 *)(ar4 + 0x454) = *(undefined8 *)(ar4 + 0x444);
    }
    FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3);
    uVar6 = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*piVar2 + 0x44);
    *(undefined4 *)(*piVar2 + 0x44) = uVar6;
    FUN_8c256328(0,uVar1,ar6_00,iVar3,uVar7);
    FUN_8c256fec(0,uVar1,ar6_00,iVar3,uVar7);
    uVar1 = *(undefined4 *)(ar5 + 4);
    FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3);
    FUN_8c256210(1,uVar1,ar6_00,iVar3);
    uVar7 = *(undefined4 *)(*piVar2 + 0x44);
    *(undefined4 *)(*piVar2 + 0x44) = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(*piVar2 + 8) = uVar7;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x448) = *(undefined4 *)(ar4 + 0x438);
    }
    else {
      *(undefined8 *)(ar4 + 0x448) = *(undefined8 *)(ar4 + 0x438);
    }
    FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3);
  }
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),uVar1,ar6_00,iVar3);
  uVar1 = FUN_8c0f5308(ar4,uVar1,ar6_00,iVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c029dec\n.set _FUN_8c029dec, _FUN_8c029dec_def\n");
