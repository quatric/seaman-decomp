#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c06b460_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06b460";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *ar5_00;
  undefined4 unaff_r13 = 0;
  float fVar6;
  double dVar7;
  int iVar8;
  int ar6_00;
  int iVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c233dac(ar4 + 0x254,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    iVar8 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    iVar8 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    ar6_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    ar6_00 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    iVar9 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    iVar9 = (int)(dVar7 / dVar7);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c256b0c(0,iVar9,ar6_00,iVar8); });
  if (*(int *)(unsigned)(ar4 + 0x220) < 1) {
    iVar9 = ar4 + 100;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c256fec(0,iVar9,ar6_00,iVar8); });
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x224) + *(int *)(unsigned)(ar4 + 0x220) * 0x124 + 0x78,iVar9,ar6_00,iVar8));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x224) + *(int *)(unsigned)(ar4 + 0x220) * 0x124 + 0x70,iVar9,ar6_00,
                         iVar8));
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c219a9a(uVar4,iVar9,ar6_00,iVar8));
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c256fec(0,iVar9,ar6_00,iVar8); });
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x234);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x234);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x234);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x238);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x238);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x238);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x23c);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x23c);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
    puVar5 = (undefined8 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(unsigned)(ar4 + 0x23c);
    }
    if (*(int *)(unsigned)(ar4 + 0x210) < 4) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)) = 0x25;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x24;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
        + 0x2c) = 0x24;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)
                          + 0x2c) + 0x2c) + 0x2c) = 0x24;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) +
                                                                       0x30) + 0x30) + 0x2c) + 0x2c)
                                   + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                      0x2c);
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 
                                                  0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                   0x2c) + 0x2c) + 0x2c) + 0x30) = 0x35;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x37;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(
                                                  iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) =
           0x35;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar8 + 0x2c) + 0x30) +
                                                          0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c);
      iVar9 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x2c) + 0x30) + 0x30);
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar9 + 0x2c)) = 0x37;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                 0x30) + 0x30) = 0x35;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(*(int *)(unsigned)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x2c) = 0x37;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(*(int *)(unsigned)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x30) = 0x35;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar8 + 0x2c) + 0x30) +
                                                         0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
        0x2c) = 0x37;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)) = 0x2d;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x2c;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
        + 0x2c) = 0x2c;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)
                          + 0x2c) + 0x2c) + 0x2c) = 0x2c;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) +
                                                                       0x30) + 0x30) + 0x2c) + 0x2c)
                                   + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x3f;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 
                                                  0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                   0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x3f;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8));
      ar5_00 = *(undefined4 **)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *ar5_00 = 0x3d;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,ar5_00,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x3f;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,ar5_00,ar6_00,iVar8));
      iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c);
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c)
                          + 0x2c) + 0x30) + 0x30) = 0x3d;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                 0x30) + 0x2c) = 0x3f;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8));
      iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int
                                                                                                 *)(
                                                  *(int *)(unsigned)(iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                      0x30);
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 0x30)) = 0x3d;
      iVar9 = ar4 + 0x204;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(iVar9,iVar9,ar6_00,iVar2));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(*(int *)(unsigned)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x2c) = 0x3f;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(*(int *)(unsigned)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x30) = 0x3d;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2));
      **(undefined4 **)(unsigned)
        (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*
                                                  (int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar8 + 0x2c) + 0x30) +
                                                         0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
        0x2c) = 0x3f;
    }
    iVar8 = 0;
    while( true ) {
      uVar4 = 4;
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6_00,iVar2));
      if (iVar9 * 2 + 3 <= iVar8) break;
      if ((iVar8 < 9) && (-1 < iVar8)) {
                    
        switch(iVar8) {
        case 0:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x2c) + 4) + 4);
          break;
        case 1:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x2c) + 0x30) + 4) + 4);
          break;
        case 2:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x30) + 0x2c) + 4) + 4);
          break;
        case 3:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x2c) + 0x30) +
                                         0x30) + 4) + 4);
          break;
        case 4:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x30) + 0x2c) +
                                         0x30) + 4) + 4);
          break;
        case 5:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x2c)
                                                           + 0x30) + 0x30) + 0x30) + 4) + 4);
          break;
        case 6:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c) + 0x30)
                                                           + 0x2c) + 0x30) + 0x30) + 4) + 4);
          break;
        case 7:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar9 + 0x2c)
                                                                             + 0x2c) + 0x30) + 0x30)
                                                  + 0x30) + 0x30) + 4) + 4);
          break;
        case 8:
          iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
          unaff_r13 = *(undefined4 *)(unsigned)
                       (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(
                                                  iVar9 + 0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) +
                                                  0x30) + 0x30) + 4) + 4);
        }
      }
      iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), thunk_FUN_8c0151e8(unaff_r13,8,ar6_00,iVar2));
      if (iVar9 != 0) {
        uVar1 = *(ushort *)(unsigned)(iVar9 + 2);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6_00,iVar2));
        *(ushort *)(unsigned)(iVar9 + 2) =
             *(short *)(unsigned)(((undefined1 *)(unsigned)0x8c137008) +
                       ((int)*(char *)(unsigned)(ar4 + iVar8 + 0x248) + iVar8 * 3) * 2 + iVar3 * 0x36) +
             (uVar1 & 0xe000);
      }
      iVar8 = iVar8 + 1;
    }
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c01538c(ar4 + 0x208,uVar4,ar6_00,iVar2));
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2));
    iVar9 = (vsp = ((unsigned long)(fr0_ - 268)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x224) + 0x1c4) + *(int *)(unsigned)(ar4 + 0x228) * 4,uVar4,
                      ar6_00,iVar2));
    ar6_00 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c026d74(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x224) + 0x1cc) + *(int *)(unsigned)(ar4 + 0x228) * 4,uVar4,
                          ar6_00,iVar2));
    iVar8 = ar6_00;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c21bbb0(ar4_00,iVar9,ar6_00,ar6_00); });
  }
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c256210(1,iVar9,ar6_00,iVar8));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c233dac(((undefined4 *)(unsigned)0x8c136f2c),iVar9,ar6_00,iVar8));
  return uVar4;
}

__asm__(".globl _FUN_8c06b460\n.set _FUN_8c06b460, _FUN_8c06b460_def\n");
