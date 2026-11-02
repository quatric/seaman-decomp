#include "../decls.h"
undefined4 FUN_8c10fabc_def(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  char cVar1;
  int iVar2;
  double *ar4_00;
  uint *puVar3;
  int *ar6_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r13;
  double *pdVar7;
  int unaff_r14;
  undefined1 *puVar8;
  longlong in_dr0;
  float fVar9;
  float fVar11;
  ulonglong uVar10;
  undefined4 uVar12;
  double in_dr4;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 in_dr14;
  float fVar17;
  longlong lVar16;
  undefined8 in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  char cVar18;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  undefined8 uStack_1c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = (double)CONCAT44((int)in_dr14,(undefined4)uStack_1c);
                    
    (*(uint*)((uchar*)&uStack_1c+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = auStack_20;
  }
  else {
    puVar8 = auStack_2c;
    uStack_1c = in_xd14;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unaff_r14 + 0x4c);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x4c) >> 0x20);
  }
  fVar9 = (float)*(int *)(ain0 + unaff_r14);
  dVar13 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  fVar17 = (float)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_PR != '\0' || fVar11 <= fVar9) {
    if (in_FPSCR_SZ == '\0') {
      fVar9 = *(float *)(unaff_r14 + 0x4c);
    }
    else {
      in_xd2 = *(undefined8 *)(unaff_r14 + 0x4c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = fVar9 + fVar17;
    }
    else {
      fVar9 = SUB84((double)CONCAT44(fVar11,fVar9) + dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unaff_r14 + 0x4c) = fVar9;
    }
    else {
      *(undefined8 *)(unaff_r14 + 0x4c) = in_xd2;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unaff_r14 + 0x54);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x54) >> 0x20);
  }
  *(float *)(unaff_r14 + 0x54) = fVar11 + fVar17;
  if (*(int *)(unaff_r14 + 0x50) < *(int *)(unaff_r14 + 0x84)) {
    *(int *)(unaff_r14 + 0x50) = *(int *)(unaff_r14 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar10 = CONCAT44(fVar11 + fVar17,(float)*(int *)(unaff_r14 + 0x50));
  lVar16 = (ulonglong)(uint)fVar17 << 0x20;
  uVar15 = (ulonglong)(uint)(1.0 / (float)*(int *)(unaff_r14 + 0x50));
  pdVar7 = (double *)(unaff_r13 + *(int *)(unaff_r14 + 0x74) * 4);
  if (*(int *)(unaff_r14 + 0x78) != 0) {
    do {
      cVar18 = '\0';
      uVar12 = SUB84(in_dr4,0);
      if (*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = *(uint **)(unaff_r14 + 0x60);
        ar4_00 = (double *)
                 ((int)pdVar7 + *(int *)(unaff_r14 + 0x74) * -4 + *(int *)(unaff_r14 + 0x70) * 4);
        dVar13 = 1.4044474254567505e+306;
        iVar4 = 0;
        dVar14 = dVar13;
        if (*(char *)(unaff_r14 + 0x59) != '\0') {
          do {
            ar5 = pdVar7;
            dVar13 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = (double)CONCAT44((int)lVar16,SUB84(in_dr4,0));
            }
            for (; in_dr4 = dVar13, ar5 < ar4_00; ar5 = (double *)((int)ar5 + 4)) {
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)ar5);
              }
              else {
                in_xd4 = *ar5;
              }
              cVar18 = '\0';
              fVar11 = SUB84(in_dr4,0) - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + (float)((ulonglong)in_dr4 >> 0x20);
              in_dr4 = (double)CONCAT44(fVar9,fVar11);
              if ((float)((ulonglong)dVar14 >> 0x20) < fVar9) break;
              puVar3 = puVar3 + 1;
              dVar13 = in_dr4;
              cVar18 = '\0';
            }
            if (ar5 == ar4_00) {
              iVar5 = iVar4;
              dVar13 = in_dr4;
              if (cVar18 == '\0') {
                dVar13 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar14,0));
              }
            }
            else {
              iVar2 = libgcc_divide_helper_010468((int)ar4_00 - (int)ar5,4);
              puVar3 = puVar3 + iVar2;
              dVar13 = dVar14;
            }
            uVar12 = SUB84(in_dr4,0);
            iVar4 = iVar4 + 1;
            dVar14 = dVar13;
          } while (iVar4 < (int)(uint)*(byte *)(unaff_r14 + 0x59));
        }
        fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr4 = in_xd6;
        if (cVar18 == '\0') {
          in_dr4 = (double)CONCAT44(SUB84(dVar13,0),uVar12);
        }
        ar6_00 = (int *)((uint)*(byte *)(unaff_r14 + 0x5a) * iVar5 * 4 + *(int *)(unaff_r14 + 100));
        iVar5 = 0;
        if (*(char *)(unaff_r14 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(*ar6_00 * 4 + *(int *)(unaff_r14 + 0x68));
            ar5 = pdVar7;
            dVar13 = in_dr4;
            cVar1 = cVar18;
            dVar14 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)lVar16);
              dVar14 = in_xd4;
            }
            do {
              in_xd4 = dVar14;
              cVar18 = cVar1;
              if (ar4_00 <= ar5) break;
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                puVar3 = puVar3 + 1;
                fVar11 = *(float *)ar5;
                ar5 = (double *)((int)ar5 + 4);
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*ar5 >> 0x20);
                ar5 = ar5 + 1;
              }
              cVar18 = '\0';
              fVar11 = fVar11 - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = (float)((ulonglong)dVar13 >> 0x20);
              fVar11 = fVar11 * fVar11 + SUB84(dVar13,0);
              dVar13 = (double)CONCAT44(fVar9,fVar11);
              cVar1 = '\0';
              dVar14 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
            ar6_00 = ar6_00 + 1;
            in_dr4 = dVar13;
            if ((ar5 == ar4_00) && (in_dr4 = in_xd4, cVar18 == '\0')) {
              in_dr4 = (double)CONCAT44(SUB84(dVar13,0),SUB84(dVar13,0));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(unaff_r14 + 0x5a));
        }
        *(uint *)(puVar8 + -8) = *(int *)(unaff_r14 + 0x44) + uVar6 * 4;
        FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5,*(undefined4 *)(puVar8 + -8));
        fVar11 = fVar11 * (float)((ulonglong)lVar16 >> 0x20) -
                 *(float *)(*(int *)(unaff_r14 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar15 + **(float **)(puVar8 + -8);
        uVar10 = (ulonglong)(uint)fVar11;
        **(float **)(puVar8 + -8) = fVar11;
      }
      uVar6 = uVar6 + 1;
      pdVar7 = (double *)((int)pdVar7 + *(int *)(unaff_r14 + 0x70) * 4);
    } while (uVar6 < *(uint *)(unaff_r14 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fabc\n.set _FUN_8c10fabc, _FUN_8c10fabc_def\n");
