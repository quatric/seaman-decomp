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
undefined4 FUN_8c23bae2_def(double *ar4,int ar5,float *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c23bae2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  double *pdVar1;
  undefined4 uVar2;
  double *ar4_00;
  undefined4 extraout_fr0 = 0;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined4 in_fr5 = 0;
  double dVar6;
  double dVar7;
  float fVar8;
  double in_xd2 = 0;
  double in_xd14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar8 = 0.0;
  *(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)(ar4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) = ar5;
  *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(ar6);
  *(float *)(unsigned)((int)ar4 + 0xc) = 0.0;
  *(float *)(unsigned)(ar4 + 1) = 0.0;
  *(float *)(unsigned)((int)ar4 + 4) = 0.0;
  *(float *)(unsigned)ar4 = 0.0;
  pdVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278);
  ar4_00 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 2;
  *(float *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278) + 0x1c) = 0.0;
  *(float *)(unsigned)(pdVar1 + 3) = 0.0;
  *(float *)(unsigned)((int)pdVar1 + 0x14) = 0.0;
  if (ar7 != 0) {
    (*(float *)(fr0_ - 0x20)) = -*((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280);
    (*(float *)(fr0_ - 0x1c)) = -((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[1];
    (*(float *)(fr0_ - 0x18)) = -((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab280)[2];
    *(unsigned *)0x8c4ab280 = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x20)));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c23ba42(ar4_00,ar5,ar6,ar7));
  if (cVar11 == '\0') {
    dVar4 = CONCAT44D(*(float *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
  }
  else {
    in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0));
    dVar4 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278);
  }
  if (cVar10 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) + F32LO(dVar4),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  fVar3 = F32HI(dVar4);
  if (cVar11 == '\0') {
    *(float *)(unsigned)*(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)(fVar3);
  }
  else {
    *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab278 = (unsigned)(dVar4);
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa554) != 0) {
    uVar2 = 8;
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa544),in_fr5);
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) + 8));
    }
    else {
      dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa548),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa544));
      in_xd2 = *(double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) + 8);
    }
    fVar3 = F32HI(dVar6);
    if (cVar10 == '\0') {
      bVar9 = fVar3 < SUB84(dVar4,0);
    }
    else {
      bVar9 = dVar6 < dVar4;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) + 8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa548));
      }
      else {
        dVar4 = *(double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) + 8);
        in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa54c),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa548));
      }
      fVar5 = F32HI(dVar4);
      if (cVar10 != '\0' || SUB84(dVar4,0) <= fVar5) {
        if (cVar11 == '\0') {
          *(float *)(unsigned)*(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)(fVar8);
        }
        else {
          *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab278 = (unsigned)(in_xd14);
        }
      }
      else {
        if (cVar11 == '\0') {
          dVar4 = CONCAT44D(fVar5,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) + 8));
        }
        else {
          in_xd2 = *(double *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4ab27c) + 8);
        }
        if (cVar10 == '\0') {
          fVar3 = F32LO(dVar4) - fVar3;
        }
        else {
          fVar3 = SUB84(dVar4 - dVar6,0);
        }
        if (cVar11 == '\0') {
          dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa54c),fVar3);
        }
        else {
          dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa550),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa54c));
        }
        if (cVar10 == '\0') {
          fVar8 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar8,F32LO(dVar4) * fVar8);
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
        fVar8 = -SUB84(dVar4,0);
        dVar7 = in_xd2;
        if (cVar11 == '\0') {
          dVar7 = CONCAT44D(fVar8,SUB84(dVar6,0));
        }
        if (cVar10 == '\0') {
          dVar7 = CONCAT44D(F32HI(dVar7) + 1.0,SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + CONCAT44D(extraout_fr0,0x3f800000);
        }
        if (cVar11 == '\0') {
          fVar8 = *(float *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278);
        }
        else {
          in_xd2 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4ab278);
        }
        if (cVar10 == '\0') {
          fVar8 = fVar8 * F32HI(dVar7);
        }
        else {
          fVar8 = SUB84(CONCAT44D((int)(D2U(dVar4) >> 0x20),fVar8) * dVar7,0);
        }
        if (cVar11 == '\0') {
          *(float *)(unsigned)*(unsigned *)0x8c4ab278 = (unsigned)(unsigned long)(fVar8);
        }
        else {
          *(unsigned *)(unsigned long)*(unsigned *)0x8c4ab278 = (unsigned)(in_xd2);
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c23bae2\n.set _FUN_8c23bae2, _FUN_8c23bae2_def\n");
