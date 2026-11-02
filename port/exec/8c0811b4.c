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
undefined4 FUN_8c0811b4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0811b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 ar7_00;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  double dVar15;
  double dVar16;
  bool bVar17;
  undefined4 in_PR = 0;
  char cVar18;
  char cVar19;
  
  cVar19 = '\0';
  cVar18 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  uVar11 = 1;
  uVar7 = ar5;
  iVar2 = ar6;
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  pcVar8 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_zero(&(*(float *)(fr0_ - 0x2c)),uVar7,ar6,((void *)0x8c023d34)));
  pcVar4 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),((void *)0x8c022c4c),ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x4c)),pcVar4,ar6,pcVar8));
  if (cVar19 == '\0') {
    dVar14 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    dVar14 = 7.98396688937273e-312;
  }
  if (cVar18 == '\0') {
    fVar13 = F32HI(dVar14);
    dVar14 = CONCAT44D(fVar13,F32LO(dVar14) * fVar13);
  }
  else {
    dVar14 = dVar14 * dVar14;
  }
  if (cVar19 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar14,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar4,ar6,pcVar8); });
  pcVar5 = ((void *)0x8c082378);
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x5c)),((void *)0x8c082378),pcVar8));
  pcVar4 = (code *)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,pcVar5,pcVar8));
  iVar3 = *(int *)(unsigned)(ar4 + 0x2b0);
  if (iVar3 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,pcVar5,pcVar8));
    if (iVar2 == 1) {
      *(int *)(unsigned)(ar4 + 0x2b0) = *(int *)(unsigned)(ar4 + 0x2b0) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c0230f0(ar4 + 0x14,pcVar4,pcVar5,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x6c)),ar5,pcVar5,pcVar8));
      dVar15 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)(D2U(dVar14) >> 0x20));
        dVar15 = in_xd14;
      }
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,pcVar5,pcVar8));
      uVar7 = ar5;
      uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c023334(ar4 + 0x14,ar5,pcVar5,pcVar8));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar10;
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x7c)),uVar7,pcVar5,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x7c)),pcVar5,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,pcVar5,pcVar8));
      if (iVar2 == 1) {
        pcVar5 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),ar5,((void *)0x8c023a14),pcVar8));
      }
      else {
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x41200000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 1.29071326503144e-311;
        }
        fVar13 = F32LO(in_dr14);
        if (cVar18 == '\0') {
          bVar17 = F32HI(dVar14) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (!bVar17) {
          *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          uVar11 = 0;
          uVar7 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar7,uVar11));
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar7,uVar11));
          (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(float *)(fr0_ - 0x2c)),0xffffffff,uVar7,uVar11));
          (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,uVar7,((void *)0x8c014a34)));
          return 0;
        }
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x42960000,SUB84(dVar14,0));
        }
        else {
          dVar14 = 8.3237428396117e-312;
        }
        if (cVar18 == '\0') {
          bVar17 = F32HI(dVar14) < fVar13;
        }
        else {
          bVar17 = dVar14 < in_dr14;
        }
        if (bVar17) {
          if (cVar19 == '\0') {
            dVar14 = CONCAT44D(0x42d20000,SUB84(dVar14,0));
          }
          else {
            dVar14 = 1.29072731755484e-311;
          }
          if (cVar18 == '\0') {
            bVar17 = F32HI(dVar14) < fVar13;
          }
          else {
            bVar17 = dVar14 < in_dr14;
          }
          if (!bVar17) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = *(undefined4 *)(unsigned)(ar4 + 0x220);
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 5;
              (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
            }
            else if (*(int *)(unsigned)(ar4 + 0x260) == 4) {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 6;
              (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0));
            }
            else {
              uVar10 = 0;
              uVar11 = 0xffffffff;
              uVar7 = 0;
              (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
            }
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(float *)(fr0_ - 0x2c)),0xffffffff,uVar11,uVar10));
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,uVar11,uVar10));
            return 0;
          }
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),ar5,pcVar5,pcVar8));
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x88)),ar5,pcVar5,pcVar8));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x88)),pcVar5,pcVar8); });
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0x98)),pcVar5,pcVar8));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,pcVar5,pcVar8));
            uVar7 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar5,pcVar8));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa4)),ar5,pcVar5,pcVar8));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xa4)),pcVar5,pcVar8); });
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xb4)),pcVar5,pcVar8));
            (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,pcVar5,pcVar8));
            uVar7 = 0xffffffff;
            pcVar5 = ((void *)0x8c014a34);
            (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,((void *)0x8c014a34),pcVar8));
          }
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_normalize(((undefined1 *)(fr0_ - 0x4c)),uVar7,pcVar5,pcVar8));
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),((undefined1 *)(fr0_ - 0xc4)),pcVar5,pcVar8));
          ar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,pcVar5,pcVar8));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = *(undefined4 *)(unsigned)(ar4 + 0x220);
        }
        else {
          pcVar5 = ((void *)0x8c023a14);
          (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(((undefined1 *)(fr0_ - 0x4c)),ar5,((void *)0x8c023a14),pcVar8));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,pcVar5,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xd4)),((undefined1 *)(fr0_ - 0x4c)),pcVar5,pcVar8));
      dVar16 = dVar14;
      if (cVar19 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   (int)(D2U(dVar14) >> 0x20));
        dVar16 = dVar15;
      }
      (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,pcVar5,pcVar8));
      uVar10 = SUB84(dVar14,0);
      uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),pcVar5,pcVar8));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar7;
      if (cVar19 == '\0') {
        dVar14 = CONCAT44D(0x42b40000,uVar10);
      }
      else {
        dVar14 = 6.28663659401089e-312;
      }
      if (cVar18 == '\0') {
        bVar17 = SUB84(in_dr14,0) < F32HI(dVar14);
      }
      else {
        bVar17 = in_dr14 < dVar14;
      }
      if (bVar17) {
        if (*(int *)(unsigned)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            uVar10 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,uVar10));
            uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar10));
            pcVar5 = ((void *)0x8c015b4c);
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,pcVar8,((void *)0x8c015b4c)));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137618);
          }
          else {
            uVar9 = 0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 10;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,uVar9));
            uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,uVar9));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,pcVar8,uVar9));
            pcVar5 = (code *)(ar4 + 0xb4);
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)pcVar5 = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137630);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 9;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5));
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137678);
          }
          else {
            uVar9 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 10;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
            uVar6 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar9));
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,uVar10,uVar9));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            pcVar5 = (code *)0xb4;
            pcVar8 = (code *)((undefined1 *)(unsigned)0x8c137690);
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137690);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
          uVar6 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,((void *)0x8c026db0),uVar10,uVar9));
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,uVar9));
          puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,uVar10,((void *)0x8c015b4c)));
          uVar7 = puVar1[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(unsigned)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376d8) + (int)pcVar8 * 0x18;
        }
        else {
          uVar9 = 0;
          uVar10 = 0xffffffff;
          uVar7 = 10;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0));
          uVar6 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar9));
          uVar9 = 0xb0;
          uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,0xb0,uVar7));
          pcVar5 = ((void *)0x8c015b4c);
          pcVar8 = (code *)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,uVar9,((void *)0x8c015b4c)));
          uVar7 = *(undefined4 *)(unsigned)(pcVar8 + 4);
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *(undefined4 *)(unsigned)pcVar8;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = *(undefined4 *)(unsigned)(pcVar8 + 8);
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137708) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x42700000,uVar6);
        }
        else {
          dVar14 = 3.510285662012026e-304;
        }
        if (cVar18 == '\0') {
          fVar13 = F32LO(in_dr14) / F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = dVar16;
        }
      }
      else {
        if (*(int *)(unsigned)(ar4 + 0x128) < 2) {
          uVar11 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          goto LAB_8c0822ea;
        }
        if (*(int *)(unsigned)(ar4 + 0x128) == 2) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 2;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5));
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,((void *)0x8c015b4c),pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137648);
          }
          else {
            pcVar5 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            uVar7 = 3;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,pcVar8,pcVar5));
            uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137660);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x128) < 6) {
          if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 2;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar6));
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = ((void *)0x8c03c0f0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(pcVar5,uVar7,((void *)0x8c03c0f0),pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376a8);
          }
          else {
            uVar6 = 0;
            uVar10 = 0xffffffff;
            uVar7 = 3;
            (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
            uVar9 = SUB84(dVar14,0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,uVar6));
            pcVar5 = (code *)(ar4 + 0xb0);
            pcVar8 = ((void *)0x8c03c0f0);
            uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(pcVar5,uVar7,((void *)0x8c03c0f0),pcVar5));
            puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar7,uVar7,pcVar8,pcVar5));
            uVar7 = puVar1[1];
            *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
            *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
            *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
            *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1376c0);
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
          pcVar5 = (code *)0x0;
          uVar10 = 0xffffffff;
          uVar7 = 2;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
          uVar9 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar10,pcVar5));
          pcVar8 = (code *)(vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar10,pcVar5));
          puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(pcVar8,((void *)0x8c015b4c),pcVar8,pcVar5));
          uVar7 = puVar1[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c137798) + (*(int *)(unsigned)(ar4 + 0x128) + -6) * 0x18;
        }
        else {
          ar7_00 = 0;
          uVar6 = 0xffffffff;
          uVar7 = 3;
          (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
          uVar9 = SUB84(dVar14,0);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c026db0(ar4,uVar7,uVar6,ar7_00));
          uVar10 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c03c0f0(ar4 + 0xb0,uVar7,uVar6,ar7_00));
          puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), deref_u32(uVar10,uVar7,uVar6,ar7_00));
          uVar7 = puVar1[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar1;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar7;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar1[2];
          pcVar8 = (code *)(*(int *)(unsigned)(ar4 + 0x128) + -6);
          pcVar5 = (code *)0xb4;
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1377c8) + (int)pcVar8 * 0x18;
        }
        if (cVar19 == '\0') {
          dVar14 = CONCAT44D(0x43340000,uVar9);
        }
        else {
          dVar14 = 1.2652665412137e-311;
        }
        if (cVar18 == '\0') {
          fVar13 = F32LO(in_dr14) / F32HI(dVar14);
        }
        else {
          fVar13 = SUB84(in_dr14 / dVar14,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 0x240) = fVar13;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x240) = dVar16;
        }
      }
      uVar12 = SUB84(dVar14,0);
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c02a1fc(ar4 + 0x254,0x254,pcVar8,pcVar5));
      if (cVar19 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar12;
      }
      pcVar4 = ((void *)0x8c033e68);
      (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),pcVar8,pcVar5));
      pcVar8 = (code *)0x2b0;
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2b0));
      *(unsigned *)(unsigned)(ar4 + 0x2b0) = pcVar5 + 1;
    }
    else if (iVar3 != 2) goto LAB_8c0822ea;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 256)); CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar4,pcVar5,pcVar8); });
    uVar10 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4);
    uVar7 = 0xb0;
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c034650(ar4 + 0xb0,uVar10,0xb0,uVar10));
    (vsp = ((unsigned long)(fr0_ - 256)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0xe0)),uVar7,uVar10));
    (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,((void *)0x8c014a34),((undefined1 *)(fr0_ - 0xe0))));
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x254),(*(undefined4 *)(fr0_ - 0x20)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
      dVar14 = *(double *)(unsigned)(ar4 + 0x254);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) - F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(unsigned)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      (*(float *)(fr0_ - 0x2c)) = F32LO(dVar14) * F32HI(dVar14);
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
      dVar14 = *(double *)(unsigned)(ar4 + 600);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) - F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(unsigned)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      (*(float *)(fr0_ - 0x28)) = F32LO(dVar14) * F32HI(dVar14);
    }
    else {
      (*(float *)(fr0_ - 0x28)) = SUB84(dVar14 * dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x25c),(*(undefined4 *)(fr0_ - 0x18)));
    }
    else {
      (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      dVar14 = *(double *)(unsigned)(ar4 + 0x25c);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) - F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 - dVar14,0);
    }
    if (cVar19 == '\0') {
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x240),fVar13);
    }
    else {
      dVar14 = *(double *)(unsigned)(ar4 + 0x240);
    }
    if (cVar18 == '\0') {
      fVar13 = F32LO(dVar14) * F32HI(dVar14);
    }
    else {
      fVar13 = SUB84(dVar14 * dVar14,0);
    }
    (*(float *)(fr0_ - 0x24)) = fVar13;
    if (cVar19 != '\0') {
      (*(float *)(fr0_ - 0x24)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    pcVar8 = (code *)&(*(undefined4 *)(fr0_ - 0x20));
    uVar10 = 0x254;
    (vsp = ((unsigned long)(fr0_ - 256)), vec3_copy_8c023d8c(ar4 + 0x254,pcVar8,0x254,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 256)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xec)),&(*(float *)(fr0_ - 0x2c)),uVar10,pcVar8));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xfc))); *(unsigned *)((((unsigned long)(fr0_ - 256)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 256)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0xec)),uVar10,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 256)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xfc)),uVar10,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,uVar10,pcVar8));
    uVar7 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(((undefined1 *)(fr0_ - 0xec)),0xffffffff,uVar10,pcVar8));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar7,uVar10,pcVar8));
    if (iVar2 == 1) {
      uVar11 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
      if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      }
      else if (*(int *)(unsigned)(ar4 + 0x260) == 4) {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0));
      }
      else {
        pcVar8 = (code *)0x0;
        uVar7 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 256)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar7,pcVar8));
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      if (cVar19 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)fVar13;
      }
    }
  }
LAB_8c0822ea:
  uVar7 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,0xffffffff,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar7,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(float *)(fr0_ - 0x2c)),0xffffffff,uVar7,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 256)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,uVar7,pcVar8));
  return uVar11;
}

__asm__(".globl _FUN_8c0811b4\n.set _FUN_8c0811b4, _FUN_8c0811b4_def\n");
