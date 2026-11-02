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
undefined4 FUN_8c0cc784_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cc784";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  uint a6;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *a6_00;
  int *a4;
  uint ar6_00;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *a5;
  int iVar8;
  ulonglong in_dr0 = 0;
  double dVar9;
  double in_dr2 = 0;
  undefined4 uVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar10 = 0;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0b9d14(ar5,&(*(ushort *)(fr0_ - 0x34)),ar6_00,ar7));
  *(undefined2 *)(unsigned)(ar5 + 0x8c) = *(undefined2 *)(unsigned)(ar6 + 0x14);
  *(undefined2 *)(unsigned)(ar5 + 0x8e) = *(undefined2 *)(unsigned)(ar6 + 0x16);
  *(undefined2 *)(unsigned)(ar5 + 0x90) = *(undefined2 *)(unsigned)(ar6 + 0x18);
  *(undefined2 *)(unsigned)(ar5 + 0x92) = *(undefined2 *)(unsigned)(ar6 + 0x1a);
  *(undefined2 *)(unsigned)(ar5 + 0x94) = *(undefined2 *)(unsigned)(ar6 + 0x1c);
  *(undefined2 *)(unsigned)(ar5 + 0x96) = *(undefined2 *)(unsigned)(ar6 + 0x1e);
  *(undefined2 *)(unsigned)(ar5 + 0x98) = *(undefined2 *)(unsigned)(ar6 + 0x20);
  *(undefined2 *)(unsigned)(ar5 + 0x9a) = *(undefined2 *)(unsigned)(ar6 + 0x22);
  *(undefined2 *)(unsigned)(ar5 + 0x9c) = *(undefined2 *)(unsigned)(ar6 + 0x24);
  *(undefined2 *)(unsigned)(ar5 + 0x9e) = *(undefined2 *)(unsigned)(ar6 + 0x26);
  *(undefined1 *)(unsigned)(ar5 + 0xa0) = *(undefined1 *)(unsigned)(ar6 + 0xa8);
  a6 = *(uint *)(unsigned)(ar6 + 0xac);
  *(undefined2 *)(unsigned)(ar5 + 0xa2) = *(undefined2 *)(unsigned)(ar6 + 0x28);
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c1f826c(&(*(ushort *)(fr0_ - 0x34)),&(*(int *)(fr0_ - 0x48)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c1f826c(ar5 + 0x8c,&(*(int *)(fr0_ - 0x4c)),ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010284((*(int *)(fr0_ - 0x48)) - (*(int *)(fr0_ - 0x4c)),0xe10,ar6_00,ar7));
  *(short *)(unsigned)(ar5 + 0xae) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0103d0((*(int *)(fr0_ - 0x48)) - (*(int *)(fr0_ - 0x4c)),0xe10,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_010284(uVar1,0x3c,ar6_00,ar7));
  *(short *)(unsigned)(ar5 + 0xb0) = (short)uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0103d0(uVar1,0x3c,ar6_00,ar7));
  *(short *)(unsigned)(ar5 + 0xb2) = (short)uVar1;
  if (((((*(ushort *)(fr0_ - 0x34)) == *(ushort *)(unsigned)(ar5 + 0x8c)) && ((*(byte *)(fr0_ - 0x32)) == *(byte *)(unsigned)(ar5 + 0x8e))) &&
      ((*(byte *)(fr0_ - 0x31)) == *(byte *)(unsigned)(ar5 + 0x8f))) && (7 < *(ushort *)(unsigned)(ar5 + 0xae))) {
    *(short *)(unsigned)(ar5 + 0xa2) = *(short *)(unsigned)(ar5 + 0xa2) + 1;
  }
  else if ((*(ushort *)(unsigned)(ar5 + 0xae) < 0x18) &&
          (((ar6_00 = (uint)(*(byte *)(fr0_ - 0x31)), *(byte *)(unsigned)(ar5 + 0x8f) < ar6_00 ||
            (*(byte *)(unsigned)(ar5 + 0x8e) < (*(byte *)(fr0_ - 0x32)))) || (*(ushort *)(unsigned)(ar5 + 0x8c) < (*(ushort *)(fr0_ - 0x34)))))) {
    *(short *)(unsigned)(ar5 + 0xa2) = *(short *)(unsigned)(ar5 + 0xa2) + 1;
  }
  else if (0x17 < *(ushort *)(unsigned)(ar5 + 0xae)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0101e4((uint)*(ushort *)(unsigned)(ar5 + 0xae),0x18,ar6_00,ar7));
    ar6_00 = 0xa2;
    *(short *)(unsigned)(ar5 + 0xa2) = *(short *)(unsigned)(ar5 + 0xa2) + (short)uVar1;
  }
  iVar6 = ar6 + 0x30f4;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fa334(0x8c35468c,iVar6,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01f528(0x8c3dd7dc,iVar6,ar6_00,ar7));
  iVar6 = ar6 + 0x4104;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01e0a4(uVar1,iVar6,ar6_00,ar7));
  if (*(byte *)(unsigned)(ar5 + 0xa0) < 3) {
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x160))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x164))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x168))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0x1a4,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x16c))))
              (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),*(undefined4 *)(unsigned)(ar6 + 0x1b8),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x170))))
              (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),*(undefined4 *)(unsigned)(ar6 + 0x1a8),ar6_00,ar7));
    uVar1 = *(undefined4 *)(unsigned)(ar6 + 0x1ac);
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x174))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar1,ar6_00,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x148))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar1,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e983c(uVar1,ar6 + 0x14ac,ar6_00,ar7));
    for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
      iVar8 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x104))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar6,ar6_00,ar7));
      puVar7 = (undefined8 *)(unsigned)(ar6 + iVar6 * 0x10 + 0x1bc);
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(iVar8 + 4) = *(undefined4 *)(unsigned)puVar7;
      }
      else {
        *(undefined8 *)(unsigned)(iVar8 + 4) = *puVar7;
      }
      puVar7 = (undefined8 *)(unsigned)(ar6 + iVar6 * 0x10 + 0x1c0);
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(iVar8 + 8) = *(undefined4 *)(unsigned)puVar7;
      }
      else {
        *(undefined8 *)(unsigned)(iVar8 + 8) = *puVar7;
      }
      puVar7 = (undefined8 *)(unsigned)(ar6 + iVar6 * 0x10 + 0x1c4);
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(iVar8 + 0xc) = *(undefined4 *)(unsigned)puVar7;
      }
      else {
        *(undefined8 *)(unsigned)(iVar8 + 0xc) = *puVar7;
      }
      if (iVar6 == 0) {
        if (cVar15 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(iVar8 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(unsigned)(iVar8 + 4);
        }
        if (cVar15 == '\0') {
          dVar11 = CONCAT44D(0xc28983d7,(float)(int)*(char *)(unsigned)(ar6 + 0x14ac));
        }
        else {
          dVar11 = 4.6046138430016596e-232;
        }
        if (cVar14 == '\0') {
          in_dr2 = CONCAT44D(F32HI(in_dr2) +
                                    F32LO(dVar11) * F32HI(dVar11),
                                    SUB84(in_dr2,0));
        }
        else {
          in_dr2 = in_dr2 + dVar11 * dVar11;
        }
        if (cVar15 == '\0') {
          *(int *)(unsigned)(iVar8 + 4) = (int)((ulonglong)in_dr2 >> 0x20);
        }
        else {
          *(double *)(unsigned)(iVar8 + 4) = in_dr2;
        }
      }
    }
    for (iVar6 = 0; uVar5 = (uint)*(byte *)(unsigned)(ar6 + 0x1b4), iVar6 < (int)uVar5; iVar6 = iVar6 + 1) {
      if (*(int *)(unsigned)(iVar6 * 0xf0 + ar6 + 0x204) != -1) {
        ar6_00 = ar5 + 0xac;
        iVar8 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0ce994(ar4,iVar6 * 0xf0 + ar6 + 0x1ec,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar8 + 8) + 0xa0))))(iVar8,iVar6 * 0xf0 + ar6 + 0x218,ar6_00,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0cea98(ar4,iVar8,ar6_00,ar7));
        if (iVar3 == 1) {
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0ceb04(ar4,iVar8,ar6_00,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar8,ar6_00,ar7));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x178))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x160))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x17c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x164))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar5,ar6_00,ar7));
    uVar5 = 0x1b8;
    if (*(int *)(unsigned)(ar6 + 0x1b8) == 1) {
      uVar5 = *((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((uVar5 + 0x188))))(((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x168))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),uVar5,ar6_00,ar7));
    }
  }
  else {
    uVar5 = *(uint *)(unsigned)(ar6 + 0x278c);
    uVar4 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x144))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),0x278c,ar6_00,ar7));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_0103d0(uVar5,7,ar6_00,ar7));
    if (iVar6 == 3) {
      uVar5 = uVar4 - uVar5;
      if (uVar4 < uVar5) {
        uVar5 = uVar4 - 1;
      }
    }
    else if (iVar6 == 4) {
      if (((*(byte *)(fr0_ - 0x32)) < 6) || (9 < (*(byte *)(fr0_ - 0x32)))) {
        if (((*(byte *)(fr0_ - 0x32)) != 0) && ((*(byte *)(fr0_ - 0x32)) < 6)) {
          uVar5 = (uVar4 >> 1) + (uVar4 >> 2);
        }
      }
      else {
        uVar5 = uVar4 >> 2;
      }
    }
    else if (iVar6 == 5) {
      if (cVar14 == '\0') {
        dVar11 = CONCAT44D((float)(int)uVar5,uVar10);
      }
      else {
        dVar11 = (double)(int)uVar5;
      }
      dVar9 = (double)(in_dr0 & 0xffffffff);
      fVar12 = F32HI(dVar11);
      if (cVar14 == '\0') {
        bVar13 = fVar12 < 0.0;
      }
      else {
        bVar13 = dVar11 < dVar9;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar9 = CONCAT44D(0x4f800000,(int)in_dr0);
        }
        else {
          dVar9 = 0.000878906487741915;
        }
        if (cVar14 == '\0') {
          dVar11 = CONCAT44D(fVar12 + F32HI(dVar9),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 + dVar9;
        }
      }
      if (cVar15 == '\0') {
        dVar9 = CONCAT44D(0x3f4ccccd,SUB84(dVar9,0));
      }
      else {
        dVar9 = 3.533694962840277e+72;
      }
      if (cVar14 == '\0') {
        dVar11 = CONCAT44D(F32HI(dVar11) *
                                  F32HI(dVar9),SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 * dVar9;
      }
      if (cVar15 == '\0') {
        dVar9 = CONCAT44D(0x4f000000,SUB84(dVar9,0));
      }
      else {
        dVar9 = -9.046259633960061e+74;
      }
      fVar12 = F32HI(dVar11);
      if (cVar14 == '\0') {
        bVar13 = F32HI(dVar9) < fVar12;
      }
      else {
        bVar13 = dVar9 < dVar11;
      }
      if (bVar13) {
        if (cVar15 == '\0') {
          dVar9 = CONCAT44D(0xcf800000,SUB84(dVar9,0));
        }
        else {
          dVar9 = 1.1334820462917686e+193;
        }
        if (cVar14 == '\0') {
          dVar11 = CONCAT44D(fVar12 + F32HI(dVar9),SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 + dVar9;
        }
      }
      if (cVar14 == '\0') {
        uVar5 = (uint)F32HI(dVar11);
      }
      else {
        uVar5 = (uint)dVar11;
      }
    }
    else {
      uVar5 = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xc4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar5,ar6_00,ar7));
    for (uVar4 = 0; (int)uVar4 < (int)(uint)*(byte *)(unsigned)(ar6 + 0x2790); uVar4 = uVar4 + 1) {
      uVar5 = uVar4;
      if (*(int *)(unsigned)(uVar4 * 0xf0 + ar6 + 0x27ac) != -1) {
        uVar1 = *(undefined4 *)(unsigned)(uVar4 * 0xf0 + ar6 + 0x27e8);
        uVar5 = (vsp = ((unsigned long)(fr0_ - 80)), s_Shell_0fef9c(0x8c3eb324,*(undefined4 *)(unsigned)(uVar4 * 0xf0 + ar6 + 0x27ac),uVar1,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uVar5 + 8) + 0x104))))(uVar5,uVar4 * 0xf0 + ar6 + 0x2794,uVar1,ar7));
        iVar6 = ar5 + 0xac;
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uVar5 + 8) + 0x98))))(uVar5,iVar6,uVar1,ar7));
        a6_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(uVar5 + 8) + 0x148));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)a6_00))(uVar5,iVar6,a6_00,ar7));
        ar6_00 = (uint)(short)uVar1;
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uVar5 + 8) + 0xe0))))(uVar5,0x8c3eb334,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uVar5 + 8) + 0x5c))))(uVar5,*(int *)(unsigned)(uVar5 + 8),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uVar5 + 8) + 0xa0))))(uVar5,uVar4 * 0xf0 + ar6 + 0x27c0,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar5,ar6_00,ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x168))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar5,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x148))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar5,ar6_00,ar7));
  iVar6 = ar6 + 0x2784;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e983c(uVar1,iVar6,ar6_00,ar7));
  for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(unsigned)(ar6 + 0x14c0); iVar8 = iVar8 + 1) {
    iVar6 = *(int *)(unsigned)(iVar8 * 0xf0 + ar6 + 0x14dc);
    if (iVar6 != -1) {
      if ((*(int *)(unsigned)(iVar8 * 0xf0 + ar6 + 0x14dc) == 0xd) ||
         (*(int *)(unsigned)(iVar8 * 0xf0 + ar6 + 0x14dc) == 0xc)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c431a54) = 1;
      }
      ar6_00 = ar5 + 0xac;
      iVar6 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0ce994(ar4,iVar8 * 0xf0 + ar6 + 0x14c4,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar6 + 8) + 0xa0))))(iVar6,iVar8 * 0xf0 + ar6 + 0x14f0,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar6,ar6_00,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x188))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x168))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar6,ar6_00,ar7));
  if (*(int *)(unsigned)(ar6 + 200) != -1) {
    iVar6 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0ce994(ar4,ar6 + 0xb0,ar5 + 0xac,ar7));
    a5 = ((undefined1 *)(fr0_ - 0x44));
    ar6_00 = a6;
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar6 + 8) + 0x150))))(iVar6,a5,a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c036988(iVar6,a5,ar6_00,ar7));
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + a6 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x50))))(a4,iVar6,ar6_00,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0cc784\n.set _FUN_8c0cc784, _FUN_8c0cc784_def\n");
