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
int FUN_8c093e80_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c093e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 412; for (int i_ = 0; i_ < 412; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  double in_dr0 = 0;
  double dVar7;
  float fVar9;
  double dVar8;
  undefined4 in_fr3 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar4 = ar5;
  iVar3 = ar6;
  iVar5 = ar7;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),uVar4,iVar3,iVar5));
  uVar4 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(ar6,ar5,iVar3,iVar5); });
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x64)),uVar4,iVar3,iVar5));
  iVar2 = (int)((ulonglong)in_dr0 >> 0x20);
  if (cVar12 == '\0') {
    in_dr0 = CONCAT44D(iVar2,in_fr3);
    dVar7 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
    dVar7 = -7.932637925129825e-251;
    (*(int *)(fr0_ - 0x170)) = iVar2;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar7);
    fVar6 = F32LO(dVar7) * fVar9;
    dVar7 = CONCAT44D(fVar9,fVar6);
    bVar10 = fVar6 < F32HI(in_dr0);
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar10 = dVar7 < in_dr0;
  }
  (*(int *)(fr0_ - 0x168)) = 1 - (uint)bVar10;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,iVar3,iVar5));
  uVar4 = SUB84(in_dr0,0);
  if ((*(int *)(fr0_ - 0x168)) == 0) {
    iVar2 = ar4 + 0x24c;
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),iVar2,iVar3,iVar5));
  }
  else {
    iVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar6,iVar3,iVar5));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093f74:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c034148(ar4 + 0xb0,0,iVar3,iVar5));
    if ((iVar2 != 1) && (iVar2 != 2)) {
      (*(undefined4 *)(fr0_ - 0x160)) = 1;
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,iVar3,iVar5));
      return (*(undefined4 *)(fr0_ - 0x160));
    }
    ar5_00 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(ar6,ar5,iVar3,iVar5); });
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x74)),ar5_00,iVar3,iVar5));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),uVar4);
      dVar8 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      dVar8 = -7.932637925129825e-251;
    }
    if (cVar11 == '\0') {
      fVar9 = F32HI(dVar8);
      fVar6 = F32LO(dVar8) * fVar9;
      dVar8 = CONCAT44D(fVar9,fVar6);
      bVar10 = fVar6 < F32HI(dVar7);
    }
    else {
      dVar8 = dVar8 * dVar8;
      bVar10 = dVar8 < dVar7;
    }
    (*(int *)(fr0_ - 0x16c)) = 1 - (uint)bVar10;
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,iVar3,iVar5));
    if ((*(int *)(fr0_ - 0x16c)) == 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(ar6,ar5,iVar3,iVar5); });
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x84)),iVar3,iVar5));
      uVar4 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x44)),uVar4,iVar3,iVar5));
      uVar4 = (undefined4)(D2U(dVar8) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x158)) = uVar4;
      if (cVar12 != '\0') {
        (*(undefined4 *)(fr0_ - 0x184)) = SUB84(dVar8,0);
        (*(undefined4 *)(fr0_ - 0x158)) = (*(undefined4 *)(fr0_ - 0x184));
        ((undefined4 *)(fr0_ - 0x154))[0] = uVar4;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),ar4 + 0x48,iVar3,iVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c13a768),iVar3,iVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xa4)),&(*(undefined4 *)(fr0_ - 0x158)),iVar3,iVar5); });
      iVar3 = ar7;
      iVar5 = (*(int *)(fr0_ + 0x00000000));
      (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c032518(ar4,ar5,ar7,(*(int *)(fr0_ + 0x00000000))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xc4)),ar5,iVar3,iVar5); });
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x158)),0x43480000);
      }
      else {
        dVar7 = CONCAT44D(((undefined4 *)(fr0_ - 0x154))[0],(*(undefined4 *)(fr0_ - 0x158)));
        in_xd0 = 1548112654106624.0;
      }
      if (cVar11 == '\0') {
        fVar6 = F32LO(dVar7) / F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(1.0 - fVar6,fVar6);
      }
      else {
        dVar7 = CONCAT44D(0x3f800000,fVar6) - CONCAT44D(0x3f800000,fVar6);
      }
      iVar2 = (int)(D2U(dVar7) >> 0x20);
      (*(int *)(fr0_ - 0x170)) = iVar2;
      if (cVar12 != '\0') {
        (*(int *)(fr0_ - 0x170)) = SUB84(dVar7,0);
        (*(int *)(fr0_ - 0x16c)) = iVar2;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xd4)),&(*(int *)(fr0_ - 0x170)),iVar3,iVar5); });
      uVar4 = SUB84(dVar7,0);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xe4)),iVar3,iVar5); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x104))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xf4)),((undefined1 *)(unsigned)0x8c13a76c),iVar3,iVar5); });
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x104)),iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c023aa0(ar4 + 0x24c,ar5,iVar3,iVar5));
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x40000000,uVar4);
      }
      else {
        dVar8 = 13510801029595136.0;
      }
      (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c032788(ar4,ar4 + 0x24c,ar7,(*(int *)(fr0_ + 0x00000000))));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x24c,ar7,(*(int *)(fr0_ + 0x00000000))));
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(ar4 + 0x24c,ar6,iVar3,iVar5));
      (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),uVar4,iVar3,iVar5));
      ar7 = iVar3;
      (*(int *)(fr0_ + 0x00000000)) = iVar5;
    }
    ar5_01 = ((undefined1 *)(fr0_ - 0x34));
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c022fc0(ar5,ar5_01,ar7,(*(int *)(fr0_ + 0x00000000))));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),(int)(D2U(dVar8) >> 0x20));
      dVar8 = in_xd0;
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar11 == '\0') {
      fVar6 = F32HI(dVar7);
      dVar7 = CONCAT44D(fVar6,F32LO(dVar7) / fVar6);
    }
    else {
      dVar7 = dVar7 / dVar7;
    }
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = SUB84(dVar7,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar8;
    }
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c031c64(ar4,ar5_01,ar7,(*(int *)(fr0_ + 0x00000000))));
    iVar2 = -0x73d7b918;
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c031b68(ar4,0x8c2846e8,ar7,(*(int *)(fr0_ + 0x00000000))));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
    iVar3 = ar7;
    iVar5 = (*(int *)(fr0_ + 0x00000000));
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c094390;
    goto LAB_8c093f74;
  }
  (vsp = ((unsigned long)(fr0_ - 412)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c0231c8(ar4 + 0x14,iVar2,iVar3,iVar5));
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D(0xc1700000,SUB84(dVar7,0));
    in_fr15 = F32HI(dVar7);
  }
  else {
    dVar8 = -4.808686934874603e+231;
  }
  if (cVar11 == '\0') {
    bVar10 = in_fr15 < F32HI(dVar8);
  }
  else {
    bVar10 = CONCAT44D(in_fr14,in_fr15) < dVar8;
  }
  if (bVar10) {
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0xc1700000,SUB84(dVar8,0));
    }
    else {
      dVar7 = -4.808686934874603e+231;
    }
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) - in_fr15,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - CONCAT44D(in_fr14,in_fr15);
    }
  }
  else {
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(0x41700000,SUB84(dVar8,0));
    }
    else {
      dVar7 = 2.97621825186588e-312;
    }
    if (cVar11 == '\0') {
      bVar10 = F32HI(dVar7) < in_fr15;
    }
    else {
      bVar10 = dVar7 < CONCAT44D(in_fr14,in_fr15);
    }
    if (bVar10) {
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x41700000,SUB84(dVar7,0));
      }
      else {
        dVar7 = 2.97621825186588e-312;
      }
      if (cVar11 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) - in_fr15,SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - CONCAT44D(in_fr14,in_fr15);
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c02374c(ar4 + 0x14,iVar2,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x114)),iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,iVar3,iVar5));
LAB_8c094390:
  uVar4 = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x124))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x34)),ar5,iVar3,iVar5); });
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_normalize(((undefined1 *)(fr0_ - 0x124)),uVar4,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x134)),iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,iVar3,iVar5));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x124)),0xffffffff,iVar3,iVar5));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x144))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,iVar3,iVar5); });
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x154))); *(unsigned *)((((unsigned long)(fr0_ - 412)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 412)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x54)),uVar4,iVar3,iVar5); });
  (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x144)),((undefined4 *)(fr0_ - 0x154)),iVar3,iVar5));
  uVar4 = (undefined4)(D2U(dVar7) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x15c)) = uVar4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(fr0_ - 0x15c)) = SUB84(dVar7,0);
    (*(undefined4 *)(fr0_ - 0x158)) = uVar4;
  }
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined4 *)(fr0_ - 0x154)),0xffffffff,iVar3,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x144)),0xffffffff,iVar3,iVar5));
  uVar4 = ar5;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x34)),ar5,iVar5));
  if (iVar3 == 0) {
    (vsp = ((unsigned long)(fr0_ - 412)), FUN_8c022fc0(ar5,ar6,uVar4,iVar5));
    (*(float *)(fr0_ - 0x194)) = F32HI(dVar7);
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x198)) = (*(float *)(fr0_ - 0x194));
      (*(float *)(fr0_ - 0x194)) = 0.0;
    }
    else {
      (*(float *)(fr0_ - 0x198)) = SUB84(dVar7,0);
    }
    (vsp = ((unsigned long)(fr0_ - 412)), Vec3_length_sq(ar4 + 4,ar6,uVar4,iVar5));
    fVar6 = F32HI(dVar7);
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(fVar6,*(undefined4 *)(unsigned)(ar4 + 0x48));
      fVar6 = (*(float *)(fr0_ - 0x198));
    }
    (*(float *)(fr0_ - 0x198)) = fVar6;
    if (cVar11 == '\0') {
      fVar6 = F32LO(dVar7) + F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 + dVar7,0);
    }
    fVar9 = (*(float *)(fr0_ - 0x198));
    if (cVar12 == '\0') {
      fVar9 = fVar6;
      (*(float *)(fr0_ - 0x194)) = (*(float *)(fr0_ - 0x198));
    }
    if (cVar11 == '\0' && fVar9 < (*(float *)(fr0_ - 0x194))) {
      iVar3 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
    }
  }
  (*(int *)(fr0_ - 0x164)) = iVar3;
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,uVar4,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,uVar4,iVar5));
  (vsp = ((unsigned long)(fr0_ - 412)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar4,iVar5));
  return (*(int *)(fr0_ - 0x164));
}

__asm__(".globl _FUN_8c093e80\n.set _FUN_8c093e80, _FUN_8c093e80_def\n");
