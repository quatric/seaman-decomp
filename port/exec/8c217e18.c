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
undefined4 FUN_8c217e18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c217e18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  double *pdVar1;
  float fVar2;
  double in_dr0 = 0;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar10;
  double dVar9;
  undefined4 in_fr9 = 0;
  double dVar11;
  undefined4 in_fr11 = 0;
  double dVar12;
  undefined8 in_xd0 = 0;
  undefined8 in_xd2 = 0;
  double in_xd4 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  float in_xf10 = 0;
  float in_xf11 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf14 = 0;
  float in_xf15 = 0;
  bool bVar13;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar3;
  
  if (in_FPSCR_SZ == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),*(undefined4 *)(unsigned)(ar4 + 0xc));
    fVar10 = *(float *)(unsigned)(ar4 + 0x10);
    pdVar1 = (double *)(unsigned)(ar4 + 0x14);
  }
  else {
    dVar6 = *(double *)(unsigned)(ar4 + 8);
    in_xd4 = *(double *)(unsigned)(ar4 + 0x10);
    fVar10 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x18) >> 0x20);
    pdVar1 = (double *)(unsigned)(ar4 + 0x20);
  }
  dVar9 = CONCAT44D(fVar10,0x3f800000);
                    
  if (in_FPSCR_PR == '\0') {
    fVar2 = F32LO(dVar6);
    fVar7 = F32HI(dVar6);
    fVar5 = (float)in_xd0 * fVar2 + F32LO(in_xd4) * fVar7 + (float)in_xd8 * 1.0 + in_xf12 * fVar10
    ;
    fVar5 = F32HI(in_xd0) * fVar2 + F32HI(in_xd4) * fVar7
            + F32HI(in_xd8) * 1.0 + in_xf13 * fVar10;
    fVar5 = (float)in_xd2 * fVar2 + in_xf6 * fVar7 + in_xf10 * 1.0 + in_xf14 * fVar10;
    fVar10 = F32HI(in_xd2) * fVar2 + in_xf7 * fVar7 + in_xf11 * 1.0 +
             in_xf15 * fVar10;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,in_fr9);
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4d8);
  }
  else {
    dVar11 = *pdVar1;
  }
  fVar5 = F32HI(dVar11);
  fVar10 = F32HI(dVar9);
  if (in_FPSCR_PR == '\0') {
    fVar2 = F32LO(in_dr0) + fVar5;
    dVar3 = (double)(ulonglong)(uint)fVar2;
    bVar13 = fVar2 < fVar10;
    dVar9 = CONCAT44D(fVar10 + fVar5,SUB84(dVar9,0));
  }
  else {
    dVar3 = in_dr0 + dVar11;
    bVar13 = dVar3 < dVar9;
    dVar9 = dVar9 + dVar11;
  }
  fVar10 = F32LO(dVar3);
  if (!bVar13) {
    if (in_FPSCR_SZ == '\0') {
      fVar10 = *(undefined4 *)(unsigned)0x8c4aa4d4;
    }
    fVar2 = F32HI(dVar9);
    if (in_FPSCR_PR == '\0') {
      bVar13 = fVar10 < fVar2;
      dVar9 = CONCAT44D(1.0 / fVar2,fVar10);
    }
    else {
      bVar13 = CONCAT44D(0x3f800000,fVar10) < dVar9;
      dVar9 = CONCAT44D(0x3f800000,fVar10) / dVar9;
    }
    if (bVar13) {
      if (in_FPSCR_SZ == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4a8);
        dVar3 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4dc,*(undefined4 *)(unsigned)0x8c4aa4e0);
      }
      else {
        dVar3 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      }
      fVar10 = F32LO(dVar9);
      if (in_FPSCR_PR == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) * fVar10,F32LO(dVar3) * fVar10)
        ;
      }
      else {
        dVar3 = dVar3 * dVar9 * dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = CONCAT44D(fVar5,((undefined1 *)(unsigned)3)[0x8c4aa4a8]);
        pdVar1 = (double *)(unsigned)(0x8c4aa4a8 + 4);
      }
      else {
        pdVar1 = (double *)(unsigned)(0x8c4aa4a8 + 5);
      }
      fVar5 = F32HI(dVar9);
      if (in_FPSCR_PR == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) * fVar5,SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 * dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar12 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,in_fr11);
      }
      else {
        dVar12 = *pdVar1;
      }
      if (in_FPSCR_PR == '\0') {
        dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),F32LO(dVar3) * fVar5);
      }
      else {
        dVar3 = dVar3 * dVar9;
      }
      uVar8 = (undefined4)(D2U(dVar6) >> 0x20);
      dVar9 = dVar6;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = CONCAT44D(uVar8,fVar10);
      }
      fVar5 = F32HI(dVar11);
      fVar10 = F32HI(dVar3);
      if (in_FPSCR_PR == '\0') {
        dVar9 = CONCAT44D((F32HI(dVar9) - fVar5) * fVar10,SUB84(dVar9,0)
                                );
      }
      else {
        dVar9 = (dVar9 - dVar11) * dVar3;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),((undefined1 *)(unsigned)2)[0x8c4aa4c4]);
      }
      if (in_FPSCR_PR == '\0') {
        dVar9 = CONCAT44D(F32HI(dVar9) + F32LO(dVar11),SUB84(dVar9,0))
        ;
      }
      else {
        dVar9 = dVar9 + dVar11;
      }
      dVar4 = dVar6;
      if (in_FPSCR_SZ == '\0') {
        dVar4 = CONCAT44D(uVar8,SUB84(dVar9,0));
      }
      if (in_FPSCR_PR == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) + fVar5,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 + dVar11;
      }
      if (in_FPSCR_PR != '\0' || F32HI(dVar9) <= SUB84(dVar9,0)) {
        if (in_FPSCR_SZ == '\0') {
          dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4c4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = CONCAT44D(fVar5,F32HI(dVar4) * fVar10 +
                                          SUB84(dVar11,0));
        }
        dVar9 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = CONCAT44D(SUB84(dVar6,0),SUB84(dVar4,0));
        }
        fVar10 = F32HI(dVar11);
        if (in_FPSCR_PR == '\0') {
          bVar13 = SUB84(dVar11,0) < SUB84(dVar9,0);
          dVar9 = CONCAT44D(F32HI(dVar9) - fVar10,SUB84(dVar9,0));
        }
        else {
          bVar13 = dVar11 < dVar9;
          dVar9 = dVar9 - dVar11;
        }
        if (!bVar13) {
          if (in_FPSCR_PR == '\0') {
            dVar9 = CONCAT44D(F32HI(dVar9) * F32LO(dVar3),
                                     SUB84(dVar9,0));
          }
          else {
            dVar9 = dVar9 * dVar3;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),((undefined1 *)(unsigned)3)[0x8c4aa4c4]);
          }
          fVar5 = F32HI(dVar12);
          if (in_FPSCR_PR == '\0') {
            dVar9 = CONCAT44D(F32HI(dVar9) + fVar5,SUB84(dVar9,0));
          }
          else {
            dVar9 = dVar9 + dVar12;
          }
          if (in_FPSCR_SZ == '\0') {
            in_xd4 = CONCAT44D(SUB84(dVar6,0),SUB84(dVar9,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar11 = CONCAT44D(F32HI(in_xd4) + fVar10,SUB84(in_xd4,0));
          }
          else {
            dVar11 = in_xd4 + dVar11;
          }
          if (in_FPSCR_PR != '\0' || F32HI(dVar9) <= SUB84(dVar9,0)) {
            if (in_FPSCR_SZ == '\0') {
              dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),((undefined1 *)(unsigned)1)[0x8c4aa4c4]);
            }
            if (in_FPSCR_PR == '\0') {
              bVar13 = F32HI(dVar11) * F32LO(dVar3) + fVar5 < SUB84(dVar11,0)
              ;
            }
            else {
              bVar13 = dVar12 < dVar11;
            }
            if (!bVar13) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c217e18\n.set _FUN_8c217e18, _FUN_8c217e18_def\n");
