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
undefined4 FUN_8c0b1ac0_def(double *ar4,double *ar5,code *ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b1ac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 964; for (int i_ = 0; i_ < 964; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *ar5_01;
  code *ar6_00;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  double in_dr0 = 0;
  double dVar12;
  int iVar14;
  float fVar15;
  double dVar13;
  undefined4 in_fr3 = 0;
  double dVar16;
  float in_fr15 = 0;
  double in_xd0 = 0;
  bool bVar17;
  char cVar18;
  char cVar19;
  double *ain0;
  
  cVar19 = '\0';
  cVar18 = '\0';
  uVar5 = 1;
  uVar9 = 1;
  pcVar8 = (code *)ar7;
  ain0 = (double *)(unsigned)ar6;
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_zero(((double *)(fr0_ - 0x34)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_zero(((double *)(fr0_ - 0x44)),uVar5,ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar8));
  if (*(int *)(unsigned)((int)ar4 + 0x314) < 2) {
    puVar6 = (undefined *)(unsigned)0xc;
    iVar10 = 0xc;
  }
  else {
    if (cVar19 == '\0') {
      dVar12 = CONCAT44D(0x43020000,(float)(*(undefined4 *)(unsigned)(unsigned)0x8c286dec));
    }
    else {
      dVar12 = 52776566916096.0;
    }
    if (cVar18 == '\0') {
      fVar11 = F32LO(dVar12) / F32HI(dVar12);
    }
    else {
      fVar11 = SUB84(dVar12 / dVar12,0);
    }
    if (cVar19 == '\0') {
      in_dr0 = CONCAT44D(0x42c80000,fVar11);
    }
    else {
      in_dr0 = 3.91000778394702e-312;
    }
    if (cVar18 == '\0') {
      fVar15 = F32HI(in_dr0);
      fVar11 = F32LO(in_dr0) * fVar15;
      in_dr0 = CONCAT44D(fVar15,fVar11);
      iVar10 = (int)fVar11;
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
      iVar10 = (int)in_dr0;
    }
    (*(unsigned *)(fr0_ - 0x310) = (unsigned)(unsigned long)((double *)(unsigned)(100 - iVar10)));
    if ((int)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x310)) < 0) {
      (*(unsigned *)(fr0_ - 0x310) = (unsigned)(unsigned long)((double *)(unsigned)0x0));
    }
    ar6 = (code *)0x6;
    puVar6 = (undefined *)(unsigned)0x0;
    pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ - 0x310));
    (*(int *)(fr0_ - 0x30c)) = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c032af8(ar4,0,6,((double *)(unsigned long)*(unsigned *)(fr0_ - 0x310))));
    if ((*(int *)(fr0_ - 0x30c)) == 0) {
      iVar10 = 0x13;
    }
    else if (((*(int *)(fr0_ - 0x30c)) == 1) || ((*(int *)(fr0_ - 0x30c)) == 2)) {
      iVar10 = 0x14;
    }
    else if ((*(int *)(fr0_ - 0x30c)) == 3) {
      iVar10 = 0xf;
    }
    else {
      puVar6 = (undefined *)(unsigned)0xe;
      iVar10 = 0xe;
    }
  }
  iVar2 = *(int *)(unsigned)((int)ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c034148(ar4 + 0x16,iVar10,ar6,pcVar8));
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_8c0b30ba;
      (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,iVar10,ar6,pcVar8));
    }
    if (cVar19 == '\0') {
      *(int *)(unsigned)(ar4 + 0x14) = 0x3d4ccccd;
    }
    else {
      ar4[0x14] = -8.625516725343968e-251;
    }
    (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c03c314(ar4,iVar10,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), vec3_clear((code *)((int)ar4 + 0x54),(code *)((int)ar4 + 0x54),ar6,pcVar8));
    *(int *)(unsigned)((int)ar4 + 300) = *(int *)(unsigned)((int)ar4 + 300) + 1;
    goto LAB_8c0b30ba;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),ar4 + 0x10,ar6,pcVar8));
      iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c034148(ar4 + 0x16,9,ar6,pcVar8));
      if ((iVar10 != 1) && (iVar10 != 2)) {
        (*(undefined4 *)(fr0_ - 0x314)) = 1;
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x34)),0xffffffff,ar6,pcVar8));
        return (*(undefined4 *)(fr0_ - 0x314));
      }
      if (cVar19 == '\0') {
        *(int *)(unsigned)((int)ar4 + 0x24) = 0x41700000;
      }
      else {
        *(undefined8 *)(unsigned)((int)ar4 + 0x24) = 0x8c13babc41700000;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c023bf4((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13babc),ar6,pcVar8));
      *(int *)(unsigned)(ar4 + 100) = 0;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c032518(ar4,ar5,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2e4),((undefined1 *)(fr0_ - 0x244)),ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x244)),0xffffffff,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      if (cVar19 == '\0') {
        dVar12 = CONCAT44D(0x43fa0000,*(int *)(unsigned)(ar4 + 0x5d));
      }
      else {
        in_xd0 = ar4[0x5d];
        dVar12 = 1.1709360855895245e+17;
      }
      if (cVar18 == '\0') {
        fVar11 = F32LO(dVar12) + F32HI(dVar12);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar19 == '\0') {
        *(float *)(unsigned)(ar4 + 0x5d) = fVar11;
      }
      else {
        ar4[0x5d] = in_xd0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x254))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_sub((code *)((int)ar4 + 0x2e4),ar5,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))); });
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2d4),((undefined1 *)(fr0_ - 0x254)),ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x254)),0xffffffff,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      uVar5 = 0x8c286dd4;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031b68(ar4,0x8c286dd4,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031748(ar4,uVar5,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      pcVar8 = (code *)((int)ar4 + 0x2c);
      if (cVar19 == '\0') {
        *(int *)(unsigned)pcVar8 = 0;
      }
      else {
        *(ulonglong *)(unsigned)pcVar8 = (ulonglong)(uint)fVar11;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031c64(ar4,pcVar8,ar7,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      *(int *)(unsigned)(ar4 + 8) = 3;
      *(int *)(unsigned)((int)ar4 + 0x44) = 0;
      *(int *)(unsigned)(ar4 + 99) = 0;
      *(int *)(unsigned)((int)ar4 + 300) = *(int *)(unsigned)((int)ar4 + 300) + 1;
      ar6 = (code *)ar7;
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    else if (iVar2 == 3) {
      if (cVar19 == '\0') {
        iVar2 = SUB84(in_dr0,0);
        iVar14 = 0x3fc00000;
      }
      else {
        iVar2 = 0x3fc00000;
        iVar14 = 0x164;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x264)),puVar6,ar6,pcVar8));
      puVar7 = ((undefined1 *)(fr0_ - 0x264));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x274))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add((code *)((int)ar4 + 0x2d4),puVar7,ar6,pcVar8); });
      iVar4 = (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length(((undefined1 *)(fr0_ - 0x274)),puVar7,ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length_sq((code *)((int)ar4 + 0x2d4),(code *)((int)ar4 + 0x2d4),ar6,pcVar8));
      (*(int *)(fr0_ - 0x360)) = iVar14;
      (*(int *)(fr0_ - 0x320)) = iVar2;
      iVar1 = iVar14;
      if (cVar19 == '\0') {
        (*(int *)(fr0_ - 0x360)) = iVar4;
        (*(int *)(fr0_ - 0x320)) = iVar14;
        iVar1 = (*(int *)(fr0_ - 0x31c));
      }
      (*(int *)(fr0_ - 0x31c)) = iVar1;
      dVar12 = CONCAT44D(iVar14,iVar2);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x284))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((*(int *)(fr0_ - 0x360)),&(*(int *)(fr0_ - 0x320)),ar6,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2d4),((undefined1 *)(fr0_ - 0x284)),ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x284)),0xffffffff,ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x274)),0xffffffff,ar6,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x264)),0xffffffff,ar6,pcVar8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x294))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add((code *)((int)ar4 + 0x2d4),ar5,ar6,pcVar8); });
      pcVar8 = (code *)((double *)(fr0_ - 0x34));
      ar6_00 = ((void *)0x8c023a14);
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(pcVar8,((undefined1 *)(fr0_ - 0x294)),((void *)0x8c023a14),pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x294)),0xffffffff,ar6_00,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x2e4),((double *)(fr0_ - 0x34)),ar6_00,pcVar8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2a4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13bac0),ar6_00,pcVar8); });
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x10,((undefined1 *)(fr0_ - 0x2a4)),ar6_00,pcVar8));
      (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2a4)),0xffffffff,ar6_00,pcVar8));
      iVar2 = *(int *)(unsigned)(ar4 + 100);
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length_sq((code *)((int)ar4 + 0x2d4),((void *)0x8c022e78),ar6_00,pcVar8));
        iVar10 = (int)(D2U(dVar12) >> 0x20);
        (*(int *)(fr0_ - 0x324)) = iVar10;
        if (cVar19 != '\0') {
          (*(int *)(fr0_ - 0x368)) = SUB84(dVar12,0);
          (*(int *)(fr0_ - 0x324)) = (*(int *)(fr0_ - 0x368));
          (*(int *)(fr0_ - 0x320)) = iVar10;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2b4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),&(*(int *)(fr0_ - 0x324)),ar6_00,pcVar8); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0x2b4)),ar6_00,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(((double *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x2c4)),ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c4)),0xffffffff,ar6_00,pcVar8));
        uVar5 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2b4)),0xffffffff,ar6_00,pcVar8));
        ar6_00 = (code *)(ar4 + 5);
        if (cVar19 == '\0') {
          dVar13 = CONCAT44D(0x3f7d70a4,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar13 = 3.73997530744218e-312;
        }
        if (cVar18 == '\0') {
          fVar11 = F32HI(dVar13);
          dVar13 = CONCAT44D(fVar11,F32LO(dVar13) * fVar11);
        }
        else {
          dVar13 = dVar13 * dVar13;
        }
        if (cVar19 == '\0') {
          *(int *)(unsigned)ar6_00 = SUB84(dVar13,0);
        }
        else {
          *(double *)(unsigned)ar6_00 = in_xd0;
        }
        pcVar8 = (code *)ar4;
        (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,uVar5,ar6_00,ar4));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 964)); CAnimBody_GetCurFrame(ar4 + 0x16,uVar5,ar6_00,pcVar8); });
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x41a00000,SUB84(dVar13,0));
          in_fr15 = F32HI(dVar13);
        }
        else {
          dVar12 = 1.6981406014198e-311;
        }
        if (in_fr15 == F32HI(dVar12)) {
          *(int *)(unsigned)((int)ar4 + 0x44) = 1;
          ar6_00 = (code *)0x320;
          *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
          if (cVar19 == '\0') {
            dVar12 = CONCAT44D(0x3eb33333,SUB84(dVar12,0));
            *(int *)(unsigned)(ar4 + 0x14) = 0x3eb33333;
          }
          else {
            dVar12 = -8.625516761765798e-251;
            ar4[0x14] = -8.625516761765798e-251;
          }
          *(int *)(unsigned)((int)ar4 + 0xa4) = 1;
          (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c03c314(ar4,((void *)0x8c03c314),800,pcVar8));
          if (*(int *)(unsigned)((int)ar4 + 0x314) == 0) {
            *(int *)(unsigned)(ar4 + 0x48) = 1;
            ar6_00 = (code *)ar5;
            (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
            pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
          }
        }
      }
      else if (iVar2 == 1) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3e19999a,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 32.000007402896884;
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar11;
          dVar12 = CONCAT44D(0x40400000,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          dVar12 = 3.74003830419144e-312;
        }
        if (cVar18 == '\0' && SUB84(dVar12,0) < F32HI(dVar12)) {
          if (cVar19 == '\0') {
            dVar12 = CONCAT44D(0x40400000,SUB84(dVar12,0));
            *(int *)(unsigned)(ar4 + 5) = 0x40400000;
          }
          else {
            dVar12 = 3.74003830419144e-312;
            ar4[5] = 3.74003830419144e-312;
          }
        }
        iVar2 = CAnimBody_AdvanceFrame_wrapper
                          (ar4 + 0x16,((void *)0x8c026858),ar6_00,pcVar8);
        if (iVar2 == 1) {
          *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
          pcVar8 = (code *)0x0;
          ar6_00 = (code *)0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,iVar10,0xffffffff,0));
        }
      }
      else if (iVar2 == 2) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3e19999a,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 32.000007402896884;
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar11;
          dVar13 = CONCAT44D(0x40400000,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          dVar13 = 1099511890944.0;
        }
        if (cVar18 == '\0' && SUB84(dVar13,0) < F32HI(dVar13)) {
          if (cVar19 == '\0') {
            dVar13 = CONCAT44D(0x40400000,SUB84(dVar13,0));
            *(int *)(unsigned)(ar4 + 5) = 0x40400000;
          }
          else {
            dVar13 = 1099511890944.0;
            ar4[5] = 1099511890944.0;
          }
        }
        if (iVar10 == 0xc) {
          (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,0xb0,ar6_00,pcVar8));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,0xb0,ar6_00,pcVar8));
          ar6_00 = (code *)0x1e;
          iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), rand_range(ar4,0,0x1e,pcVar8));
          if (iVar10 == 0) {
            *(int *)(unsigned)(ar4 + 0x48) = 1;
            ar6_00 = (code *)ar5;
            pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
            (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
          }
        }
        (vsp = ((unsigned long)(fr0_ - 964)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,ar6_00,pcVar8));
        if (cVar19 == '\0') {
          dVar16 = CONCAT44D(*(int *)(unsigned)((int)ar5 + 4),in_fr3);
          dVar12 = CONCAT44D(0x42100000,(int)(D2U(dVar13) >> 0x20));
        }
        else {
          dVar16 = *(double *)(unsigned)((int)ar5 + 4);
          dVar12 = 1.52838456460023e-311;
          in_xd0 = dVar13;
        }
        if (cVar18 == '\0') {
          fVar15 = F32HI(dVar12);
          fVar11 = F32LO(dVar12) + fVar15;
          dVar12 = CONCAT44D(fVar15,fVar11);
          bVar17 = fVar11 < F32HI(dVar16);
        }
        else {
          dVar12 = dVar12 + dVar12;
          fVar11 = F32LO(dVar12);
          bVar17 = dVar12 < dVar16;
        }
        if (!bVar17) {
          if (cVar19 == '\0') {
            *(int *)(unsigned)(ar4 + 0x5a) = 0x3f800000;
            dVar12 = CONCAT44D(0x42f00000,fVar11);
            *(int *)(unsigned)((int)ar4 + 0x2cc) = 0x42f00000;
          }
          else {
            ar4[0x5a] = CONCAT44D(0x3f800000,fVar11);
            dVar12 = 5.18321821016064e-312;
            *(undefined8 *)(unsigned)((int)ar4 + 0x2cc) = 0xf442f00000;
          }
          ar5_01 = ((void *)0x8c0230f0);
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2d4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0(ar4 + 0x10,((void *)0x8c0230f0),ar6_00,pcVar8); });
          uVar5 = (vsp = ((unsigned long)(fr0_ - 964)), Vec3_length(((undefined1 *)(fr0_ - 0x2d4)),ar5_01,ar6_00,pcVar8));
          (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 700),uVar5,ar6_00,pcVar8));
          (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2d4)),0xffffffff,ar6_00,pcVar8));
          *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
        }
      }
      else if (iVar2 == 3) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3e19999a,*(int *)(unsigned)(ar4 + 5));
        }
        else {
          in_xd0 = ar4[5];
          dVar12 = 21990236625305.6;
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        if (cVar19 == '\0') {
          *(float *)(unsigned)(ar4 + 5) = fVar11;
          fVar11 = *(float *)(unsigned)(ar4 + 5);
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
        }
        if (cVar18 != '\0' || fVar11 <= 0.0) {
          if (cVar19 == '\0') {
            *(int *)(unsigned)(ar4 + 5) = 0;
          }
          else {
            ar4[5] = (double)(ulonglong)(uint)fVar11;
          }
        }
        (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,0xb0,ar6_00,pcVar8));
        if (cVar19 == '\0') {
          fVar11 = *(float *)(unsigned)(ar4 + 0x5a);
        }
        else {
          in_xd0 = ar4[0x5a];
        }
        if (cVar18 == '\0') {
          fVar11 = fVar11 + 1.0;
        }
        else {
          fVar11 = SUB84(CONCAT44D(0x3f800000,fVar11) + CONCAT44D(0x3f800000,fVar11),0
                        );
        }
        (*(undefined8 *)(fr0_ - 0x3c0)) = in_xd0;
        if (cVar19 == '\0') {
          (*(undefined8 *)(fr0_ - 0x3c0)) = CONCAT44D(ar4,fVar11);
        }
        if (cVar19 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c0))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x3c0));
          dVar12 = CONCAT44D(*(int *)(unsigned)((int)ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x3c0)));
          (*(undefined8 *)(fr0_ - 0x3c0)) = in_xd0;
        }
        else {
          *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x3c0))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x3c0));
          dVar12 = *(double *)(unsigned)((int)ar4 + 0x2cc);
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) / F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 / dVar12,0);
        }
        dVar12 = (*(undefined8 *)(fr0_ - 0x3c0));
        if (cVar19 == '\0') {
          (*(undefined8 *)(fr0_ - 0x308)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x308))+4)),fVar11);
          dVar12 = (*(undefined8 *)(fr0_ - 0x308));
        }
        (*(undefined8 *)(fr0_ - 0x308)) = dVar12;
        if (cVar18 == '\0') {
          dVar13 = CONCAT44D(1.0 - fVar11,fVar11);
        }
        else {
          dVar13 = CONCAT44D(0x3f800000,fVar11) - CONCAT44D(0x3f800000,fVar11);
        }
        iVar10 = (int)(D2U(dVar13) >> 0x20);
        (*(int *)(fr0_ - 0x328)) = iVar10;
        if (cVar19 != '\0') {
          (*(int *)(fr0_ - 0x328)) = SUB84(dVar13,0);
          (*(int *)(fr0_ - 0x324)) = iVar10;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2e4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(ar4 + 0x10,&(*(int *)(fr0_ - 0x328)),ar6_00,pcVar8); });
        ar6_00 = (code *)((double *)(fr0_ - 0x2f4));
        ({ unsigned long t0_ = (unsigned long)(ar6_00); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 700),&(*(undefined8 *)(fr0_ - 0x308)),ar6_00,pcVar8); });
        ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x308)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x2e4)),((double *)(fr0_ - 0x2f4)),ar6_00,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x10,(int)&(*(undefined8 *)(fr0_ - 0x308)) + 4,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x308)) + 4,0xffffffff,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x2f4)),0xffffffff,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2e4)),0xffffffff,ar6_00,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c022dac(ar4 + 0x10,(code *)((int)ar4 + 700),ar6_00,pcVar8));
        in_xd0 = dVar13;
        if (cVar19 == '\0') {
          dVar13 = (double)(D2U(dVar13) >> 0x20);
          in_xd0 = (*(undefined8 *)(fr0_ - 0x3c0));
        }
        dVar12 = (double)(D2U(dVar13) & 0xffffffff);
        if (cVar18 != '\0' || SUB84(dVar13,0) <= 0.0) {
          *(int *)(unsigned)(ar4 + 8) = 5;
          *(int *)(unsigned)((int)ar4 + 300) = 0;
          uVar9 = 0;
          (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031748(ar4,0,ar6_00,pcVar8));
        }
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c022fc0(ar5,((double *)(fr0_ - 0x34)),ar6_00,pcVar8));
      if (cVar19 == '\0') {
        dVar13 = CONCAT44D(*(int *)(unsigned)(ar4 + 5),(int)(D2U(dVar12) >> 0x20));
        dVar12 = in_xd0;
      }
      else {
        dVar13 = ar4[5];
      }
      if (cVar18 == '\0') {
        fVar11 = F32LO(dVar13) / F32HI(dVar13);
      }
      else {
        fVar11 = SUB84(dVar13 / dVar13,0);
      }
      if (cVar19 == '\0') {
        *(float *)(unsigned)(ar4 + 6) = fVar11;
      }
      else {
        ar4[6] = dVar12;
      }
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c031764(ar4,((double *)(fr0_ - 0x34)),ar5,pcVar8));
      ar6 = (code *)ar5;
    }
    goto LAB_8c0b30ba;
  }
  if (*(int *)(unsigned)((int)ar4 + 0x314) < 2) {
    iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,puVar6,ar6,pcVar8));
    if (iVar10 == 7) {
      pcVar8 = (code *)0x12c;
      *(int *)(unsigned)((int)ar4 + 300) = *(int *)(unsigned)((int)ar4 + 300) + 1;
      ar6 = (code *)ar4;
    }
    goto LAB_8c0b30ba;
  }
  (vsp = ((unsigned long)(fr0_ - 964)), vec3_clear(((undefined1 *)(fr0_ - 0x54)),puVar6,ar6,pcVar8));
  iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), get_field_1c_026dd8(ar4 + 0x16,puVar6,ar6,pcVar8));
  if (((iVar10 == 0x12) || (iVar10 == 0x13)) || (iVar10 == 0x14)) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c026db0(ar4,puVar6,ar6,pcVar8));
    uVar5 = ar5_00;
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c03c0f0(ar4 + 0x16,ar5_00,ar5_00,pcVar8));
    piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 964)), deref_u32(ar4_00,ar5_00,uVar5,pcVar8));
    iVar2 = piVar3[1];
    *(int *)(unsigned)((int)ar4 + 0xb4) = *piVar3;
    *(int *)(unsigned)(ar4 + 0x17) = iVar2;
    *(int *)(unsigned)((int)ar4 + 0xbc) = piVar3[2];
    *(unsigned *)(unsigned)((int)ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13ba4c) + (iVar10 + -0x12) * 0x18;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 964)); CAnimBody_GetCurFrame(ar4 + 0x16,0xb0,uVar5,pcVar8); });
    pcVar8 = ((void *)0x8c034384);
    (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c034384(ar4 + 0x16,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 0xb4)),uVar5,((void *)0x8c034384)));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(((double *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x64)),uVar5,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,uVar5,pcVar8));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_sub(((double *)(fr0_ - 0x44)),(code *)((int)ar4 + 0x54),uVar5,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x74)),uVar5,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,uVar5,pcVar8));
    ar6 = (code *)((double *)(fr0_ - 0x44));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x54),ar6,ar6,pcVar8));
    puVar6 = ((undefined1 *)(unsigned)0x8c13ba98);
    (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c023bf4(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c13ba98),ar6,pcVar8));
  }
  else {
    if (cVar19 == '\0') {
      in_dr0 = CONCAT44D(0x3f666666,*(int *)(unsigned)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      in_dr0 = 3.73996784729797e-312;
    }
    if (cVar18 == '\0') {
      fVar11 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar11,F32LO(in_dr0) * fVar11);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar19 == '\0') {
      *(int *)(unsigned)(ar4 + 5) = SUB84(in_dr0,0);
    }
    else {
      ar4[5] = in_xd0;
    }
  }
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 964)); CAnimBody_GetCurFrame(ar4 + 0x16,puVar6,ar6,pcVar8); });
  if (cVar18 == '\0') {
    iVar2 = (int)F32HI(in_dr0);
  }
  else {
    iVar2 = (int)in_dr0;
  }
  if (iVar10 == 0x12) {
    if ((iVar2 == 0x1e) || (iVar2 == 0x54)) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ar6 = (code *)ar5;
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 18.0;
    }
    else {
      fVar11 = 18.0;
      fVar15 = 23.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 23.0;
      }
      else {
        fVar11 = 23.0;
        fVar15 = 1.24996e-42;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x40c00000,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+0)));
        }
        else {
          dVar12 = -1.4906861505776066e+237;
          in_xd0 = (*(double *)(fr0_ - 0x4c));
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) - F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 - dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar19 == '\0') {
          (*(double *)(fr0_ - 0x4c)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+4)),fVar11);
          dVar12 = (*(double *)(fr0_ - 0x4c));
        }
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 39.0;
    }
    else {
      fVar11 = 39.0;
      fVar15 = 63.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 63.0;
      }
      else {
        fVar11 = 63.0;
        fVar15 = 1.24996e-42;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        if (cVar19 == '\0') {
          dVar12 = CONCAT44D(0x3f3851ec,(*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+0)));
        }
        else {
          dVar12 = 1.0192310304781727e-72;
          in_xd0 = (*(double *)(fr0_ - 0x4c));
        }
        if (cVar18 == '\0') {
          fVar11 = F32LO(dVar12) + F32HI(dVar12);
        }
        else {
          fVar11 = SUB84(dVar12 + dVar12,0);
        }
        dVar12 = in_xd0;
        if (cVar19 == '\0') {
          (*(double *)(fr0_ - 0x4c)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x4c))+4)),fVar11);
          dVar12 = (*(double *)(fr0_ - 0x4c));
        }
        goto LAB_8c0b262a;
      }
    }
    puVar6 = ((undefined1 *)(unsigned)0x8c13ba9c);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13ba9c),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),puVar6,ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c13baa0),ar6,pcVar8); });
    puVar7 = ((undefined1 *)(fr0_ - 0xa4));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x84)),puVar7,ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0xb4)),puVar7,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0xc4)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6,pcVar8));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
  else if (iVar10 == 0x13) {
    if ((iVar2 == 0x26) || (iVar2 == 0x3c)) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    fVar11 = F32LO(in_dr0);
    ar6 = (code *)((double *)(fr0_ - 0xd4));
    ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13baa4),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),((void *)0x8c0230f0),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xe4)),((undefined1 *)(unsigned)0x8c13baa8),ar6,pcVar8); });
    puVar7 = ((undefined1 *)(fr0_ - 0xf4));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((double *)(fr0_ - 0xd4)),puVar7,ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0x104)),puVar7,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x114)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0xd4)),0xffffffff,ar6,pcVar8));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
  else if (iVar10 == 0x14) {
    if ((iVar2 == 0x10) || (iVar2 == 0x47)) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      puVar6 = (undefined *)(unsigned)0xb;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ar6 = (code *)ar5;
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 35.0;
    }
    else {
      fVar11 = 35.0;
      fVar15 = 60.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 60.0;
      }
      else {
        fVar11 = 60.0;
        fVar15 = 5.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x120)),puVar6,ar6,pcVar8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x120)),ar6,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x130)),ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,pcVar8));
        dVar12 = (*(double *)(fr0_ - 0x4c));
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar19 == '\0') {
      fVar15 = 72.0;
    }
    else {
      fVar11 = 72.0;
      fVar15 = 100.0;
    }
    if (cVar18 == '\0' && fVar15 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 100.0;
      }
      else {
        fVar11 = 100.0;
        fVar15 = 5.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x13c)),puVar6,ar6,pcVar8));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x14c))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x13c)),ar6,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x14c)),ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x14c)),0xffffffff,ar6,pcVar8));
        (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x13c)),0xffffffff,ar6,pcVar8));
        dVar12 = (*(double *)(fr0_ - 0x4c));
        goto LAB_8c0b262a;
      }
    }
    fVar11 = (float)iVar2;
    if (cVar18 == '\0' && 0.0 < fVar11) {
      fVar11 = (float)iVar2;
      if (cVar19 == '\0') {
        fVar15 = 18.0;
      }
      else {
        fVar11 = 18.0;
        fVar15 = -2.0;
      }
      if (cVar18 == '\0' && fVar11 < fVar15) {
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x158)),((void *)0x8c023d68),ar6,pcVar8));
        ({ unsigned long t0_ = (unsigned long)(((double *)(fr0_ - 0x168))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x158)),ar6,pcVar8); });
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((double *)(fr0_ - 0x168)),ar6,pcVar8));
        uVar5 = 0xffffffff;
        ar6 = (code *)((double *)(fr0_ - 0x168));
        (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(ar6,0xffffffff,ar6,0xffffffff));
        (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x158)),0xffffffff,ar6,uVar5));
        dVar12 = (*(double *)(fr0_ - 0x4c));
        goto LAB_8c0b262a;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13baac),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x188))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x188)),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x198))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x188)),((undefined1 *)(unsigned)0x8c13bab0),ar6,pcVar8); });
    puVar7 = ((undefined1 *)(fr0_ - 0x198));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x178)),puVar7,ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0x1a8)),puVar7,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x1b8)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x198)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x188)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,ar6,((void *)0x8c022cb0)));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
  else {
    iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), rand_range(ar4,0,0x1e,pcVar8));
    fVar11 = F32LO(in_dr0);
    if (iVar10 == 0) {
      *(int *)(unsigned)(ar4 + 0x48) = 1;
      (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c033474(ar4,0xb,ar5,((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      pcVar8 = (code *)((double *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    }
    ar6 = ((void *)0x8c023b8c);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale((code *)((int)ar4 + 0x14),((undefined1 *)(unsigned)0x8c13bab4),((void *)0x8c023b8c),pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c0230f0((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x1d8)),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1d8)),((undefined1 *)(unsigned)0x8c13bab8),ar6,pcVar8); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f8))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x1c8)),((undefined1 *)(fr0_ - 0x1e8)),ar6,pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_normalize(((undefined1 *)(fr0_ - 0x1f8)),((void *)0x8c022ec0),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign((code *)((int)ar4 + 0x14),((undefined1 *)(fr0_ - 0x208)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x208)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d8)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c8)),0xffffffff,ar6,pcVar8));
    dVar12 = (*(double *)(fr0_ - 0x4c));
  }
