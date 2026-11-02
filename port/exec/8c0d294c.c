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
undefined4 FUN_8c0d294c_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d294c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *puVar3;
  float fVar4;
  double in_dr0 = 0;
  code *pcVar6;
  double dVar5;
  undefined8 in_dr4 = 0;
  float fVar7;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  fVar7 = F32HI(in_dr4);
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  ar5_00 = ar4 + 0x18;
  puVar3 = ar4;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023aa0(ar4,ar5_00,ar6,ar7));
  fVar4 = F32LO(in_dr0);
  iVar1 = *(int *)(unsigned)(ar4 + 0x74);
  if (iVar1 == 0) {
    puVar3 = ar4 + 0x28;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023aa0(ar4 + 0x18,puVar3,ar6,ar7));
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x28);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(unsigned)(ar4 + 0x18);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x18);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x18) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 != '\0' || 0.0 <= fVar4) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x30);
      }
      if (cVar9 == '\0' && 0.0 < fVar4) {
        if (cVar10 == '\0') {
          fVar4 = *(float *)(unsigned)(ar4 + 0x20);
        }
        if (cVar9 == '\0' && 0.0 < fVar4) {
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
    else {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x20);
      }
      if (cVar9 == '\0' && fVar4 < 0.0) {
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x20) = (ulonglong)(uint)fVar4;
        }
      }
    }
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x18);
    }
    in_dr0 = (double)(ulonglong)(uint)fVar4;
    if (fVar4 == 0.0) {
      if (cVar10 == '\0') {
        fVar4 = *(float *)(unsigned)(ar4 + 0x20);
      }
      in_dr0 = (double)(ulonglong)(uint)fVar4;
      if (fVar4 == 0.0) {
        if (cVar10 == '\0') {
          in_dr0 = CONCAT44D(0x41126666,*(undefined4 *)(unsigned)(ar4 + 0x10));
        }
        else {
          in_dr0 = -7.947556305225132e-251;
        }
        if (cVar9 == '\0' && SUB84(in_dr0,0) < F32HI(in_dr0)) {
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x18) = *(undefined4 *)(unsigned)(ar4 + 0x38);
            in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x18) = *(undefined8 *)(unsigned)(ar4 + 0x38);
            in_dr0 = *(double *)(unsigned)(ar4 + 0x40);
          }
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c023570(ar4 + 0x18,puVar3,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x18,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
        }
        *(undefined4 *)(unsigned)(ar4 + 0x74) = 1;
      }
    }
  }
  else if (iVar1 == 1) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x10);
      pcVar6 = (code *)0x41126666;
    }
    else {
      fVar4 = 9.15;
      pcVar6 = ((void *)0x8c023570);
    }
    if (cVar9 == '\0' && fVar4 < (float)(uint)pcVar6) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x3c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c023570(ar4 + 0x18,ar5_00,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(ar4 + 0x18,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7));
      ar5_00 = (undefined1 *)(unsigned)0xffffffff;
      puVar3 = ((undefined1 *)(fr0_ - 0x3c));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(puVar3,0xffffffff,ar6,ar7));
    }
    if (cVar10 == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),fVar4);
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 4);
    }
    if (cVar9 == '\0') {
      bVar8 = F32HI(in_dr0) < fVar7;
    }
    else {
      bVar8 = in_dr0 < CONCAT44D(in_fr14,fVar7);
    }
    if (!bVar8) {
      *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), rand(puVar3,ar5_00,ar6,ar7));
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47000000,(float)iVar1);
      }
      else {
        dVar5 = 1099511918592.0;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x42700000,fVar4);
      }
      else {
        dVar5 = 3.966050706335591e+20;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
        iVar1 = (int)fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
        iVar1 = (int)(dVar5 * dVar5);
      }
      *(int *)(unsigned)(ar4 + 0x78) = iVar1 + 0xf;
      if (cVar10 != '\0') {
        fVar4 = 1072.5;
      }
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c022d04(&(*(undefined4 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(&(*(undefined4 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); Vec3_scale(uVar2,((undefined1 *)(unsigned)0x8c13f478),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      if (cVar10 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x18) = (*(undefined4 *)(fr0_ - 0x1c));
        in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),fVar4);
        *(undefined4 *)(unsigned)(ar4 + 0x20) = (*(undefined4 *)(fr0_ - 0x14));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x18) = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
        in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
        *(double *)(unsigned)(ar4 + 0x20) = in_dr0;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x74) = 2;
    }
  }
  else if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x78) < *(int *)(unsigned)(ar4 + 0x7c))) {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d2f14(ar4,ar5_00,ar6,ar7));
  }
  uVar2 = SUB84(in_dr0,0);
  *(int *)(unsigned)(ar4 + 0x7c) = *(int *)(unsigned)(ar4 + 0x7c) + 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x7c),3,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 0x80), *(int *)(unsigned)(ar4 + 0x80) = iVar1 + 1, 3 < iVar1 + 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x80) = 0;
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),uVar2);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 4);
  }
  if (cVar9 == '\0') {
    bVar8 = F32HI(dVar5) < fVar7;
  }
  else {
    bVar8 = dVar5 < CONCAT44D(in_fr14,fVar7);
  }
  if (!bVar8) {
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 4) = fVar7;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 4) = in_xd14;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d294c\n.set _FUN_8c0d294c, _FUN_8c0d294c_def\n");
