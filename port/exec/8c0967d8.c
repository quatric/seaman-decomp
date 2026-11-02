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
int FUN_8c0967d8_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0967d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 716; for (int i_ = 0; i_ < 716; i_++) z_[i_] = 0; }
  int iVar1;
  ulonglong *ar4_00;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *ar5_00;
  int ar5_01;
  int *piVar5;
  int iVar6;
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
  piVar5 = ar7;
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  pcVar2 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),((void *)0x8c022c4c),ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x54)),pcVar2,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c102748(&(*(undefined4 *)(fr0_ - 0x60)),pcVar2,ar6,piVar5));
  iVar6 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c096864:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c034148(ar4 + 0xb0,0,ar6,piVar5));
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (*(undefined4 *)(fr0_ - 0x2b8)) = 1;
      (vsp = ((unsigned long)(fr0_ - 716)), free_if_nonnull_wrap_102790(&(*(undefined4 *)(fr0_ - 0x60)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined4 *)(fr0_ - 0x54)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,piVar5));
      return (*(undefined4 *)(fr0_ - 0x2b8));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
    if (cVar13 != '\0') {
      ((undefined4 *)(fr0_ - 0x54))[0] = 0x2dc;
    }
    (*(undefined4 *)(fr0_ - 0x58)) = 0x43480000;
    (*(undefined4 *)(fr0_ - 0x5c)) = 0x44098000;
    (*(undefined4 *)(fr0_ - 0x60)) = 0x443b8000;
    piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c031ce8(ar4,&(*(undefined4 *)(fr0_ - 0x60)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x264,((undefined1 *)(fr0_ - 0x70)),piVar3,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,piVar3,piVar5));
    ar6 = ar7;
    piVar5 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032788(ar4,ar4 + 0x264,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x264,uVar4,ar6,piVar5));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x442f0000,*(undefined4 *)(unsigned)(ar4 + 0x26c));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x26c);
      dVar8 = 6.28675931074746e-312;
    }
    if (cVar12 == '\0') {
      fVar7 = F32HI(dVar8);
      dVar8 = CONCAT44D(fVar7,F32LO(dVar8) + fVar7);
    }
    else {
      dVar8 = dVar8 + dVar8;
    }
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x26c) = SUB84(dVar8,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x26c) = in_xd0;
    }
    (vsp = ((unsigned long)(fr0_ - 716)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x264,ar6,piVar5));
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x41100000,(int)(D2U(dVar8) >> 0x20));
      dVar8 = in_xd0;
    }
    else {
      dVar9 = 1.46896039340715e-311;
    }
    if (cVar12 == '\0') {
      fVar7 = F32HI(dVar9);
      in_xd0 = CONCAT44D(fVar7,F32LO(dVar9) + fVar7);
    }
    else {
      in_xd0 = dVar9 + dVar9;
    }
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x268) = SUB84(in_xd0,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x268) = dVar8;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x80)),ar6,piVar5));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_length_sq(((undefined4 *)(fr0_ - 0x54)),uVar4,ar6,piVar5));
    fVar7 = F32HI(in_xd0);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),fVar7);
      pcVar2 = (code *)0x43960000;
      in_xd0 = dVar8;
    }
    else {
      fVar7 = 300.0;
      pcVar2 = (code *)0x2a4;
      (*(undefined8 *)(fr0_ - 0x2b4)) = in_xd0;
    }
    if (cVar12 == '\0' && (float)(uint)pcVar2 < fVar7) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined4 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,piVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c13a794),ar6,piVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xa0)),&(*(undefined8 *)(fr0_ - 0x2b4)),ar6,piVar5); });
      piVar5 = ar7;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032518(ar4,ar5,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xc0)),ar5,piVar5,piVar3); });
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2b4)),0x43960000);
      }
      else {
        in_xd0 = 1.43502937764137e-311;
        dVar8 = (*(undefined8 *)(fr0_ - 0x2b4));
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
      dVar9 = dVar8;
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2c0)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c0))+4)),(int)(D2U(dVar8) >> 0x20));
        dVar9 = (*(undefined8 *)(fr0_ - 0x2c0));
      }
      (*(undefined8 *)(fr0_ - 0x2c0)) = dVar9;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xd0)),&(*(undefined8 *)(fr0_ - 0x2c0)),piVar5,piVar3); });
      fVar7 = F32LO(dVar8);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb0)),((undefined1 *)(fr0_ - 0xe0)),piVar5,piVar3); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x100))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xf0)),((undefined1 *)(unsigned)0x8c13a798),piVar5,piVar3); });
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x100)),piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,piVar5,piVar3));
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c023aa0(ar4 + 0x24c,ar5,((void *)0x8c023aa0),piVar3));
      if (cVar13 == '\0') {
        pcVar2 = (code *)0x40000000;
      }
      else {
        fVar7 = 2.0;
        pcVar2 = ((void *)0x8c031ce8);
      }
      ar6 = ar7;
      piVar5 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,piVar5));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,piVar5));
    }
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022fc0(ar5,((undefined1 *)(fr0_ - 0x34)),ar6,piVar5));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),pcVar2);
    }
    else {
      in_xd0 = CONCAT44D(pcVar2,fVar7);
      dVar8 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar12 == '\0') {
      fVar7 = F32LO(dVar8) / F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 / dVar8,0);
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
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c031c64(ar4,ar4 + 0x24,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c031b68(ar4,0x8c2846e8,ar6,piVar5));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c0977f2;
    goto LAB_8c096864;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x260);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,piVar5));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x110)),ar6,piVar5));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_length_sq(((undefined4 *)(fr0_ - 0x54)),uVar4,ar6,piVar5));
    fVar7 = F32HI(in_dr0);
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),fVar7);
      fVar10 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar7 = 300.0;
      fVar10 = 8.23963e-43;
      (*(undefined8 *)(fr0_ - 0x2b4)) = in_dr0;
    }
    if (cVar12 != '\0' || fVar7 <= fVar10) {
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,piVar5));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar6,piVar5));
    }
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022fc0(ar4 + 0x264,ar5,ar6,piVar5));
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x43960000,fVar10);
    }
    else {
      in_dr0 = CONCAT44D(fVar10,fVar7);
      dVar8 = 1.12946198374237e-311;
    }
    if (cVar12 != '\0' || SUB84(dVar8,0) <= F32HI(dVar8)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x120))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
      (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x120)),ar6,piVar5));
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x41200000,(int)(D2U(dVar8) >> 0x20));
      }
      else {
        dVar9 = -7.932637925129825e-251;
        in_dr0 = dVar8;
      }
      dVar8 = dVar9;
      (*(undefined8 *)(fr0_ - 0x2c8)) = (double)(ulonglong)
                           CONCAT14(cVar12 != '\0' ||
                                    SUB84(dVar8,0) <= F32HI(dVar8),
                                    (undefined4)(*(undefined8 *)(fr0_ - 0x2c8)));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,piVar5));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c8))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5));
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
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_normalize(((undefined1 *)(fr0_ - 0x130)),((void *)0x8c022ec0),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x140)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,piVar5));
    piVar5 = ((int *)(fr0_ - 0x150));
    pcVar2 = ((void *)0x8c0230f0);
    ({ unsigned long t0_ = (unsigned long)(piVar5); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),ar6,piVar5); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),pcVar2,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(((int *)(fr0_ - 0x150)),((undefined1 *)(fr0_ - 0x160)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((int *)(fr0_ - 0x150)),0xffffffff,ar6,piVar5));
    ar6 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,piVar5));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x170))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(ar4 + 0x264,ar5,ar6,piVar5); });
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined4 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x170)),ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,ar6,piVar5));
      (vsp = ((unsigned long)(fr0_ - 716)), Vec3_length_sq(((undefined4 *)(fr0_ - 0x54)),((void *)0x8c022e78),ar6,piVar5));
      fVar7 = F32HI(dVar8);
      if (cVar13 == '\0') {
        (*(undefined8 *)(fr0_ - 0x2b4)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2b4))+4)),fVar7);
        fVar10 = 300.0;
      }
      else {
        fVar7 = 300.0;
        fVar10 = 7.45491e-43;
        (*(undefined8 *)(fr0_ - 0x2b4)) = dVar8;
      }
      if (cVar12 == '\0' && fVar10 < fVar7) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined4 *)(fr0_ - 0x54)),ar4 + 0x48,ar6,piVar5); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x190))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x180)),((undefined1 *)(unsigned)0x8c13a79c),ar6,piVar5); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x190)),&(*(undefined8 *)(fr0_ - 0x2b4)),ar6,piVar5); });
        piVar5 = ar7;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032518(ar4,ar5,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x1b0)),ar5,piVar5,piVar3); });
        dVar8 = (*(undefined8 *)(fr0_ - 0x2b4));
        if (cVar13 == '\0') {
          dVar8 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x2b4)),0x43960000);
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
          (*(undefined8 *)(fr0_ - 0x2c8)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c8))+4)),(int)(D2U(dVar8) >> 0x20));
          dVar8 = (*(undefined8 *)(fr0_ - 0x2c8));
        }
        (*(undefined8 *)(fr0_ - 0x2c8)) = dVar8;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1c0)),&(*(undefined8 *)(fr0_ - 0x2c8)),piVar5,piVar3); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1e0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x1a0)),((undefined1 *)(fr0_ - 0x1d0)),piVar5,piVar3); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x1e0)),((undefined1 *)(unsigned)0x8c13a7a0),piVar5,piVar3); });
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x1f0)),piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a0)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x190)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c023aa0(ar4 + 0x24c,ar5,piVar5,piVar3));
        (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        iVar1 = ar4 + 0x24c;
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar1,ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))));
        ar6 = ar7;
        piVar5 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      else {
        iVar1 = ar4 + 0x264;
        (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar1,ar6,piVar5));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c0231c8(ar4 + 0x14,iVar1,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c02374c(ar4 + 0x14,((undefined1 *)(fr0_ - 0x200)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x200)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x200)),0xffffffff,ar6,piVar5));
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x264,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,((void *)0x8c033b98),ar6,piVar5));
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
      piVar5 = (int *)(unsigned)0x0;
      ar6 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0));
    }
    piVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x210))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_normalize(((undefined1 *)(fr0_ - 0x210)),piVar3,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x220)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x220)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x210)),0xffffffff,ar6,piVar5));
    iVar6 = ar4 + 0x14;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x230))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(iVar6,iVar6,ar6,piVar5); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x240))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),iVar6,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x230)),((undefined1 *)(fr0_ - 0x240)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x240)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x230)),0xffffffff,ar6,piVar5));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,piVar5));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x250))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar6,ar5,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x250)),ar5,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x250)),0xffffffff,ar5,piVar5));
    ar6 = ar5;
  }
  else if (iVar1 == 2) {
    iVar6 = ar4 + 0x264;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar6,ar6,piVar5));
    uVar4 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar6,ar6,piVar5));
    if (cVar13 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
      dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
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
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
    }
    piVar3 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x260))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_normalize(((undefined1 *)(fr0_ - 0x260)),piVar3,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x270)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x270)),0xffffffff,ar6,piVar5));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x260)),0xffffffff,ar6,piVar5));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x280))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6,piVar5); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x290))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x44)),((void *)0x8c0230f0),ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x280)),((undefined1 *)(fr0_ - 0x290)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x290)),0xffffffff,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x280)),0xffffffff,ar6,piVar5));
    ar5_00 = ((undefined1 *)(fr0_ - 0x34));
    iVar6 = (vsp = ((unsigned long)(fr0_ - 716)), FUN_8c097ba4(ar4,ar5_00,ar5,piVar5));
    ar6 = ar5;
    if (iVar6 == 0) {
      iVar6 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      piVar5 = (int *)(unsigned)0x0;
      ar6 = (int *)(unsigned)0x0;
      uVar4 = 1;
      (vsp = ((unsigned long)(fr0_ - 716)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0));
      ar4_00 = (ulonglong *)(unsigned)(ar4 + 0x28);
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)ar4_00 = 0;
      }
      else {
        *ar4_00 = (ulonglong)(uint)fVar7;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 716)), rand(ar4_00,uVar4,ar6,piVar5));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), libgcc_divide_helper_01031c(uVar4,10,ar6,piVar5));
      *(int *)(unsigned)(ar4 + 0x284) = iVar1 + 0xf;
      ar5_00 = (undefined1 *)(unsigned)0x260;
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2a0))); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x2a0)),ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2a0)),0xffffffff,ar6,piVar5));
  }
  else if (iVar1 == 3) {
    ar5_01 = 0xb0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 716)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,piVar5));
    if (iVar1 == 1) {
      ar5_01 = *(int *)(unsigned)(ar4 + 0x284) + -1;
      *(int *)(unsigned)(ar4 + 0x284) = ar5_01;
      if (*(int *)(unsigned)(ar4 + 0x284) < 1) {
        iVar6 = 0;
        ar5_01 = 0x40;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      }
    }
    ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x2b4)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 716)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 716)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_01,ar6,piVar5); });
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x2b4)) + 4,ar6,piVar5));
    (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x2b4)) + 4,0xffffffff,ar6,piVar5));
  }
LAB_8c0977f2:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c0))+4)) = iVar6;
  (vsp = ((unsigned long)(fr0_ - 716)), free_if_nonnull_wrap_102790(&(*(undefined4 *)(fr0_ - 0x60)),0xffffffff,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined4 *)(fr0_ - 0x54)),0xffffffff,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,piVar5));
  (vsp = ((unsigned long)(fr0_ - 716)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,piVar5));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x2c0))+4));
}

__asm__(".globl _FUN_8c0967d8\n.set _FUN_8c0967d8, _FUN_8c0967d8_def\n");
