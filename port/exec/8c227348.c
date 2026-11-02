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
int FUN_8c227348_def(short *ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c227348";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float in_fr1 = 0;
  float fVar12;
  undefined8 in_dr4 = 0;
  undefined4 uVar13;
  float fVar14;
  float in_fr7 = 0;
  float fVar15;
  float in_fr11 = 0;
  
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar6 = (int)*ar4;
    psVar5 = ar4 + 2;
    uVar13 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    in_dr4 = CONCAT44(uVar13,0x3f800000);
    if ((uVar1 & 0x80000000) != 0) {
      in_dr4 = CONCAT44(uVar13,0xbf800000);
    }
    pfVar7 = (float *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),-(float)in_dr4);
    }
    ar4 = ar4 + 3;
    iVar4 = iVar4 + iVar6;
    iVar6 = iVar6 + -2;
    iVar11 = 0;
    pfVar8 = (float *)(unsigned)(*psVar5 * 0x20 + ar5);
    do {
      pfVar10 = (float *)(unsigned)(*ar4 * 0x20 + ar5);
      in_fr11 = in_fr11 - in_fr7;
      pfVar9 = pfVar8 + -2;
      in_fr7 = ((in_fr7 - in_fr1) * (pfVar10[1] - pfVar8[1]) - (pfVar8[1] - pfVar7[1]) * in_fr11) *
               (float)in_dr4;
      fVar14 = F32HI(in_dr4);
      in_dr4 = CONCAT44(fVar14,-(float)in_dr4);
      if (0.0 <= in_fr7) {
        pfVar7 = pfVar9;
        if (iVar11 != 0) {
          fVar12 = *pfVar9;
          fVar15 = *pfVar8;
          pfVar7 = pfVar8 + -5;
          *(float *)(unsigned)(ar7 + 0xc) = pfVar8[-1];
          *(float *)(unsigned)(ar7 + 8) = fVar12;
          fVar12 = fVar15 + fVar14;
          if (fVar15 + fVar14 < fVar14) {
            fVar12 = fVar14;
          }
          iVar3 = iVar3 + iVar11 + 1;
          *(float *)(unsigned)(ar7 + 8) = -1.5845633e+29;
          iVar11 = 0;
          *(float *)(unsigned)(ar7 + 0x20) = fVar12;
          ar7 = ar7 + 0x28;
        }
      }
      else {
        if (iVar11 == 0) {
          fVar12 = pfVar7[-2];
          iVar11 = 1;
          fVar15 = *pfVar7;
          *(float *)(unsigned)(ar7 + 0xc) = pfVar7[-1];
          *(float *)(unsigned)(ar7 + 8) = fVar12;
          fVar12 = fVar15 + fVar14;
          if (fVar15 + fVar14 < fVar14) {
            fVar12 = fVar14;
          }
          *(float *)(unsigned)(ar7 + 8) = -3.689349e+19;
          *(float *)(unsigned)(ar7 + 0x20) = fVar12;
          ar7 = ar7 + 0x28;
        }
        fVar12 = *pfVar9;
        iVar11 = iVar11 + 1;
        fVar15 = *pfVar8;
        *(float *)(unsigned)(ar7 + 0xc) = pfVar8[-1];
        *(float *)(unsigned)(ar7 + 8) = fVar12;
        fVar12 = fVar15 + fVar14;
        if (fVar15 + fVar14 < fVar14) {
          fVar12 = fVar14;
        }
        *(float *)(unsigned)(ar7 + 8) = -3.689349e+19;
        *(float *)(unsigned)(ar7 + 0x20) = fVar12;
        ar7 = ar7 + 0x28;
        pfVar7 = pfVar8 + -5;
      }
      iVar6 = iVar6 + -1;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      pfVar8 = pfVar10 + -2;
    } while (iVar6 != 0);
    if (iVar11 != 0) {
      fVar12 = pfVar10[-2];
      fVar15 = *pfVar10;
      *(float *)(unsigned)(ar7 + 0xc) = pfVar10[-1];
      *(float *)(unsigned)(ar7 + 8) = fVar12;
      fVar12 = fVar15 + fVar14;
      if (fVar15 + fVar14 < fVar14) {
        fVar12 = fVar14;
      }
      iVar3 = iVar3 + iVar11 + 1;
      *(float *)(unsigned)(ar7 + 8) = -1.5845633e+29;
      *(float *)(unsigned)(ar7 + 0x20) = fVar12;
      ar7 = ar7 + 0x28;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c227348\n.set _FUN_8c227348, _FUN_8c227348_def\n");
