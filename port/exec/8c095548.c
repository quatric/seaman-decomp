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
int FUN_8c095548_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c095548";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 816; for (int i_ = 0; i_ < 816; i_++) z_[i_] = 0; }
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double in_dr0 = 0;
  double dVar9;
  double dVar10;
  float fVar11;
  uint uVar12;
  undefined4 in_fr3 = 0;
  double in_xd0 = 0;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  pcVar2 = ((void *)0x8c022c4c);
  uVar6 = ar7;
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),((void *)0x8c022c4c),ar6,ar7));
  pcVar5 = ((void *)0x8c022c4c);
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x48)),pcVar2,((void *)0x8c022c4c),uVar6));
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x58)),pcVar2,pcVar5,uVar6));
  iVar7 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c0955d0:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c034148(ar4 + 0xb0,0,pcVar5,uVar6));
    if ((iVar1 != 1) && (iVar1 != 2)) {
      (*(undefined4 *)(fr0_ - 0x310)) = 1;
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar5,uVar6));
      return (*(undefined4 *)(fr0_ - 0x310));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x264,ar6,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x68)),pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x58)),uVar4,pcVar5,uVar6));
    fVar8 = F32HI(in_dr0);
    if (cVar15 == '\0') {
      (*(undefined8 *)(fr0_ - 0x30c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30c))+4)),fVar8);
      fVar11 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar8 = 300.0;
      fVar11 = 1.13225e-42;
      (*(undefined8 *)(fr0_ - 0x30c)) = in_dr0;
    }
    if (cVar14 == '\0' && fVar11 < fVar8) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x48,pcVar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(unsigned)0x8c13a780),pcVar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x88)),&(*(undefined8 *)(fr0_ - 0x30c)),pcVar5,uVar6); });
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032518(ar4,ar5,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0xa8)),ar5,pcVar5,uVar6); });
      if (cVar15 == '\0') {
        dVar9 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30c)),0x43960000);
      }
      else {
        in_dr0 = 1.71513282204878e-311;
        dVar9 = (*(undefined8 *)(fr0_ - 0x30c));
      }
      if (cVar14 == '\0') {
        fVar8 = F32LO(dVar9) / F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(1.0 - fVar8,fVar8);
      }
      else {
        dVar9 = CONCAT44D(0x3f800000,fVar8) - CONCAT44D(0x3f800000,fVar8);
      }
      dVar10 = dVar9;
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x318)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x318))+4)),(int)(D2U(dVar9) >> 0x20));
        dVar10 = (*(undefined8 *)(fr0_ - 0x318));
      }
      (*(undefined8 *)(fr0_ - 0x318)) = dVar10;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xb8)),&(*(undefined8 *)(fr0_ - 0x318)),pcVar5,uVar6); });
      fVar8 = F32LO(dVar9);
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x98)),((undefined1 *)(fr0_ - 0xc8)),pcVar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xd8)),((undefined1 *)(unsigned)0x8c13a784),pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0xe8)),pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar5,uVar6));
      if (cVar15 == '\0') {
        fVar11 = 2.0;
      }
      else {
        fVar8 = 2.0;
        fVar11 = 200.0;
      }
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032788(ar4,ar4 + 0x24c,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x24c,pcVar5,uVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    }
    puVar3 = ((undefined1 *)(fr0_ - 0x38));
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022fc0(ar5,puVar3,pcVar5,uVar6));
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),fVar11);
      in_xd0 = in_dr0;
    }
    else {
      in_xd0 = CONCAT44D(fVar11,fVar8);
      dVar9 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar9) / F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 / dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar8;
      in_dr0 = CONCAT44D(0x40a00000,fVar8);
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x40a00000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = in_xd0;
      in_dr0 = -8.34132164470162e-251;
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c031c6440a00000;
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c031c64(ar4,puVar3,pcVar5,uVar6));
    pcVar2 = (code *)0x8c2846e8;
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c031b68(ar4,0x8c2846e8,pcVar5,uVar6));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c096760;
    goto LAB_8c0955d0;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x260);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar2,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0xf8)),pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x58)),uVar4,pcVar5,uVar6));
    fVar8 = F32HI(in_dr0);
    if (cVar15 == '\0') {
      (*(undefined8 *)(fr0_ - 0x30c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30c))+4)),fVar8);
      fVar11 = 300.0;
      in_dr0 = in_xd0;
    }
    else {
      fVar8 = 300.0;
      fVar11 = 8.23963e-43;
      (*(undefined8 *)(fr0_ - 0x30c)) = in_dr0;
    }
    if (cVar14 != '\0' || fVar8 <= fVar11) {
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x24c,pcVar5,uVar6));
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022fc0(ar4 + 0x264,ar5,pcVar5,uVar6));
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(0x43960000,fVar11);
    }
    else {
      in_dr0 = CONCAT44D(fVar11,fVar8);
      dVar9 = 1.40956542814978e-311;
    }
    if (cVar14 != '\0' || SUB84(dVar9,0) <= F32HI(dVar9)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(ar4 + 0x14,((undefined1 *)(fr0_ - 0x108)),pcVar5,uVar6));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x41200000,(int)(D2U(dVar9) >> 0x20));
      }
      else {
        dVar10 = 2.80643268531973e-312;
        in_dr0 = dVar9;
      }
      dVar9 = dVar10;
      (*(undefined8 *)(fr0_ - 0x320)) = (double)(ulonglong)
                           CONCAT14(cVar14 != '\0' ||
                                    SUB84(dVar9,0) <= F32HI(dVar9),
                                    (undefined4)(*(undefined8 *)(fr0_ - 0x320)));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,pcVar5,uVar6));
      if ((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x320))+4)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6));
        if (cVar15 == '\0') {
          *(int *)(unsigned)(ar4 + 0x274) = (int)(D2U(dVar9) >> 0x20);
          dVar9 = CONCAT44D(0x40000000,*(undefined4 *)(unsigned)(ar4 + 0x274));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x274) = dVar9;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x274);
          dVar9 = 1.35011982200165e-311;
        }
        if (cVar14 == '\0') {
          fVar8 = F32LO(dVar9) * F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar15 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar8);
        }
        else {
          dVar9 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar14 == '\0') {
          fVar8 = F32LO(dVar9) / F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x278) = fVar8;
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x278),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(double *)(unsigned)(ar4 + 0x278) = in_dr0;
          in_dr0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar9 = *(double *)(unsigned)(ar4 + 0x278);
        }
        if (cVar14 == '\0') {
          fVar8 = F32HI(dVar9);
          dVar9 = CONCAT44D(fVar8,F32LO(dVar9) / fVar8);
        }
        else {
          dVar9 = dVar9 / dVar9;
        }
        if (cVar15 == '\0') {
          *(int *)(unsigned)(ar4 + 0x27c) = SUB84(dVar9,0);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x27c) = in_dr0;
        }
        *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      }
    }
    pcVar2 = ar5;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x118))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x118)),pcVar2,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x128)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x118)),0xffffffff,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar5,uVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x148))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x48)),uVar4,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x138)),((undefined1 *)(fr0_ - 0x148)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x148)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x138)),0xffffffff,pcVar5,uVar6));
    pcVar5 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x38)),ar5,uVar6));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x158))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(ar4 + 0x264,ar5,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x58)),((undefined1 *)(fr0_ - 0x158)),pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x158)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x58)),((void *)0x8c022e78),pcVar5,uVar6));
      fVar8 = F32HI(dVar9);
      if (cVar15 == '\0') {
        (*(undefined8 *)(fr0_ - 0x30c)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30c))+4)),fVar8);
        fVar11 = 300.0;
      }
      else {
        fVar8 = 300.0;
        fVar11 = 9.30462e-43;
        (*(undefined8 *)(fr0_ - 0x30c)) = dVar9;
      }
      if (cVar14 == '\0' && fVar11 < fVar8) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x168))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x48,pcVar5,uVar6); });
        pcVar5 = ((void *)0x8c023b8c);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x178))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x168)),((undefined1 *)(unsigned)0x8c13a788),((void *)0x8c023b8c),uVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x188))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x178)),&(*(undefined8 *)(fr0_ - 0x30c)),pcVar5,uVar6); });
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032518(ar4,ar5,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x198)),ar5,pcVar5,uVar6); });
        dVar9 = (*(undefined8 *)(fr0_ - 0x30c));
        if (cVar15 == '\0') {
          dVar9 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30c)),0x43960000);
        }
        if (cVar14 == '\0') {
          fVar8 = F32LO(dVar9) / F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 / dVar9,0);
        }
        if (cVar14 == '\0') {
          dVar9 = CONCAT44D(1.0 - fVar8,fVar8);
        }
        else {
          dVar9 = CONCAT44D(0x3f800000,fVar8) - CONCAT44D(0x3f800000,fVar8);
        }
        if (cVar15 == '\0') {
          (*(undefined8 *)(fr0_ - 0x320)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x320))+4)),(int)(D2U(dVar9) >> 0x20));
          dVar9 = (*(undefined8 *)(fr0_ - 0x320));
        }
        (*(undefined8 *)(fr0_ - 0x320)) = dVar9;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1b8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x1a8)),&(*(undefined8 *)(fr0_ - 0x320)),pcVar5,uVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x188)),((undefined1 *)(fr0_ - 0x1b8)),pcVar5,uVar6); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1d8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x1c8)),((undefined1 *)(unsigned)0x8c13a78c),pcVar5,uVar6); });
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x24c,((undefined1 *)(fr0_ - 0x1d8)),pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a8)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x198)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x188)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x178)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x168)),0xffffffff,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c023aa0(ar4 + 0x24c,ar5,pcVar5,uVar6));
        (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c032788(ar4,ar4 + 0x24c,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x24c,((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),(*(undefined4 *)(fr0_ + 0x00000004))));
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
        uVar6 = (*(undefined4 *)(fr0_ + 0x00000004));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c0231c8(ar4 + 0x14,ar4 + 0x14,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c02374c(ar4 + 0x14,ar4 + 0x14,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x1e8)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e8)),0xffffffff,pcVar5,uVar6));
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar5,uVar6));
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar8;
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),in_fr3);
      dVar10 = CONCAT44D(0x42700000,*(undefined4 *)(unsigned)(ar4 + 0x27c));
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      dVar9 = *(double *)(unsigned)(ar4 + 0x28);
      dVar10 = 1.29072414440439e-311;
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar10) * F32HI(dVar10);
    }
    else {
      fVar8 = SUB84(dVar10 * dVar10,0);
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(0x40000000,fVar8);
    }
    else {
      dVar10 = 3.74001758157629e-312;
    }
    if (cVar14 == '\0') {
      fVar11 = F32HI(dVar10);
      fVar8 = F32LO(dVar10) / fVar11;
      dVar10 = CONCAT44D(fVar11,fVar8);
      bVar13 = F32HI(dVar9) < fVar8;
    }
    else {
      dVar10 = dVar10 / dVar10;
      bVar13 = dVar9 < dVar10;
    }
    fVar8 = F32HI(dVar10);
    if (bVar13) {
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      uVar6 = 0;
      pcVar5 = (code *)0x0;
      uVar4 = 3;
      (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0,0));
      *(undefined4 *)(unsigned)(ar4 + 0x288) = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar7,uVar4,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x1f8)),uVar4,pcVar5,uVar6));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x218))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x80,uVar4,pcVar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x218)),uVar4,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x208)),((undefined1 *)(fr0_ - 0x228)),pcVar5,uVar6));
      if (cVar15 == '\0') {
        pcVar2 = (code *)0x42340000;
      }
      else {
        fVar8 = 45.0;
        pcVar2 = ((void *)0x8c022cb0);
      }
      (*(uint *)(fr0_ - 0x324)) = (uint)(cVar14 == '\0' && fVar8 < (float)(uint)pcVar2);
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x228)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x218)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x208)),0xffffffff,pcVar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f8)),0xffffffff,pcVar5,uVar6));
      if ((*(uint *)(fr0_ - 0x324)) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0x1e;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x238))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x238)),((void *)0x8c022ec0),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x248)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x248)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x238)),0xffffffff,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x258))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x258)),pcVar5,uVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x268))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x48)),pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x258)),((undefined1 *)(fr0_ - 0x268)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x268)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x258)),0xffffffff,pcVar5,uVar6));
    puVar3 = ((undefined1 *)(fr0_ - 0x38));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c097ba4(ar4,puVar3,ar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x278))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar3,ar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x278)),ar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x278)),0xffffffff,ar5,uVar6));
    pcVar5 = ar5;
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x264,pcVar5,uVar6));
    uVar4 = SUB84(in_dr0,0);
    (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar5,uVar6));
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
      dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x27c),*(undefined4 *)(unsigned)(ar4 + 0x28));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
      in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      dVar9 = *(double *)(unsigned)(ar4 + 0x27c);
    }
    if (cVar14 == '\0') {
      fVar8 = F32LO(dVar9) - F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x28) = fVar8;
      fVar8 = *(float *)(unsigned)(ar4 + 0x28);
      fVar11 = 0.5;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x28) = in_xd0;
      fVar8 = 0.5;
      fVar11 = 3.92364e-43;
    }
    if (cVar14 == '\0' && fVar8 < fVar11) {
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3f000000;
      }
      else {
        fVar8 = 0.5;
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x1183f000000;
      }
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x288))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x38)),ar5,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x288)),((undefined1 *)(fr0_ - 0x288)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x298)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x298)),0xffffffff,pcVar5,uVar6));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x288)),0xffffffff,pcVar5,uVar6));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2a8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar5,uVar6); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2b8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x48)),uVar4,pcVar5,uVar6); });
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x2a8)),((undefined1 *)(fr0_ - 0x2b8)),pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2b8)),0xffffffff,pcVar5,uVar6));
    (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2a8)),0xffffffff,pcVar5,uVar6));
    iVar7 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c097ba4(ar4,((undefined1 *)(fr0_ - 0x38)),ar5,uVar6));
    if (iVar7 == 0) {
      iVar7 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      uVar6 = 0;
      pcVar5 = (code *)0x0;
      iVar1 = ar4 + 0xb0;
      (vsp = ((unsigned long)(fr0_ - 816)), s_CAnimBody_SetAnimation_033a94(iVar1,1,0,0));
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar8;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 816)), rand(iVar1,((void *)0x8c014200),pcVar5,uVar6));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), libgcc_divide_helper_01031c(uVar4,10,pcVar5,uVar6));
      *(int *)(unsigned)(ar4 + 0x284) = iVar1 + 0xf;
      *(int *)(unsigned)(ar4 + 0x260) = *(int *)(unsigned)(ar4 + 0x260) + 1;
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,ar7,pcVar5,uVar6));
    }
    else {
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x284),fVar8);
      }
      else {
        dVar9 = (double)*(int *)(unsigned)(ar4 + 0x284);
      }
      uVar12 = (uint)(D2U(dVar9) >> 0x20);
      (*(uint *)(fr0_ - 0x328)) = uVar12;
      if (cVar15 != '\0') {
        (*(uint *)(fr0_ - 0x328)) = SUB84(dVar9,0);
        (*(uint *)(fr0_ - 0x324)) = uVar12;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(ar4 + 0x80,&(*(uint *)(fr0_ - 0x328)),ar5,uVar6); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2d8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0x2c8)),((undefined1 *)(unsigned)0x8c13a790),ar5,uVar6); });
      if (cVar15 == '\0') {
        dVar9 = CONCAT44D(0x41f00000,(float)*(int *)(unsigned)(ar4 + 0x284));
      }
      else {
        dVar9 = 3.9099378451209e-312;
      }
      if (cVar14 == '\0') {
        fVar8 = F32LO(dVar9) / F32HI(dVar9);
      }
      else {
        fVar8 = SUB84(dVar9 / dVar9,0);
      }
      if (cVar14 == '\0') {
        dVar9 = CONCAT44D(1.0 - fVar8,fVar8);
      }
      else {
        dVar9 = CONCAT44D(0x3f800000,fVar8) - CONCAT44D(0x3f800000,fVar8);
      }
      uVar12 = (uint)(D2U(dVar9) >> 0x20);
      (*(uint *)(fr0_ - 0x32c)) = uVar12;
      if (cVar15 != '\0') {
        (*(uint *)(fr0_ - 0x32c)) = SUB84(dVar9,0);
        (*(uint *)(fr0_ - 0x328)) = uVar12;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2e8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_scale(ar7,&(*(uint *)(fr0_ - 0x32c)),ar5,uVar6); });
      puVar3 = ((undefined1 *)(fr0_ - 0x2e8));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2f8))); *(unsigned *)((((unsigned long)(fr0_ - 816)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 816)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x2d8)),puVar3,ar5,uVar6); });
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_normalize(((undefined1 *)(fr0_ - 0x2f8)),puVar3,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,(int)&(*(undefined8 *)(fr0_ - 0x30c)) + 4,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x30c)) + 4,0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f8)),0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2e8)),0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2d8)),0xffffffff,ar5,uVar6));
      (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c8)),0xffffffff,ar5,uVar6));
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      pcVar5 = ar5;
      if (*(int *)(unsigned)(ar4 + 0x284) < 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
      }
    }
  }
  else if (iVar1 == 3) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 816)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar2,pcVar5,uVar6));
    if (iVar1 == 1) {
      *(int *)(unsigned)(ar4 + 0x284) = *(int *)(unsigned)(ar4 + 0x284) + -1;
      if (*(int *)(unsigned)(ar4 + 0x284) < 1) {
        iVar7 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        iVar1 = ar4 + 0x80;
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x14,iVar1,pcVar5,uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x288) = 1;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 816)), rand(0x288,iVar1,pcVar5,uVar6));
        pcVar5 = ((void *)0x8c01031c);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 816)), libgcc_divide_helper_01031c(uVar6,10,((void *)0x8c01031c),uVar6));
        *(undefined4 *)(unsigned)(ar4 + 0x2f0) = uVar4;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 816)), Vec3_assign(ar4 + 0x80,ar7,pcVar5,uVar6));
      }
    }
  }
LAB_8c096760:
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x318))+4)) = iVar7;
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,pcVar5,uVar6));
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,pcVar5,uVar6));
  (vsp = ((unsigned long)(fr0_ - 816)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar5,uVar6));
  return (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x318))+4));
}

__asm__(".globl _FUN_8c095548\n.set _FUN_8c095548, _FUN_8c095548_def\n");
