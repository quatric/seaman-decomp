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
undefined4 FUN_8c0a77c8_def(int ar4,code *ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a77c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  double *pdVar3;
  undefined4 uVar4;
  double *ar6_00;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double in_dr0 = 0;
  code *pcVar12;
  float fVar13;
  double dVar10;
  undefined8 uVar11;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar14;
  char cVar15;
  char cVar16;
  
  cVar16 = '\0';
  cVar15 = '\0';
  fVar7 = F32HI(in_dr4);
  fVar9 = F32HI(in_dr6);
  uVar6 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    ar7 = 0;
    pdVar3 = (double *)(unsigned)0xffffffff;
    ar5 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
    fVar7 = F32LO(in_dr0);
    (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,pdVar3,ar7));
    if (cVar16 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
    }
    if (cVar16 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)(uint)fVar7;
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
    }
    dVar10 = (double)(ulonglong)(uint)fVar7;
    if (cVar15 == '\0' && fVar7 < 0.0) {
      while( true ) {
        fVar7 = F32LO(dVar10);
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        }
        if (cVar15 == '\0' && 0.0 < fVar7) break;
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = -5629500670083072.0;
        }
        if (cVar15 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) + F32HI(dVar10));
        }
        else {
          dVar10 = dVar10 + dVar10;
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = SUB84(dVar10,0);
        }
        else {
          *(double *)(unsigned)ar5 = in_xd0;
        }
      }
      if (cVar16 == '\0') {
        dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        dVar10 = -5629500670083072.0;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar10) - F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = -180.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = -180.0;
        fVar9 = 4.2039e-43;
      }
      if (cVar15 == '\0' && fVar7 < fVar9) {
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = -5629500670083072.0;
        }
        if (cVar15 == '\0') {
          fVar7 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        }
      }
    }
    else {
      while( true ) {
        fVar7 = F32LO(dVar10);
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        }
        if (cVar15 == '\0' && fVar7 < 0.0) break;
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          dVar10 = 5629500670083072.0;
        }
        if (cVar15 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(F32LO(dVar10) - F32HI(dVar10));
        }
        else {
          dVar10 = dVar10 - dVar10;
        }
        if (cVar16 == '\0') {
          *(int *)(unsigned)(ar4 + 0x21ac) = SUB84(dVar10,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        }
      }
      if (cVar16 == '\0') {
        dVar10 = CONCAT44D(0x43b40000,*(undefined4 *)(unsigned)(ar4 + 0x21ac));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        dVar10 = 5629500670083072.0;
      }
      if (cVar15 == '\0') {
        fVar7 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = 180.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = 180.0;
        fVar9 = -1.0;
      }
      if (cVar15 == '\0' && fVar9 < fVar7) {
        pdVar3 = (double *)(unsigned)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(*(float *)(unsigned)pdVar3,0x43b40000);
        }
        else {
          dVar10 = *pdVar3;
          in_xd0 = 5629500670083072.0;
        }
        if (cVar15 == '\0') {
          fVar7 = F32LO(dVar10) - F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 - dVar10,0);
        }
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,fVar7);
        }
        else {
          dVar10 = 4.6047243762097055e-232;
        }
        if (cVar15 == '\0') {
          fVar7 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar7 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        }
      }
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    pdVar3 = ar6;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        *(float *)(unsigned)(ar4 + 0x21a8) = *(float *)(unsigned)(ar4 + 0x21a8) - 6.0;
        *(float *)(unsigned)(ar4 + 0x2194) = *(float *)(unsigned)(ar4 + 0x2194) + 6.0;
        fVar8 = *(float *)(unsigned)(ar4 + 0x2194);
        if (fVar8 < 90.0) {
          return 1;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
        fVar13 = -fVar9;
        in_dr0 = CONCAT44D(fVar13,fVar8);
        *(float *)(unsigned)(ar4 + 0x94) = fVar13;
      }
      else if (iVar1 != 3) {
        return 1;
      }
      pdVar3 = (double *)(unsigned)ar5;
      ar6_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022fc0(ar4 + 0x54,ar5,ar6,ar7));
      fVar8 = F32HI(in_dr0);
      dVar10 = in_dr0;
      if (cVar16 == '\0') {
        (*(undefined8 *)(fr0_ - 0x60)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x60))+4)),fVar8);
        dVar10 = (*(undefined8 *)(fr0_ - 0x60));
      }
      (*(undefined8 *)(fr0_ - 0x60)) = dVar10;
      if (cVar15 == '\0') {
        bVar14 = fVar8 < fVar7;
      }
      else {
        bVar14 = in_dr0 < CONCAT44D(in_fr14,fVar7);
      }
      if (bVar14) goto LAB_8c0a82ca;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x94) = (ulonglong)in_dr0 & 0xffffffff;
      }
      uVar6 = 0;
      ar6_00 = (double *)(unsigned)0x2;
      pdVar3 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), rand_range(ar4,0,2,ar7));
      if ((pdVar3 != (double *)(unsigned)0x0) || (*(int *)(unsigned)(ar4 + 0x2198) == 7)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2198) = 6;
        goto LAB_8c0a82ca;
      }
      (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x54,ar5,ar6_00,ar7));
      if (cVar16 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = (int)in_dr4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = CONCAT44(fVar9,(int)in_dr4);
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2198) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x21a4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
      if (cVar16 == '\0') {
        fVar9 = *(float *)(unsigned)((int)ar6 + 4);
        fVar8 = 90.0;
      }
      else {
        in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
        fVar9 = 90.0;
        fVar8 = 4.2039e-43;
      }
      if (fVar9 == fVar8) {
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar8 = 90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          fVar9 = 90.0;
          fVar8 = 4.2039e-43;
        }
        if (fVar9 != fVar8) goto LAB_8c0a80fe;
