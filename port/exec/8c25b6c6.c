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
undefined8 * FUN_8c25b6c6_def(undefined4 ar4,undefined4 ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25b6c6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *a4;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *a6;
  undefined4 *puVar8;
  undefined8 *puVar9;
  double in_dr2 = 0;
  float fVar10;
  double in_dr4 = 0;
  float fVar11;
  undefined8 in_dr14 = 0;
  undefined4 uVar13;
  double dVar12;
  undefined8 in_xd14 = 0;
  bool bVar14;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar3 = 0xe0000000;
  if (in_FPSCR_SZ == '\0') {
    puVar9 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x24)) + 4);
    (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x24)));
  }
  else {
    puVar9 = &(*(undefined8 *)(fr0_ - 0x24));
    (*(undefined8 *)(fr0_ - 0x24)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar9 + -4) = in_PR;
  uVar13 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  *(undefined4 *)(unsigned)((int)puVar9 + -0x14) = ar4;
  bVar2 = false;
  *(undefined4 *)(unsigned)((int)puVar9 + -0x18) = ar5;
  *(undefined4 *)(unsigned)((int)puVar9 + -8) = 1;
  iVar5 = *(int *)(unsigned)((int)puVar9 + -0x18);
  *(int *)(unsigned)((int)puVar9 + -0xc) = iVar5 + -1;
  *(undefined4 *)(unsigned)((int)puVar9 + -0x10) = 0;
  a4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar9 + -0x14));
  iVar6 = *(int *)(unsigned)((int)puVar9 + -8);
  *(int *)(unsigned)((int)puVar9 + -0x18) = *(int *)(unsigned)((int)puVar9 + -0x18) + -2;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4d4);
  }
  puVar8 = a4 + (iVar5 + -1) * 4;
  if (in_FPSCR_PR == '\0') {
    dVar12 = CONCAT44D(uVar13,1.0 / F32LO(in_dr2));
  }
  else {
    dVar12 = CONCAT44D(uVar13,0x3f800000) / in_dr2;
  }
  do {
    in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
    if (in_FPSCR_SZ == '\0') {
      in_dr4 = CONCAT44D(a4[1],SUB84(in_dr4,0));
    }
    else {
      in_dr4 = *(double *)(unsigned)(a4 + 1);
    }
    fVar10 = F32HI(in_dr4);
    if (in_FPSCR_PR == '\0') {
      bVar14 = 0.0 < fVar10;
    }
    else {
      bVar14 = in_dr2 < in_dr4;
    }
    a6 = (undefined4 *)(unsigned)(iVar6 * 0x10 + *(int *)(unsigned)((int)puVar9 + -0x14));
    bVar1 = false;
    fVar11 = F32LO(dVar12);
    if (bVar14) {
      if (in_FPSCR_PR == '\0') {
        bVar14 = fVar10 < fVar11;
      }
      else {
        bVar14 = in_dr4 < dVar12;
      }
      if (!bVar14) goto LAB_8c25b742;
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = (double)((ulonglong)(uint)puVar8[1] << 0x20);
      }
      else {
        in_dr2 = *(double *)(unsigned)(puVar8 + 1);
      }
      fVar10 = F32HI(in_dr2);
      if (in_FPSCR_PR != '\0' || fVar10 <= SUB84(in_dr2,0)) goto LAB_8c25b742;
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = CONCAT44D(fVar10,puVar8[1]);
      }
      if (in_FPSCR_PR == '\0') {
        bVar14 = SUB84(in_dr2,0) < fVar11;
      }
      else {
        bVar14 = in_dr2 < dVar12;
      }
      if (!bVar14) goto LAB_8c25b742;
      if (in_FPSCR_SZ == '\0') {
        fVar10 = (float)a6[1];
      }
      else {
        fVar10 = (float)((ulonglong)*(undefined8 *)(unsigned)(a6 + 1) >> 0x20);
      }
      in_dr2 = (double)((ulonglong)(uint)fVar10 << 0x20);
      if (in_FPSCR_PR != '\0' || fVar10 <= 0.0) goto LAB_8c25b742;
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = CONCAT44D(fVar10,a6[1]);
      }
      if (in_FPSCR_PR == '\0') {
        bVar14 = SUB84(in_dr2,0) < fVar11;
      }
      else {
        bVar14 = in_dr2 < dVar12;
      }
      if (!bVar14) goto LAB_8c25b742;
    }
    else {
LAB_8c25b742:
      bVar1 = true;
    }
    uVar13 = (undefined4)((ulonglong)in_dr2 >> 0x20);
    if (bVar1) {
      if (bVar2) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *puVar8;
        uVar4 = 0xf0000000;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar8[1];
          *(undefined4 *)(unsigned)(ar6 + 1) = puVar8[2];
          in_dr2 = CONCAT44D(uVar13,puVar8[3]);
          puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar7 = puVar8[3];
        }
        else {
          ar6[1] = *(undefined8 *)(unsigned)(puVar8 + 1);
          *ar6 = *(undefined8 *)(unsigned)(puVar8 + 2);
          puVar7 = ar6 + -1;
          *puVar7 = *(undefined8 *)(unsigned)(puVar8 + 3);
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar4;
        bVar2 = false;
        ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      }
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D(a4[1],SUB84(in_dr4,0));
      }
      else {
        in_dr4 = *(double *)(unsigned)(a4 + 1);
      }
      fVar10 = F32HI(in_dr4);
      if (in_FPSCR_PR == '\0') {
        bVar14 = 0.0 < fVar10;
      }
      else {
        bVar14 = in_dr2 < in_dr4;
      }
      if (bVar14) {
        if (in_FPSCR_PR == '\0') {
          bVar14 = fVar10 < fVar11;
        }
        else {
          bVar14 = in_dr4 < dVar12;
        }
        if (!bVar14) goto LAB_8c25b7c2;
LAB_8c25b7de:
        ar6 = (undefined8 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25b858(a4,puVar8,a6,ar6));
      }
      else {
LAB_8c25b7c2:
        if (in_FPSCR_SZ == '\0') {
          fVar10 = (float)(uint)puVar8[1];
        }
        else {
          fVar10 = (float)((ulonglong)*(undefined8 *)(unsigned)(puVar8 + 1) >> 0x20);
        }
        if (in_FPSCR_PR == '\0' && 0.0 < fVar10) {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)((ulonglong)(uint)puVar8[1] << 0x20);
          }
          else {
            in_dr2 = *(double *)(unsigned)(puVar8 + 1);
          }
          if (in_FPSCR_PR == '\0') {
            bVar14 = F32HI(in_dr2) < fVar11;
          }
          else {
            bVar14 = in_dr2 < dVar12;
          }
          if (bVar14) goto LAB_8c25b7de;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar10 = (float)a6[1];
        }
        else {
          fVar10 = (float)((ulonglong)*(undefined8 *)(unsigned)(a6 + 1) >> 0x20);
        }
        in_dr2 = (double)((ulonglong)(uint)fVar10 << 0x20);
        if (in_FPSCR_PR == '\0' && 0.0 < fVar10) {
          if (in_FPSCR_SZ == '\0') {
            in_dr2 = (double)((ulonglong)(uint)a6[1] << 0x20);
          }
          else {
            in_dr2 = *(double *)(unsigned)(a6 + 1);
          }
          if (in_FPSCR_PR == '\0') {
            bVar14 = F32HI(in_dr2) < fVar11;
          }
          else {
            bVar14 = in_dr2 < dVar12;
          }
          if (bVar14) goto LAB_8c25b7de;
        }
      }
    }
    else {
      if (!bVar2) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *a4;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = a4[1];
          *(undefined4 *)(unsigned)(ar6 + 1) = a4[2];
          in_dr2 = CONCAT44D(uVar13,a4[3]);
          puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar7 = a4[3];
        }
        else {
          ar6[1] = *(undefined8 *)(unsigned)(a4 + 1);
          *ar6 = *(undefined8 *)(unsigned)(a4 + 2);
          puVar7 = ar6 + -1;
          *puVar7 = *(undefined8 *)(unsigned)(a4 + 3);
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar3;
        bVar2 = true;
        ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      }
      *(undefined4 *)(unsigned)(ar6 + 3) = *puVar8;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar6 + 0xc) = puVar8[1];
        *(undefined4 *)(unsigned)(ar6 + 1) = puVar8[2];
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),puVar8[3]);
        puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
        *(undefined4 *)(unsigned)puVar7 = puVar8[3];
      }
      else {
        ar6[1] = *(undefined8 *)(unsigned)(puVar8 + 1);
        *ar6 = *(undefined8 *)(unsigned)(puVar8 + 2);
        puVar7 = ar6 + -1;
        *puVar7 = *(undefined8 *)(unsigned)(puVar8 + 3);
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar3;
      ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
    }
    iVar5 = *(int *)(unsigned)((int)puVar9 + -0x10);
    *(uint *)(unsigned)((int)puVar9 + -0x10) = iVar5 + 1U;
    if ((iVar5 + 1U & 1) == 0) {
      iVar6 = *(int *)(unsigned)((int)puVar9 + -8) + 1;
      *(int *)(unsigned)((int)puVar9 + -8) = iVar6;
    }
    else {
      iVar6 = *(int *)(unsigned)((int)puVar9 + -0xc) + -1;
      *(int *)(unsigned)((int)puVar9 + -0xc) = iVar6;
    }
    iVar5 = *(int *)(unsigned)((int)puVar9 + -0x18);
    *(int *)(unsigned)((int)puVar9 + -0x18) = iVar5 + -1;
    a4 = puVar8;
    puVar8 = a6;
    if (iVar5 + -1 < 1) {
      if (bVar2) {
        *(undefined4 *)(unsigned)(ar6 + 3) = *a6;
        uVar3 = 0xf0000000;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)ar6 + 0xc) = a6[1];
          *(undefined4 *)(unsigned)(ar6 + 1) = a6[2];
          puVar7 = (undefined8 *)(unsigned)((int)ar6 + 4);
          *(undefined4 *)(unsigned)puVar7 = a6[3];
        }
        else {
          ar6[1] = *(undefined8 *)(unsigned)(a6 + 1);
          *ar6 = *(undefined8 *)(unsigned)(a6 + 2);
          puVar7 = ar6 + -1;
          *puVar7 = *(undefined8 *)(unsigned)(a6 + 3);
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar3;
        ar6 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      }
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25b6c6\n.set _FUN_8c25b6c6, _FUN_8c25b6c6_def\n");
