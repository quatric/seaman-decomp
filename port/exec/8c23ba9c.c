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
undefined4 FUN_8c23ba9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ba9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  double *pdVar2;
  undefined4 in_fr0 = 0;
  float fVar3;
  double in_dr2 = 0;
  double dVar4;
  float fVar5;
  undefined4 in_fr5 = 0;
  double dVar6;
  double dVar7;
  double in_xd2 = 0;
  bool bVar8;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (*(undefined4 *)(unsigned)0x8c4aa554 != 0) {
    in_r0 = 8;
    iVar1 = *(undefined4 *)(unsigned)0x8c4ab27c;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa544,in_fr5);
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(iVar1 + 8));
    }
    else {
      dVar6 = *(undefined4 *)(unsigned)0x8c4aa544;
      in_xd2 = *(double *)(unsigned)(iVar1 + 8);
    }
    fVar3 = F32HI(dVar6);
    if (in_FPSCR_PR == '\0') {
      bVar8 = fVar3 < SUB84(in_dr2,0);
    }
    else {
      bVar8 = dVar6 < in_dr2;
    }
    if (bVar8) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 8),*(undefined4 *)(unsigned)0x8c4aa548);
      }
      else {
        dVar4 = *(double *)(unsigned)(iVar1 + 8);
        in_xd2 = *(undefined4 *)(unsigned)0x8c4aa548;
      }
      fVar5 = F32HI(dVar4);
      pdVar2 = (double *)(unsigned)*(undefined4 *)(unsigned)0x8c4ab278;
      if (in_FPSCR_PR != '\0' || SUB84(dVar4,0) <= fVar5) {
        fVar3 = 0.0;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar4 = CONCAT44D(fVar5,*(undefined4 *)(unsigned)(iVar1 + 8));
        }
        else {
          in_xd2 = *(double *)(unsigned)(iVar1 + 8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = F32LO(dVar4) - fVar3;
        }
        else {
          fVar3 = SUB84(dVar4 - dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa54c,fVar3);
        }
        else {
          dVar4 = *(undefined4 *)(unsigned)0x8c4aa54c;
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) * fVar3);
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
        fVar3 = -SUB84(dVar4,0);
        dVar7 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = CONCAT44D(fVar3,SUB84(dVar6,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar7 = CONCAT44D(F32HI(dVar7) + 1.0,SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + CONCAT44D(in_fr0,0x3f800000);
        }
        if (in_FPSCR_SZ == '\0') {
          fVar3 = *(float *)(unsigned)pdVar2;
        }
        else {
          in_xd2 = *pdVar2;
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = fVar3 * F32HI(dVar7);
        }
        else {
          fVar3 = SUB84(CONCAT44D((int)(D2U(dVar4) >> 0x20),fVar3) * dVar7,0);
        }
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)pdVar2 = fVar3;
      }
      else {
        *pdVar2 = in_xd2;
      }
    }
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c23ba9c\n.set _FUN_8c23ba9c, _FUN_8c23ba9c_def\n");