LAB_8c0a8154:
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x5c));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
          dVar10 = 3.73983522256399e-312;
        }
        if (cVar15 == '\0') {
          fVar9 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x5c) = fVar9;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = in_xd0;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
        uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), Vec3_length(((undefined1 *)(fr0_ - 0x2c)),((void *)0x8c022f54),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x80,uVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
      }
      else {
LAB_8c0a80fe:
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)((int)ar6 + 4);
          fVar8 = -90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar9 = -90.0;
          fVar8 = 180.0;
        }
        if (fVar9 == fVar8) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
            fVar8 = -90.0;
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
            fVar9 = -90.0;
            fVar8 = 180.0;
          }
          if (fVar9 == fVar8) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)((int)ar6 + 4);
        }
        else {
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
        }
        if (fVar9 == 0.0) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (fVar9 == 0.0) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          fVar9 = *(float *)(unsigned)((int)ar6 + 4);
          fVar8 = 180.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar9 = 180.0;
          fVar8 = 0.1;
        }
        if (fVar9 == fVar8) {
          if (cVar16 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x21ac);
            fVar8 = 180.0;
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
            fVar9 = 180.0;
            fVar8 = 0.1;
          }
          if (fVar9 == fVar8) goto LAB_8c0a8154;
        }
        if (cVar16 == '\0') {
          dVar10 = CONCAT44D(0xbdcccccd,*(undefined4 *)(unsigned)(ar4 + 0x5c));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x5c);
          dVar10 = 3.41092587496438e-312;
        }
        if (cVar15 == '\0') {
          fVar9 = F32LO(dVar10) + F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar16 == '\0') {
          *(float *)(unsigned)(ar4 + 0x5c) = fVar9;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = in_xd0;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); Vec3_sub(ar4 + 0x54,ar5,ar6_00,ar7); });
        uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), Vec3_length(((undefined1 *)(fr0_ - 0x3c)),((void *)0x8c022f54),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x80,uVar4,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
      }
      iVar1 = ar4 + 0x80;
      (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + 0x14,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c023d7c(ar4 + 0x21a8,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c023d7c(ar6,iVar1,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c031ab4(ar4,ar6,ar6_00,ar7));
      pdVar3 = ar6;
LAB_8c0a82ca:
      if (499 < *(int *)(unsigned)(ar4 + 0x230)) {
        return uVar6;
      }
      if (cVar16 == '\0') {
        fVar9 = *(float *)(unsigned)(ar4 + 0x94);
        fVar8 = -3.0;
      }
      else {
        fVar9 = -3.0;
        fVar8 = 2.2959944e+08;
      }
      if (cVar15 != '\0' || fVar9 <= fVar8) {
        iVar1 = 0;
        while( true ) {
          if (cVar16 == '\0') {
            uVar11 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x94),(float)iVar1);
          }
          else {
            uVar11 = *(undefined8 *)(unsigned)(ar4 + 0x94);
          }
          if (cVar15 == '\0' && (float)uVar11 < F32HI(uVar11)) break;
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x4c)),pdVar3,ar6_00,ar7));
          ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x60)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x4c)),ar6_00,ar7); });
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + *(int *)(unsigned)(ar4 + 0x230) * 0x10 + 0x234,(int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x60)) + 4,0xffffffff,ar6_00,ar7));
          pdVar3 = (double *)(unsigned)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
          iVar2 = *(int *)(unsigned)(ar4 + 0x230);
          *(int *)(unsigned)(ar4 + 0x230) = iVar2 + 1;
          if (499 < iVar2 + 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x230) = 500;
          }
          if (cVar15 == '\0') {
            bVar14 = (float)*(int *)(unsigned)(ar4 + 0x230) < fVar7;
          }
          else {
            bVar14 = (double)*(int *)(unsigned)(ar4 + 0x230) < CONCAT44D(in_fr14,fVar7);
          }
          if (!bVar14) {
            if (cVar15 == '\0') {
              iVar2 = (int)fVar7;
            }
            else {
              iVar2 = (int)CONCAT44D(in_fr14,fVar7);
            }
            *(int *)(unsigned)(ar4 + 0x230) = iVar2;
          }
          iVar1 = iVar1 + -2;
        }
        return uVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 100)), Vec3_assign(ar4 + *(int *)(unsigned)(ar4 + 0x230) * 0x10 + 0x234,ar5,ar6_00,ar7));
      iVar1 = *(int *)(unsigned)(ar4 + 0x230);
      *(int *)(unsigned)(ar4 + 0x230) = iVar1 + 1;
      if (499 < iVar1 + 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x230) = 500;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)*(int *)(unsigned)(ar4 + 0x230) < fVar7;
      }
      else {
        bVar14 = (double)*(int *)(unsigned)(ar4 + 0x230) < CONCAT44D(in_fr14,fVar7);
      }
      if (bVar14) {
        return uVar6;
      }
      if (cVar15 == '\0') {
        iVar1 = (int)fVar7;
      }
      else {
        iVar1 = (int)CONCAT44D(in_fr14,fVar7);
      }
      *(int *)(unsigned)(ar4 + 0x230) = iVar1;
      return uVar6;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)((int)ar6 + 4);
    fVar9 = 90.0;
  }
  else {
    in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)((int)ar6 + 4);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
      fVar7 = -90.0;
      fVar9 = -1.0;
    }
    if (fVar7 != fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      }
      if (cVar15 != '\0' || 0.0 <= fVar7) {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar9 = 90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          fVar7 = 90.0;
          fVar9 = 180.0;
        }
        if (cVar15 == '\0' && fVar7 < fVar9) {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 - 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
          }
          if (cVar15 != '\0' || fVar7 <= 0.0) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
            pcVar12 = (code *)0x43340000;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            fVar7 = 180.0;
            pcVar12 = ((void *)0x8c022d04);
          }
          if (cVar15 != '\0' || (float)(uint)pcVar12 <= fVar7) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0x43340000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x21ac) = 0xfe6e04443340000;
            }
          }
        }
      }
      else {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar9 = -90.0;
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          fVar7 = -90.0;
          fVar9 = -180.0;
        }
        if (cVar15 == '\0' && fVar9 < fVar7) {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 + 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
          }
          if (cVar15 != '\0' || 0.0 <= fVar7) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0;
            }
            else {
              *(ulonglong *)(unsigned)(ar4 + 0x21ac) = (ulonglong)(uint)fVar7;
            }
          }
        }
        else {
          if (cVar16 == '\0') {
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
          }
          if (cVar15 == '\0') {
            fVar7 = fVar7 - 1.0;
          }
          else {
            fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0)
            ;
          }
          if (cVar16 == '\0') {
            *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
            fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
            pcVar12 = (code *)0xc3340000;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
            fVar7 = -180.0;
            pcVar12 = ((void *)0x8c022d04);
          }
          if (cVar15 != '\0' || fVar7 <= (float)(uint)pcVar12) {
            if (cVar16 == '\0') {
              fVar7 = *(float *)(unsigned)((int)ar6 + 4);
            }
            if (fVar7 == 0.0) {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
            }
            if (cVar16 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0x43340000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x21ac) = 0x53ff1fef43340000;
            }
          }
        }
      }
      goto LAB_8c0a7e8a;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
  }
  if (cVar15 == '\0' && 0.0 < fVar7) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = 90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = 90.0;
      fVar9 = -90.0;
    }
    if (cVar15 != '\0' || fVar9 <= fVar7) {
      ar5 = (code *)(ar4 + 0x21ac);
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)ar5;
      }
      else {
        in_xd0 = *(double *)(unsigned)ar5;
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = 90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = 90.0;
        fVar9 = -90.0;
      }
      if (cVar15 != '\0' || fVar7 <= fVar9) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = 90.0;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)(unsigned)ar5 = -21990236926976.0;
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar7 = 90.0;
          fVar9 = -90.0;
        }
        if (fVar7 == fVar9) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = 90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = 90.0;
      fVar9 = -1.0;
    }
    if (cVar15 == '\0' && fVar7 < fVar9) {
      ar5 = (code *)(ar4 + 0x21ac);
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)ar5;
      }
      else {
        in_xd0 = *(double *)(unsigned)ar5;
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = 90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        fVar7 = 90.0;
        fVar9 = -1.0;
      }
      if (cVar15 != '\0' || fVar9 <= fVar7) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = 90.0;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)(unsigned)ar5 = -0.007812501941316441;
          fVar7 = 90.0;
          fVar9 = -1.0;
        }
        if (fVar7 == fVar9) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
  }
  else {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = -90.0;
      fVar9 = 90.0;
    }
    if (cVar15 == '\0' && fVar7 < fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 + 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) + CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = -90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
        fVar7 = -90.0;
        fVar9 = 90.0;
      }
      if (cVar15 != '\0' || fVar9 <= fVar7) {
        if (cVar16 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x21ac) = 0xc2b40000;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          pcVar12 = (code *)0x42b40000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x21ac) = 0x42b40000c2b40000;
          in_xd0 = *(double *)(unsigned)((int)ar6 + 4);
          fVar7 = 90.0;
          pcVar12 = ((void *)0x8c022d04);
        }
        if (fVar7 == (float)(uint)pcVar12) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
    ar5 = (code *)0x21ac;
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      fVar7 = -90.0;
      fVar9 = 90.0;
    }
    if (cVar15 == '\0' && fVar9 < fVar7) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x21ac);
      }
      if (cVar15 == '\0') {
        fVar7 = fVar7 - 1.0;
      }
      else {
        fVar7 = SUB84(CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7),0);
      }
      if (cVar16 == '\0') {
        *(float *)(unsigned)(ar4 + 0x21ac) = fVar7;
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
        fVar9 = -90.0;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x21ac) = in_xd0;
        fVar7 = -90.0;
        fVar9 = 90.0;
      }
      if (cVar15 != '\0' || fVar7 <= fVar9) {
        ar5 = (code *)(ar4 + 0x21ac);
        if (cVar16 == '\0') {
          *(float *)(unsigned)ar5 = -90.0;
          fVar7 = *(float *)(unsigned)((int)ar6 + 4);
          fVar9 = 90.0;
        }
        else {
          *(double *)(unsigned)ar5 = 21990245315584.0;
          fVar7 = 90.0;
          fVar9 = -6.935439e+32;
        }
        if (fVar7 == fVar9) {
          ar5 = ((void *)0x8c022d04);
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,((void *)0x8c022d04),pdVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c022d04(ar4 + 0x14,ar5,pdVar3,ar7));
        }
      }
    }
  }
