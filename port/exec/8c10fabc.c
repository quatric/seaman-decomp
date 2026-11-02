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
undefined4 FUN_8c10fabc_def(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fabc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  double *ar4_00;
  uint *puVar3;
  int *ar6_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r13 = 0;
  double *pdVar7;
  int unaff_r14 = 0;
  undefined1 *puVar8;
  longlong in_dr0 = 0;
  float fVar9;
  float fVar11;
  ulonglong uVar10;
  undefined4 uVar12;
  double in_dr4 = 0;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 in_dr14 = 0;
  float fVar17;
  longlong lVar16;
  undefined8 in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  char cVar18;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x1c)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = ((undefined1 *)(fr0_ - 0x20));
  }
  else {
    puVar8 = ((undefined1 *)(fr0_ - 0x2c));
    (*(undefined8 *)(fr0_ - 0x1c)) = in_xd14;
  }
  *(undefined4 *)(unsigned)(puVar8 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unsigned)(unaff_r14 + 0x4c);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)(unaff_r14 + 0x4c) >> 0x20);
  }
  fVar9 = (float)*(int *)(unsigned)(ain0 + unaff_r14);
  dVar13 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  fVar17 = F32HI(dVar13);
  if (in_FPSCR_PR != '\0' || fVar11 <= fVar9) {
    if (in_FPSCR_SZ == '\0') {
      fVar9 = *(float *)(unsigned)(unaff_r14 + 0x4c);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(unaff_r14 + 0x4c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = fVar9 + fVar17;
    }
    else {
      fVar9 = SUB84(CONCAT44D(fVar11,fVar9) + dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(unaff_r14 + 0x4c) = fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(unaff_r14 + 0x4c) = in_xd2;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unsigned)(unaff_r14 + 0x54);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)(unaff_r14 + 0x54) >> 0x20);
  }
  *(float *)(unsigned)(unaff_r14 + 0x54) = fVar11 + fVar17;
  if (*(int *)(unsigned)(unaff_r14 + 0x50) < *(int *)(unsigned)(unaff_r14 + 0x84)) {
    *(int *)(unsigned)(unaff_r14 + 0x50) = *(int *)(unsigned)(unaff_r14 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar10 = CONCAT44(fVar11 + fVar17,(float)*(int *)(unsigned)(unaff_r14 + 0x50));
  lVar16 = (ulonglong)(uint)fVar17 << 0x20;
  uVar15 = (ulonglong)(uint)(1.0 / (float)*(int *)(unsigned)(unaff_r14 + 0x50));
  pdVar7 = (double *)(unsigned)(unaff_r13 + *(int *)(unsigned)(unaff_r14 + 0x74) * 4);
  if (*(int *)(unsigned)(unaff_r14 + 0x78) != 0) {
    do {
      cVar18 = '\0';
      uVar12 = SUB84(in_dr4,0);
      if (*(char *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = ((uint *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x60));
        ar4_00 = (double *)(unsigned)
                 ((int)pdVar7 + *(int *)(unsigned)(unaff_r14 + 0x74) * -4 + *(int *)(unsigned)(unaff_r14 + 0x70) * 4);
        dVar13 = 1.4044474254567505e+306;
        iVar4 = 0;
        dVar14 = dVar13;
        if (*(char *)(unsigned)(unaff_r14 + 0x59) != '\0') {
          do {
            ar5 = pdVar7;
            dVar13 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = CONCAT44D((int)lVar16,SUB84(in_dr4,0));
            }
            for (; in_dr4 = dVar13, ar5 < ar4_00; ar5 = (double *)(unsigned)((int)ar5 + 4)) {
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)ar5);
              }
              else {
                in_xd4 = *ar5;
              }
              cVar18 = '\0';
              fVar11 = F32LO(in_dr4) - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + F32HI(in_dr4);
              in_dr4 = CONCAT44D(fVar9,fVar11);
              if (F32HI(dVar14) < fVar9) break;
              puVar3 = puVar3 + 1;
              dVar13 = in_dr4;
              cVar18 = '\0';
            }
            if (ar5 == ar4_00) {
              iVar5 = iVar4;
              dVar13 = in_dr4;
              if (cVar18 == '\0') {
                dVar13 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar14,0));
              }
            }
            else {
              iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_010468((int)ar4_00 - (int)ar5,4,vr6,vr7));
              puVar3 = puVar3 + iVar2;
              dVar13 = dVar14;
            }
            uVar12 = SUB84(in_dr4,0);
            iVar4 = iVar4 + 1;
            dVar14 = dVar13;
          } while (iVar4 < (int)(uint)*(byte *)(unsigned)(unaff_r14 + 0x59));
        }
        fVar11 = F32HI(in_dr0);
        in_dr4 = in_xd6;
        if (cVar18 == '\0') {
          in_dr4 = CONCAT44D(SUB84(dVar13,0),uVar12);
        }
        ar6_00 = (int *)(unsigned)((uint)*(byte *)(unsigned)(unaff_r14 + 0x5a) * iVar5 * 4 + *(int *)(unsigned)(unaff_r14 + 100));
        iVar5 = 0;
        if (*(char *)(unsigned)(unaff_r14 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(unsigned)(*ar6_00 * 4 + *(int *)(unsigned)(unaff_r14 + 0x68));
            ar5 = pdVar7;
            dVar13 = in_dr4;
            cVar1 = cVar18;
            dVar14 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)lVar16);
              dVar14 = in_xd4;
            }
            do {
              in_xd4 = dVar14;
              cVar18 = cVar1;
              if (ar4_00 <= ar5) break;
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                puVar3 = puVar3 + 1;
                fVar11 = *(float *)(unsigned)ar5;
                ar5 = (double *)(unsigned)((int)ar5 + 4);
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*ar5 >> 0x20);
                ar5 = ar5 + 1;
              }
              cVar18 = '\0';
              fVar11 = fVar11 - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = F32HI(dVar13);
              fVar11 = fVar11 * fVar11 + F32LO(dVar13);
              dVar13 = CONCAT44D(fVar9,fVar11);
              cVar1 = '\0';
              dVar14 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = F32HI(in_dr0);
            ar6_00 = ar6_00 + 1;
            in_dr4 = dVar13;
            if ((ar5 == ar4_00) && (in_dr4 = in_xd4, cVar18 == '\0')) {
              in_dr4 = CONCAT44D(SUB84(dVar13,0),SUB84(dVar13,0));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(unsigned)(unaff_r14 + 0x5a));
        }
        *(uint *)(unsigned)(puVar8 + -8) = *(int *)(unsigned)(unaff_r14 + 0x44) + uVar6 * 4;
        ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar8 + -8)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5); });
        fVar11 = fVar11 * F32HI(lVar16) -
                 *(float *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar15 + *((float *)(unsigned long)*(unsigned *)(unsigned)(puVar8 + -8));
        uVar10 = (ulonglong)(uint)fVar11;
        *((float *)(unsigned long)*(unsigned *)(unsigned)(puVar8 + -8)) = fVar11;
      }
      uVar6 = uVar6 + 1;
      pdVar7 = (double *)(unsigned)((int)pdVar7 + *(int *)(unsigned)(unaff_r14 + 0x70) * 4);
    } while (uVar6 < *(uint *)(unsigned)(unaff_r14 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fabc\n.set _FUN_8c10fabc, _FUN_8c10fabc_def\n");
