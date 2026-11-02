#include "../decls.h"
undefined4 FUN_8c06b460_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *ar5_00;
  undefined4 unaff_r13;
  float fVar6;
  double dVar7;
  int iVar8;
  int ar6_00;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffef4;
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c233dac(ar4 + 0x254,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_fffffef4);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_fffffef4);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    iVar8 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar8 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    ar6_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    iVar9 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar9 = (int)(dVar7 / dVar7);
  }
  FUN_8c256b0c(0,iVar9,ar6_00,iVar8,in_stack_fffffef4);
  if (*(int *)(ar4 + 0x220) < 1) {
    iVar9 = ar4 + 100;
    FUN_8c256fec(0,iVar9,ar6_00,iVar8,in_stack_fffffef4);
    FUN_8c01538c(*(int *)(ar4 + 0x224) + *(int *)(ar4 + 0x220) * 0x124 + 0x78,iVar9,ar6_00,iVar8);
    uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x224) + *(int *)(ar4 + 0x220) * 0x124 + 0x70,iVar9,ar6_00,
                         iVar8);
    FUN_8c219a9a(uVar4,iVar9,ar6_00,iVar8);
  }
  else {
    FUN_8c256fec(0,iVar9,ar6_00,iVar8,in_stack_fffffef4);
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(iVar2 + 0x2c) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x234);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(iVar2 + 0x2c) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x234);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(iVar2 + 0x2c) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x234);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x238);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x238);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x238);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x23c);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x23c);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x23c);
    }
    if (*(int *)(ar4 + 0x210) < 4) {
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) = 0x25;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x24;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
        + 0x2c) = 0x24;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)
                          + 0x2c) + 0x2c) + 0x2c) = 0x24;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                       0x30) + 0x30) + 0x2c) + 0x2c)
                                   + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                      0x2c);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 
                                                  0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                   0x2c) + 0x2c) + 0x2c) + 0x30) = 0x35;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x37;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) =
           0x35;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x30) +
                                                          0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c);
      iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x30) + 0x30);
      **(undefined4 **)(iVar9 + 0x2c) = 0x37;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                 0x30) + 0x30) = 0x35;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x2c) = 0x37;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x30) = 0x35;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x30) +
                                                         0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
        0x2c) = 0x37;
    }
    else {
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) = 0x2d;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x2c;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
        + 0x2c) = 0x2c;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)
                          + 0x2c) + 0x2c) + 0x2c) = 0x2c;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                       0x30) + 0x30) + 0x2c) + 0x2c)
                                   + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x3f;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 
                                                  0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                   0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x3f;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      ar5_00 = *(undefined4 **)
                (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *ar5_00 = 0x3d;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,ar5_00,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x3f;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,ar5_00,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c)
                          + 0x2c) + 0x30) + 0x30) = 0x3d;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                 0x30) + 0x2c) = 0x3f;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int
                                                                                                 *)(
                                                  *(int *)(iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                      0x30);
      **(undefined4 **)(iVar2 + 0x30) = 0x3d;
      iVar9 = ar4 + 0x204;
      iVar8 = FUN_8c015bb8(iVar9,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x2c) = 0x3f;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x30) = 0x3d;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x30) +
                                                         0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
        0x2c) = 0x3f;
    }
    iVar8 = 0;
    while( true ) {
      uVar4 = 4;
      iVar9 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,iVar2);
      if (iVar9 * 2 + 3 <= iVar8) break;
      if ((iVar8 < 9) && (-1 < iVar8)) {
                    
        switch(iVar8) {
        case 0:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 4) + 4);
          break;
        case 1:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 0x30) + 4) + 4);
          break;
        case 2:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x2c) + 4) + 4);
          break;
        case 3:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 0x30) +
                                         0x30) + 4) + 4);
          break;
        case 4:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x2c) +
                                         0x30) + 4) + 4);
          break;
        case 5:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c)
                                                           + 0x30) + 0x30) + 0x30) + 4) + 4);
          break;
        case 6:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30)
                                                           + 0x2c) + 0x30) + 0x30) + 4) + 4);
          break;
        case 7:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c)
                                                                             + 0x2c) + 0x30) + 0x30)
                                                  + 0x30) + 0x30) + 4) + 4);
          break;
        case 8:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) +
                                                  0x30) + 0x30) + 4) + 4);
        }
      }
      iVar9 = thunk_FUN_8c0151e8(unaff_r13,8,ar6_00,iVar2);
      if (iVar9 != 0) {
        uVar1 = *(ushort *)(iVar9 + 2);
        iVar3 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,iVar2);
        *(ushort *)(iVar9 + 2) =
             *(short *)(&DAT_8c137008 +
                       ((int)*(char *)(ar4 + iVar8 + 0x248) + iVar8 * 3) * 2 + iVar3 * 0x36) +
             (uVar1 & 0xe000);
      }
      iVar8 = iVar8 + 1;
    }
    FUN_8c01538c(ar4 + 0x208,uVar4,ar6_00,iVar2);
    ar4_00 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
    iVar9 = deref_u32(*(int *)(*(int *)(ar4 + 0x224) + 0x1c4) + *(int *)(ar4 + 0x228) * 4,uVar4,
                      ar6_00,iVar2);
    ar6_00 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x224) + 0x1cc) + *(int *)(ar4 + 0x228) * 4,uVar4,
                          ar6_00,iVar2);
    iVar8 = ar6_00;
    FUN_8c21bbb0(ar4_00,iVar9,ar6_00,ar6_00,in_stack_fffffef4);
  }
  FUN_8c256210(1,iVar9,ar6_00,iVar8);
  uVar4 = FUN_8c233dac(&DAT_8c136f2c,iVar9,ar6_00,iVar8);
  return uVar4;
}

__asm__(".globl _FUN_8c06b460\n.set _FUN_8c06b460, _FUN_8c06b460_def\n");