LAB_8c0b262a:
  (*(double *)(fr0_ - 0x4c)) = dVar12;
  pcVar8 = (code *)((double *)(fr0_ - 0x218));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_ctor_xyz(pcVar8,((void *)0x8c022ce8),ar6,pcVar8));
  (*(int *)(fr0_ - 0x31c)) = (vsp = ((unsigned long)(fr0_ - 964)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x54)),((double *)(fr0_ - 0x218)),ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x218)),0xffffffff,ar6,pcVar8));
  if ((*(int *)(fr0_ - 0x31c)) != 0) {
    (vsp = ((unsigned long)(fr0_ - 964)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x224)),ain0,ar6,pcVar8));
    ar6 = ((void *)0x8c023484);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x234))); *(unsigned *)((((unsigned long)(fr0_ - 964)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 964)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x224)),((void *)0x8c023484),pcVar8); });
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x67,((undefined1 *)(fr0_ - 0x234)),ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x234)),0xffffffff,ar6,pcVar8));
    (vsp = ((unsigned long)(fr0_ - 964)), object_dtor_delete(((undefined1 *)(fr0_ - 0x224)),0xffffffff,ar6,pcVar8));
  }
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_assign(ar4 + 0x10,(code *)((int)ar4 + 0x14),ar6,pcVar8));
  iVar10 = (vsp = ((unsigned long)(fr0_ - 964)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0x16,ar4 + 0x16,ar6,pcVar8));
  if (iVar10 == 1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c286dec) = (*(undefined4 *)(unsigned)(unsigned)0x8c286dec) + 1;
    uVar9 = 0;
    *(int *)(unsigned)((int)ar4 + 300) = 0;
    if (cVar19 == '\0') {
      *(int *)(unsigned)((int)ar4 + 0x334) = 0;
    }
    else {
      *(ulonglong *)(unsigned)((int)ar4 + 0x334) = (ulonglong)(uint)fVar11;
    }
  }
LAB_8c0b30ba:
  (*(undefined4 *)(fr0_ - 0x318)) = uVar9;
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar8));
  (vsp = ((unsigned long)(fr0_ - 964)), Vec3_dtor(((double *)(fr0_ - 0x34)),0xffffffff,ar6,pcVar8));
  return (*(undefined4 *)(fr0_ - 0x318));
}

__asm__(".globl _FUN_8c0b1ac0\n.set _FUN_8c0b1ac0, _FUN_8c0b1ac0_def\n");
