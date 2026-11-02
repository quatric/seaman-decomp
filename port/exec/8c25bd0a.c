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
undefined8 * FUN_8c25bd0a_def(undefined4 ar4,undefined4 ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25bd0a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *a4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *a6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  double in_dr2 = 0;
  float fVar9;
  double in_dr4 = 0;
  float fVar10;
  undefined8 in_dr14 = 0;
  undefined4 uVar12;
  double dVar11;
  undefined8 in_xd14 = 0;
  bool bVar13;
  bool bVar14;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar2 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    puVar8 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x24)) + 4);
    (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x24)));
  }
  else {
    puVar8 = &(*(undefined8 *)(fr0_ - 0x24));
    (*(undefined8 *)(fr0_ - 0x24)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar8 + -4) = in_PR;
  *(undefined4 *)(unsigned)((int)puVar8 + -0x14) = ar4;
  uVar12 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  *(undefined4 *)(unsigned)((int)puVar8 + -0x18) = ar5;
  bVar1 = false;
  *(undefined4 *)(unsigned)((int)puVar8 + -8) = 1;
  iVar4 = *(int *)(unsigned)((int)puVar8 + -0x18);
  *(int *)(unsigned)((int)puVar8 + -0xc) = iVar4 + -1;
  *(undefined4 *)(unsigned)((int)puVar8 + -0x10) = 0;
  a4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar8 + -0x14));
  iVar5 = *(int *)(unsigned)((int)puVar8 + -8);
  *(int *)(unsigned)((int)puVar8 + -0x18) = *(int *)(unsigned)((int)puVar8 + -0x18) + -2;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4d4);
  }
  puVar7 = a4 + (iVar4 + -1) * 6;
  if (in_FPSCR_PR == '\0') {
    dVar11 = CONCAT44D(uVar12,1.0 / F32LO(in_dr2));
  }
  else {
    dVar11 = CONCAT44D(uVar12,0x3f800000) / in_dr2;
  }
  do {
    in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = CONCAT44D(a4[3],SUB84(in_dr4,0));
    }
    else {
      in_dr4 = *(double *)(unsigned)(a4 + 3);
    }
    bVar14 = false;
    fVar9 = F32HI(in_dr4);
    if (in_FPSCR_PR == '\0') {
      bVar13 = 0.0 < fVar9;
    }
    else {
      bVar13 = in_dr2 < in_dr4;
    }
    a6 = (undefined4 *)(unsigned)(iVar5 * 0x18 + *(int *)(unsigned)((int)puVar8 + -0x14));
    fVar10 = F32LO(dVar11);
    if (bVar13) {
      if (in_FPSCR_PR == '\0') {
        bVar13 = fVar9 < fVar10;
      }
      else {
        bVar13 = in_dr4 < dVar11;
      }
      if (!bVar13) goto LAB_8c25bd92;
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)((ulonglong)(uint)puVar7[3] << 0x20);
      }
      else {
        in_dr2 = *(double *)(unsigned)(puVar7 + 3);
      }
      fVar9 = F32HI(in_dr2);
      if (in_FPSCR_PR != '\0' || fVar9 <= SUB84(in_dr2,0)) goto LAB_8c25bd92;
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = CONCAT44D(fVar9,puVar7[3]);
      }
      if (in_FPSCR_PR == '\0') {
        bVar13 = SUB84(in_dr2,0) < fVar10;
      }
      else {
        bVar13 = in_dr2 < dVar11;
      }
      if (!bVar13) goto LAB_8c25bd92;
      if (in_FPSCR_SZ == '\0') {
        fVar9 = (float)a6[3];
      }
      else {
        fVar9 = (float)((ulonglong)*(undefined8 *)(unsigned)(a6 + 3) >> 0x20);
      }
      in_dr2 = (double)((ulonglong)(uint)fVar9 << 0x20);
      if (in_FPSCR_PR != '\0' || fVar9 <= 0.0) goto LAB_8c25bd92;
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = CONCAT44D(fVar9,a6[3]);
      }
      if (in_FPSCR_PR == '\0') {
        bVar13 = SUB84(in_dr2,0) < fVar10;
      }
      else {
        bVar13 = in_dr2 < dVar11;
      }
      if (!bVar13) goto LAB_8c25bd92;
    }
    else {
LAB_8c25bd92:
      bVar14 = true;
    }
    uVar12 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if (bVar14) {
      if (bVar1) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *puVar7;
        uVar3 = 0xf0000000;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0x14) = puVar7[1];
          *(undefined4 *)(unsigned)(ar6 + 2) = puVar7[2];
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar7[3];
          *(undefined4 *)(unsigned)(ar6 + 1) = puVar7[4];
          in_dr2 = CONCAT44D(uVar12,puVar7[5]);
          puVar6 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar6 = puVar7[5];
        }
        else {
          ar6[2] = *(undefined8 *)(unsigned)(puVar7 + 1);
          ar6[1] = *(undefined8 *)(unsigned)(puVar7 + 2);
          *ar6 = *(undefined8 *)(unsigned)(puVar7 + 3);
          ar6[-1] = *(undefined8 *)(unsigned)(puVar7 + 4);
          puVar6 = ar6 + -2;
          *puVar6 = *(undefined8 *)(unsigned)(puVar7 + 5);
        }
        *(undefined4 *)(unsigned)((int)puVar6 + -4) = uVar3;
        bVar1 = false;
        ar6 = (undefined8 *)(unsigned)((int)puVar6 + 0x1c);
      }
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D(a4[3],SUB84(in_dr4,0));
      }
      else {
        in_dr4 = *(double *)(unsigned)(a4 + 3);
      }
      fVar9 = F32HI(in_dr4);
      if (in_FPSCR_PR == '\0') {
        bVar14 = 0.0 < fVar9;
      }
      else {
        bVar14 = in_dr2 < in_dr4;
      }
      if (bVar14) {
        if (in_FPSCR_PR == '\0') {
          bVar14 = fVar9 < fVar10;
        }
        else {
          bVar14 = in_dr4 < dVar11;
        }
        if (!bVar14) goto LAB_8c25be34;
LAB_8c25be50:
        ar6 = (undefined8 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25bed8(a4,puVar7,a6,ar6));
      }
      else {
LAB_8c25be34:
        if (in_FPSCR_SZ == '\0') {
          fVar9 = (float)(uint)puVar7[3];
        }
        else {
          fVar9 = (float)((ulonglong)*(undefined8 *)(unsigned)(puVar7 + 3) >> 0x20);
        }
        if (in_FPSCR_PR == '\0' && 0.0 < fVar9) {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)((ulonglong)(uint)puVar7[3] << 0x20);
          }
          else {
            in_dr2 = *(double *)(unsigned)(puVar7 + 3);
          }
          if (in_FPSCR_PR == '\0') {
            bVar14 = F32HI(in_dr2) < fVar10;
          }
          else {
            bVar14 = in_dr2 < dVar11;
          }
          if (bVar14) goto LAB_8c25be50;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar9 = (float)a6[3];
        }
        else {
          fVar9 = (float)((ulonglong)*(undefined8 *)(unsigned)(a6 + 3) >> 0x20);
        }
        in_dr2 = (double)((ulonglong)(uint)fVar9 << 0x20);
        if (in_FPSCR_PR == '\0' && 0.0 < fVar9) {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)((ulonglong)(uint)a6[3] << 0x20);
          }
          else {
            in_dr2 = *(double *)(unsigned)(a6 + 3);
          }
          if (in_FPSCR_PR == '\0') {
            bVar14 = F32HI(in_dr2) < fVar10;
          }
          else {
            bVar14 = in_dr2 < dVar11;
          }
          if (bVar14) goto LAB_8c25be50;
        }
      }
    }
    else {
      if (!bVar1) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *a4;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0x14) = a4[1];
          *(undefined4 *)(unsigned)(ar6 + 2) = a4[2];
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = a4[3];
          *(undefined4 *)(unsigned)(ar6 + 1) = a4[4];
          in_dr2 = CONCAT44D(uVar12,a4[5]);
          puVar6 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar6 = a4[5];
        }
        else {
          ar6[2] = *(undefined8 *)(unsigned)(a4 + 1);
          ar6[1] = *(undefined8 *)(unsigned)(a4 + 2);
          *ar6 = *(undefined8 *)(unsigned)(a4 + 3);
          ar6[-1] = *(undefined8 *)(unsigned)(a4 + 4);
          puVar6 = ar6 + -2;
          *puVar6 = *(undefined8 *)(unsigned)(a4 + 5);
        }
        *(undefined4 *)(unsigned)((int)puVar6 + -4) = uVar2;
        bVar1 = true;
        ar6 = (undefined8 *)(unsigned)((int)puVar6 + 0x1c);
      }
      *(undefined4 *)(unsigned)(ar6 + 3) = *puVar7;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar6 + 0x14) = puVar7[1];
        *(undefined4 *)(unsigned)(ar6 + 2) = puVar7[2];
        *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar7[3];
        *(undefined4 *)(unsigned)(ar6 + 1) = puVar7[4];
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),puVar7[5]);
        puVar6 = (undefined8 *)(unsigned)((int)ar6 + 4);
        *(undefined4 *)(unsigned)puVar6 = puVar7[5];
      }
      else {
        ar6[2] = *(undefined8 *)(unsigned)(puVar7 + 1);
        ar6[1] = *(undefined8 *)(unsigned)(puVar7 + 2);
        *ar6 = *(undefined8 *)(unsigned)(puVar7 + 3);
        ar6[-1] = *(undefined8 *)(unsigned)(puVar7 + 4);
        puVar6 = ar6 + -2;
        *puVar6 = *(undefined8 *)(unsigned)(puVar7 + 5);
      }
      *(undefined4 *)(unsigned)((int)puVar6 + -4) = uVar2;
      ar6 = (undefined8 *)(unsigned)((int)puVar6 + 0x1c);
    }
    iVar4 = *(int *)(unsigned)((int)puVar8 + -0x10);
    *(uint *)(unsigned)((int)puVar8 + -0x10) = iVar4 + 1U;
    if ((iVar4 + 1U & 1) == 0) {
      iVar5 = *(int *)(unsigned)((int)puVar8 + -8) + 1;
      *(int *)(unsigned)((int)puVar8 + -8) = iVar5;
    }
    else {
      iVar5 = *(int *)(unsigned)((int)puVar8 + -0xc) + -1;
      *(int *)(unsigned)((int)puVar8 + -0xc) = iVar5;
    }
    iVar4 = *(int *)(unsigned)((int)puVar8 + -0x18);
    *(int *)(unsigned)((int)puVar8 + -0x18) = iVar4 + -1;
    a4 = puVar7;
    puVar7 = a6;
    if (iVar4 + -1 < 1) {
      if (bVar1) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *a6;
        uVar2 = 0xf0000000;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0x14) = a6[1];
          *(undefined4 *)(unsigned)(ar6 + 2) = a6[2];
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = a6[3];
          *(undefined4 *)(unsigned)(ar6 + 1) = a6[4];
          puVar6 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar6 = a6[5];
        }
        else {
          ar6[2] = *(undefined8 *)(unsigned)(a6 + 1);
          ar6[1] = *(undefined8 *)(unsigned)(a6 + 2);
          *ar6 = *(undefined8 *)(unsigned)(a6 + 3);
          ar6[-1] = *(undefined8 *)(unsigned)(a6 + 4);
          puVar6 = ar6 + -2;
          *puVar6 = *(undefined8 *)(unsigned)(a6 + 5);
        }
        *(undefined4 *)(unsigned)((int)puVar6 + -4) = uVar2;
        ar6 = (undefined8 *)(unsigned)((int)puVar6 + 0x1c);
      }
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25bd0a\n.set _FUN_8c25bd0a, _FUN_8c25bd0a_def\n");
