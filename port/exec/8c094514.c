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
int FUN_8c094514_def(int ar4,code *ar5,code *ar6,code *ar7)

{
  ring[rp++ & 255] = "FUN_8c094514";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 704; for (int i_ = 0; i_ < 704; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  undefined4 ar5_00;
  code *pcVar3;
  int *ar5_01;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *ar6_00;
  code *pcVar6;
  int ar5_02;
  float fVar7;
  double in_dr0 = 0;
  float fVar10;
  double dVar8;
  double dVar9;
  undefined4 in_fr3 = 0;
  double in_xd0 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  pcVar3 = ar5;
  pcVar6 = ar7;
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),pcVar3,ar6,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x54)),pcVar3,ar6,pcVar6));
  ar5_02 = 1;
  ar5_01 = (int *)(unsigned)(ar4 + 0x40);
  iVar2 = *ar5_01;
  if (iVar2 == 0) {
LAB_8c09458c:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c034148(ar4 + 0xb0,0,ar6,pcVar6));
    if ((iVar2 != 1) && (iVar2 != 2)) {
      (*(undefined4 *)(fr0_ - 0x2ac)) = 1;
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,((void *)0x8c022cb0),pcVar6));
      return (*(undefined4 *)(fr0_ - 0x2ac));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
    if (cVar13 == '\0') {
      uVar5 = SUB84(in_dr0,0);
      pcVar3 = (code *)0x40000000;
    }
    else {
      uVar5 = 0x40000000;
      pcVar3 = ((void *)0x8c031ce8);
    }
    ar6_00 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c031ce8(ar4,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x264,((undefined1 *)(fr0_ - 0x64)),ar6_00,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,pcVar6));
    ar6 = ar7;
    pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032788(ar4,ar4 + 0x264,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x264,ar5_00,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x264,ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x41100000,pcVar3);
    }
    else {
      in_xd0 = CONCAT44D(pcVar3,uVar5);
      dVar8 = 1.46047241024329e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = F32HI(dVar8);
      dVar8 = CONCAT44D(fVar7,F32LO(dVar8) + fVar7);
    }
    else {
      dVar8 = dVar8 + dVar8;
    }
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x268) = SUB84(dVar8,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x268) = in_xd0;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x74)),ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar6));
    fVar7 = F32HI(dVar8);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2a8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2a8))+4)),fVar7);
      pcVar3 = (code *)0x43960000;
      dVar8 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      pcVar3 = (code *)0x2a0;
      (*(undefined8 *)(fr0_ - 0x2a8)) = dVar8;
    }
    if (cVar12 == '\0' && (float)(uint)pcVar3 < fVar7) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,pcVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(unsigned)0x8c13a770),ar6,pcVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x94)),&(*(undefined8 *)(fr0_ - 0x2a8)),ar6,pcVar6); });
      pcVar3 = ar7;
      pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032518(ar4,ar5,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xb4)),ar5,pcVar3,pcVar6); });
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2a8)),0x43960000);
      }
      else {
        dVar8 = 1.4265413944775e-311;
        dVar9 = (*(undefined8 *)(fr0_ - 0x2a8));
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) / F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(1.0 - fVar7,fVar7);
      }
      else {
        dVar9 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
      }
      dVar1 = dVar9;
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),(int)(D2U(dVar9) >> 0x20));
        dVar1 = (*(undefined8 *)(fr0_ - 0x2b4));
      }
      (*(undefined8 *)(fr0_ - 0x2b4)) = dVar1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xc4)),&(*(undefined8 *)(fr0_ - 0x2b4)),pcVar3,pcVar6); });
      fVar7 = F32LO(dVar9);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(fr0_ - 0xd4)),pcVar3,pcVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xe4)),((undefined1 *)(unsigned)0x8c13a774),pcVar3,pcVar6); });
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0xf4)),pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,pcVar3,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c023aa0(ar4 + 0x24c,ar5,((void *)0x8c023aa0),pcVar6));
      if (cVar13 == '\0') {
        pcVar3 = (code *)0x40000000;
      }
      else {
        fVar7 = 2.0;
        pcVar3 = ((void *)0x8c031ce8);
      }
      ar6 = ar7;
      pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,pcVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,pcVar6));
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x34)),ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),pcVar3);
      in_xd0 = dVar8;
    }
    else {
      in_xd0 = CONCAT44D(pcVar3,fVar7);
      dVar9 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar7;
      in_dr0 = CONCAT44D(0x40a00000,fVar7);
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c031c64(ar4,ar4 + 0x24,ar6,pcVar6));
    ar5_01 = (int *)(unsigned)0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c031b68(ar4,0x8c2846e8,ar6,pcVar6));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar2 != 3) {
    if (iVar2 != 5) goto LAB_8c0954c6;
    goto LAB_8c09458c;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x260);
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,pcVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x104)),ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar6));
    fVar7 = F32HI(in_dr0);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2a8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2a8))+4)),fVar7);
      fVar10 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      fVar10 = 8.23963e-43;
      (*(undefined8 *)(fr0_ - 0x2a8)) = in_dr0;
    }
    if (cVar12 != '\0' || fVar7 <= fVar10) {
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,pcVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,pcVar6));
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022fc0(ar4 + 0x264,ar5,ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x43960000,fVar10);
    }
    else {
      in_dr0 = CONCAT44D(fVar10,fVar7);
      dVar8 = 1.12097400057851e-311;
    }
    if (cVar12 != '\0' || SUB84(dVar8,0) <= F32HI(dVar8)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x114))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
      (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x114)),ar6,pcVar6));
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x41200000,(int)(D2U(dVar8) >> 0x20));
      }
      else {
        dVar9 = -7.932637925129825e-251;
        in_dr0 = dVar8;
      }
      dVar8 = dVar9;
      (*(undefined8 *)(fr0_ - 0x2bc)) = (double)(ulonglong)
                           CONCAT14(cVar12 != '\0' ||
                                    SUB84(dVar8,0) <= F32HI(dVar8),
                                    (undefined4)(*(undefined8 *)(fr0_ - 0x2bc)));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,pcVar6));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2bc))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6));
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x274) = (int)(D2U(dVar8) >> 0x20);
          dVar8 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x274));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x274) = dVar8;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x274);
          dVar8 = 1.35011982200165e-311;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) * F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar7);
        }
        else {
          dVar8 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(unsigned)(ar4 + 0x278) = fVar7;
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x278),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar8 = *(double *)(unsigned)(ar4 + 0x278);
        }
        if (cVar12 == '\0') {
          fVar7 = F32HI(dVar8);
          dVar8 = CONCAT44D(fVar7,F32LO(dVar8) / fVar7);
        }
        else {
          dVar8 = dVar8 / dVar8;
        }
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = SUB84(dVar8,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      }
    }
    pcVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x124))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_normalize(((undefined1 *)(fr0_ - 0x124)),pcVar3,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x134)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x124)),0xffffffff,ar6,pcVar6));
    pcVar6 = ((void *)0x8c0230f0);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x144))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6,((void *)0x8c0230f0)); });
    puVar4 = ((undefined1 *)(fr0_ - 0x154));
    ({ unsigned long t0_ = (unsigned long)(puVar4); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),uVar5,puVar4,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x144)),((undefined1 *)(fr0_ - 0x154)),puVar4,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x154)),0xffffffff,puVar4,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x144)),0xffffffff,puVar4,pcVar6));
    puVar4 = ((undefined1 *)(fr0_ - 0x34));
    ar6 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c097ba4(ar4,puVar4,ar5,pcVar6));
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x164))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,pcVar6); });
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x164)),ar6,pcVar6));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x164)),0xffffffff,ar6,pcVar6));
      (vsp = ((unsigned long)(fr0_ - 704)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x54)),uVar5,ar6,pcVar6));
      fVar7 = F32HI(dVar8);
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2a8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2a8))+4)),fVar7);
        fVar10 = 300.0;
      }
      else {
        fVar7 = 300.0;
        fVar10 = 7.39886e-43;
        (*(undefined8 *)(fr0_ - 0x2a8)) = dVar8;
      }
      if (cVar12 == '\0' && fVar10 < fVar7) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x174))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x184))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x174)),((undefined1 *)(unsigned)0x8c13a778),ar6,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x194))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x184)),&(*(undefined8 *)(fr0_ - 0x2a8)),((undefined1 *)(fr0_ - 0x194)),pcVar6); });
        pcVar3 = ar7;
        pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032518(ar4,ar5,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x1a4)),ar5,pcVar3,pcVar6); });
        dVar8 = (*(undefined8 *)(fr0_ - 0x2a8));
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2a8)),0x43960000);
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar7 = SUB84(dVar8 / dVar8,0);
        }
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D(1.0 - fVar7,fVar7);
        }
        else {
          dVar8 = CONCAT44D(0x3f800000,fVar7) - CONCAT44D(0x3f800000,fVar7);
        }
        if (cVar13 == '\0') {
          (*(undefined8 *)(fr0_ - 0x2bc)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2bc))+4)),(int)(D2U(dVar8) >> 0x20));
          dVar8 = (*(undefined8 *)(fr0_ - 0x2bc));
        }
        (*(undefined8 *)(fr0_ - 0x2bc)) = dVar8;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1b4)),&(*(undefined8 *)(fr0_ - 0x2bc)),pcVar3,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x194)),((undefined1 *)(fr0_ - 0x1c4)),pcVar3,pcVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e4))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x1d4)),((undefined1 *)(unsigned)0x8c13a77c),pcVar3,pcVar6); });
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x1e4)),pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a4)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x194)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x184)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x174)),0xffffffff,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar3,pcVar6));
        (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        puVar4 = (undefined1 *)(unsigned)(ar4 + 0x24c);
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),puVar4,ar7,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ar6 = ar7;
        pcVar6 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      else {
        puVar4 = (undefined1 *)(unsigned)(ar4 + 0x264);
        (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),puVar4,ar6,pcVar6));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c0231c8(ar4 + 0x14,puVar4,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c02374c(ar4 + 0x14,((undefined1 *)(fr0_ - 0x1f4)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x1f4)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f4)),0xffffffff,ar6,pcVar6));
  }
  else if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,pcVar6));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar8 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),in_fr3);
      dVar9 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x27c));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      dVar8 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = 1.29072414440439e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x40000000,fVar7);
    }
    else {
      dVar9 = 3.74001758157629e-312;
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(dVar8) <
               F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      bVar11 = dVar8 < dVar9 / dVar9;
    }
    if (bVar11) {
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      pcVar6 = (code *)0x0;
      ar6 = (code *)0x0;
      (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0));
    }
    pcVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x204))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_normalize(((undefined1 *)(fr0_ - 0x204)),pcVar3,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x214)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x214)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x204)),0xffffffff,ar6,pcVar6));
    iVar2 = ar4 + 0x14;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x224))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(iVar2,iVar2,ar6,pcVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x234))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),iVar2,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x224)),((undefined1 *)(fr0_ - 0x234)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x234)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x224)),0xffffffff,ar6,pcVar6));
    ar5_02 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,pcVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x244))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_02,ar5,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x244)),ar5,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x244)),0xffffffff,ar5,pcVar6));
    ar6 = ar5;
  }
  else if (iVar2 == 2) {
    iVar2 = ar4 + 0x264;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar2,ar6,pcVar6));
    uVar5 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,ar6,pcVar6));
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar5);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar8 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar7;
      fVar7 = *(float *)(unsigned)(ar4 + 0x28);
      fVar10 = 0.5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      fVar7 = 0.5;
      fVar10 = 2.9147e-43;
    }
    if (cVar12 == '\0' && fVar7 < fVar10) {
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        fVar7 = 0.5;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0xd03f000000;
      }
    }
    pcVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x254))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_normalize(((undefined1 *)(fr0_ - 0x254)),pcVar3,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x264)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x264)),0xffffffff,ar6,pcVar6));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x254)),0xffffffff,ar6,pcVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x274))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6,pcVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x284))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),uVar5,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x274)),((undefined1 *)(fr0_ - 0x284)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x284)),0xffffffff,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x274)),0xffffffff,ar6,pcVar6));
    ar5_02 = (vsp = ((unsigned long)(fr0_ - 704)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,pcVar6));
    ar6 = ar5;
    if (ar5_02 == 0) {
      ar5_02 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      pcVar6 = (code *)0x0;
      ar6 = (code *)0x0;
      iVar2 = ar4 + 0xb0;
      (vsp = ((unsigned long)(fr0_ - 704)), s_CAnimBody_SetAnimation_033a94(iVar2,1,0,0));
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar7;
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 704)), rand(iVar2,((void *)0x8c014200),ar6,pcVar6));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), libgcc_divide_helper_01031c(uVar5,10,ar6,pcVar6));
      *(int *)(unsigned)(ar4 + 0x284) = iVar2 + 0xf;
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x294))); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,ar4 + 0x14,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x294)),ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x294)),0xffffffff,ar6,pcVar6));
  }
  else if (iVar2 == 3) {
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 704)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_01,ar6,pcVar6));
    if (iVar2 == 1) {
      ar6 = (code *)0x284;
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      if (*(int *)(unsigned)(ar4 + 0x284) < 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x248) = 3;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      }
    }
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 704)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 704)) - 8); FUN_8c0230f0(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4,ar6,pcVar6); });
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4,ar6,pcVar6));
    (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x2a8)) + 4,0xffffffff,ar6,pcVar6));
  }
LAB_8c0954c6:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)) = ar5_02;
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 704)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,pcVar6));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4));
}

__asm__(".globl _FUN_8c094514\n.set _FUN_8c094514, _FUN_8c094514_def\n");