LAB_8c0a7e8a:
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c03f3ac(ar4 + 0xb0,ar5,pdVar3,ar7));
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)((int)ar6 + 4);
    fVar9 = 90.0;
  }
  else {
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)((int)ar6 + 4);
      fVar9 = -90.0;
    }
    else {
      fVar7 = -90.0;
      fVar9 = 4.2039e-43;
    }
    if (fVar7 != fVar9) {
      if (cVar16 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      }
      if (fVar7 != 0.0) {
        if (cVar16 == '\0') {
          fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
          fVar9 = 180.0;
        }
        else {
          fVar7 = 180.0;
          fVar9 = 4.2039e-43;
        }
        if (fVar7 != fVar9) {
          return 1;
        }
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      uVar5 = 0;
      uVar4 = 0xffffffff;
      uVar6 = 2;
      (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar5));
      if (cVar16 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0xc0000000;
        return 1;
      }
      *(undefined8 *)(unsigned)(ar4 + 0x94) = 0x55fc1fecc0000000;
      return 1;
    }
  }
  if (cVar16 == '\0') {
    fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
    fVar9 = 90.0;
  }
  else {
    fVar7 = 90.0;
    fVar9 = -90.0;
  }
  if (fVar7 != fVar9) {
    if (cVar16 == '\0') {
      fVar7 = *(float *)(unsigned)(ar4 + 0x21ac);
      fVar9 = -90.0;
    }
    else {
      fVar7 = -90.0;
      fVar9 = 4.2039e-43;
    }
    if (fVar7 != fVar9) {
      return 1;
    }
  }
  *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  uVar5 = 0;
  uVar4 = 0xffffffff;
  uVar6 = 2;
  (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
  (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,uVar4,uVar5));
  if (cVar16 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0xc0000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x94) = 0x60e3d11ac0000000;
  }
  return 1;
}

__asm__(".globl _FUN_8c0a77c8\n.set _FUN_8c0a77c8, _FUN_8c0a77c8_def\n");
