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
undefined4 FUN_8c059fc4_def(int ar4,undefined4 *ar5,int ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c059fc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *ar7_00;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0 = 0;
  double dVar6;
  double dVar7;
  float fVar8;
  uint in_fr3 = 0;
  undefined8 in_dr4 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  fVar5 = F32HI(in_dr0);
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar4 = 1;
  puVar2 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  if (cVar11 == '\0') {
    in_fr15 = 338.375;
  }
  else {
    in_xd14 = 1.63025361168389e-311;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x28c);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c057164(ar4,ar5,ar6,ar7_00));
    if (iVar1 == 0) {
      if (cVar11 == '\0') {
        dVar6 = CONCAT44D(0x43330000,ar5[1]);
      }
      else {
        dVar6 = -7.95546843074564e-251;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2ac) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2ac) = dVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00));
      if ((*(int *)(fr0_ + 0x00000000)) == -1) {
        ar6 = 3;
        (*(int *)(fr0_ + 0x00000000)) = (vsp = ((unsigned long)(fr0_ - 64)), rand_range(ar4,0,3,ar7_00));
      }
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7_00));
      puVar2 = ar5;
      (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x268,ar5,ar6,ar7_00));
      if ((*(int *)(fr0_ + 0x00000000)) == 1) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x43fa0000,*ar5);
        }
        else {
          dVar6 = 1.1551152330547935e+238;
        }
        if (cVar10 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
          (*(int *)(fr0_ + 0x00000000)) = 0;
        }
      }
      if ((*(int *)(fr0_ + 0x00000000)) == 0) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar7 + 8),SUB84(dVar6,0));
        }
        else {
          dVar6 = *(double *)(unsigned)(ar7 + 8);
        }
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(F32HI(dVar6) - in_fr15,SUB84(dVar6,0));
        }
        else {
          dVar6 = dVar6 - CONCAT44D(in_fr14,in_fr15);
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar6) >> 0x20);
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x54));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = dVar6;
          dVar6 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (cVar10 == '\0') {
          fVar5 = F32LO(dVar6) + F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar11 != '\0') {
          fVar5 = 0.0;
        }
        if (cVar10 != '\0' || 0.0 <= fVar5) {
          if (cVar11 == '\0') {
            dVar6 = (double)(ulonglong)in_fr3;
            dVar7 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x48));
          }
          else {
            dVar6 = 0.0;
            dVar7 = 1.23977604087146e-311;
          }
          if (cVar10 == '\0') {
            fVar8 = F32HI(dVar7);
            fVar5 = F32LO(dVar7) * fVar8;
            dVar7 = CONCAT44D(fVar8,fVar5);
            dVar6 = CONCAT44D(0.0 - fVar5,SUB84(dVar6,0));
          }
          else {
            dVar7 = dVar7 * dVar7;
            dVar6 = dVar6 - dVar7;
          }
          fVar5 = F32LO(dVar7);
          if (cVar11 == '\0') {
            *(int *)(unsigned)(ar4 + 0x54) = (int)(D2U(dVar6) >> 0x20);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x54) = dVar6;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00));
        if (cVar11 == '\0') {
          uVar3 = *(undefined4 *)(unsigned)(ar7 + 8);
          dVar6 = CONCAT44D(uVar3,fVar5);
          *(undefined4 *)(unsigned)(ar4 + 0x270) = uVar3;
        }
        else {
          dVar6 = *(double *)(unsigned)(ar7 + 8);
          *(double *)(unsigned)(ar4 + 0x270) = dVar6;
        }
      }
      else if ((*(int *)(fr0_ + 0x00000000)) == 1) {
        if (cVar11 == '\0') {
          in_xd14 = CONCAT44D(in_fr15,0x41a00000);
        }
        if (cVar10 == '\0') {
          in_xd14 = CONCAT44D(F32HI(in_xd14) + F32LO(in_xd14),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x5c) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x5c) = in_xd14;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00));
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x270) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x270) = dVar6;
        }
      }
      else if (((*(int *)(fr0_ + 0x00000000)) == 2) || ((*(int *)(fr0_ + 0x00000000)) == 3)) {
        if (cVar11 == '\0') {
          in_xd14 = CONCAT44D(in_fr15,0x42200000);
        }
        if (cVar10 == '\0') {
          in_xd14 = CONCAT44D(F32HI(in_xd14) + F32LO(in_xd14),
                                     SUB84(in_xd14,0));
        }
        else {
          in_xd14 = in_xd14 + in_xd14;
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(ar4 + 0x54) = (int)((ulonglong)in_xd14 >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x54) = in_xd14;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x248,puVar2,ar6,ar7_00));
        dVar6 = (double)((ulonglong)in_xd14 & 0xffffffff);
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x268) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0x268) = dVar6;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022fc0(ar5,ar4 + 0x268,ar6,ar7_00));
      if (cVar10 == '\0') {
        bVar9 = in_fr15 < F32HI(dVar6);
      }
      else {
        bVar9 = CONCAT44D(in_fr14,in_fr15) < dVar6;
      }
      if (!bVar9) {
        (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7_00));
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      if ((*(int *)(unsigned)(ar4 + 0x290) == 1) && (*(int *)(unsigned)(ar4 + 0x124) != 0x10)) {
        *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
      }
    }
    else if (iVar1 != 2) {
      if (iVar1 == 3) {
        iVar1 = *(int *)(unsigned)(ar4 + 800);
        if (iVar1 == 0) {
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00); });
          if (cVar11 == '\0') {
            fVar8 = 25.0;
          }
          else {
            fVar5 = 25.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c033474(ar4,0x1c,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
            *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 1) {
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00); });
          if (cVar11 == '\0') {
            fVar8 = 78.0;
          }
          else {
            fVar5 = 78.0;
            fVar8 = 8.12753e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c033474(ar4,0x1d,ar5,*(undefined4 *)(unsigned)(ar4 + 0x244)));
            *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
          }
        }
        else if (iVar1 == 2) {
          ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); CAnimBody_GetCurFrame(ar4 + 0xb0,puVar2,ar6,ar7_00); });
          if (cVar11 == '\0') {
            fVar8 = 150.0;
          }
          else {
            fVar5 = 150.0;
            fVar8 = 7.39886e-43;
          }
          if (cVar10 == '\0' && fVar8 < fVar5) {
            if (*(char *)(unsigned)(ar4 + 0x210) == '\x01') {
              (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7_00));
              (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)) + 0xd0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),((undefined1 *)(fr0_ - 0x2c)),1,5));
            }
            *(int *)(unsigned)(ar4 + 800) = *(int *)(unsigned)(ar4 + 800) + 1;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        ar7_00 = (undefined1 *)(unsigned)0x1e;
        ar6 = ar4 + 0x268;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c058024(ar4,ar5,ar6,0x1e));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          uVar4 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5,ar6,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        }
      }
      goto LAB_8c05a4c4;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),ar4 + 0x248,ar6,ar7_00));
    ar7_00 = ((undefined1 *)(fr0_ - 0x3c));
    ar6 = ar4 + 0x54;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c04e0e0(ar4,ar5,ar6,ar7_00));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x218) = 9;
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
      *(undefined4 *)(unsigned)(ar4 + 800) = 0;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030f2c(ar4 + 0x1fc,uVar3,ar6,ar7_00));
    }
  }
LAB_8c05a4c4:
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c059fc4\n.set _FUN_8c059fc4, _FUN_8c059fc4_def\n");
