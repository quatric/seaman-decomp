#include "../decls.h"
undefined4 FUN_8c10fab2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  float *ain0;
  float *ar4_00;
  uint *puVar3;
  int *ar6_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  longlong in_dr0;
  float fVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  float fVar11;
  undefined8 in_dr4;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd14;
  char cVar16;
  
  fVar11 = (float)((ulonglong)in_dr4 >> 0x20);
  if (*(float *)(ar4 + 0x4c) <= (float)*(int *)(ar4 + 0x8c)) {
    *(float *)(ar4 + 0x4c) = *(float *)(ar4 + 0x4c) + fVar11;
  }
  fVar9 = *(float *)(ar4 + 0x54) + fVar11;
  *(float *)(ar4 + 0x54) = fVar9;
  if (*(int *)(ar4 + 0x50) < *(int *)(ar4 + 0x84)) {
    *(int *)(ar4 + 0x50) = *(int *)(ar4 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar8 = CONCAT44(fVar9,(float)*(int *)(ar4 + 0x50));
  lVar15 = (ulonglong)(uint)fVar11 << 0x20;
  uVar14 = (ulonglong)(uint)(1.0 / (float)*(int *)(ar4 + 0x50));
  pfVar7 = (float *)(ar5 + *(int *)(ar4 + 0x74) * 4);
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      cVar16 = '\0';
      uVar10 = (undefined4)in_dr4;
      if (*(char *)(*(int *)(ar4 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = *(uint **)(ar4 + 0x60);
        ar4_00 = pfVar7 + (*(int *)(ar4 + 0x70) - *(int *)(ar4 + 0x74));
        uVar12 = 0x7f7fffff7f7fffff;
        iVar4 = 0;
        uVar13 = uVar12;
        if (*(char *)(ar4 + 0x59) != '\0') {
          do {
            ar5 = (int)pfVar7;
            uVar12 = in_xd14;
            if (cVar16 == '\0') {
              uVar12 = CONCAT44((int)lVar15,(int)in_dr4);
            }
            for (; in_dr4 = uVar12, (uint)ar5 < ar4_00; ar5 = (int)(ar5 + 4)) {
              if (cVar16 == '\0') {
                uVar8 = (ulonglong)*puVar3;
                in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(float *)ar5);
              }
              else {
                in_xd4 = *(undefined8 *)ar5;
              }
              cVar16 = '\0';
              fVar11 = (float)in_dr4 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + (float)((ulonglong)in_dr4 >> 0x20);
              in_dr4 = CONCAT44(fVar9,fVar11);
              if ((float)((ulonglong)uVar13 >> 0x20) < fVar9) break;
              puVar3 = puVar3 + 1;
              uVar12 = in_dr4;
              cVar16 = '\0';
            }
            if ((float *)ar5 == ar4_00) {
              iVar5 = iVar4;
              uVar12 = in_dr4;
              if (cVar16 == '\0') {
                uVar12 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)uVar13);
              }
            }
            else {
              iVar2 = libgcc_divide_helper_010468((int)ar4_00 - ar5,4);
              puVar3 = puVar3 + iVar2;
              uVar12 = uVar13;
            }
            uVar10 = (undefined4)in_dr4;
            iVar4 = iVar4 + 1;
            uVar13 = uVar12;
          } while (iVar4 < (int)(uint)*(byte *)(ar4 + 0x59));
        }
        fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr4 = in_xd6;
        if (cVar16 == '\0') {
          in_dr4 = CONCAT44((int)uVar12,uVar10);
        }
        ar6_00 = (int *)((uint)*(byte *)(ar4 + 0x5a) * iVar5 * 4 + *(int *)(ar4 + 100));
        iVar5 = 0;
        if (*(char *)(ar4 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(*ar6_00 * 4 + *(int *)(ar4 + 0x68));
            ar5 = (int)pfVar7;
            uVar12 = in_dr4;
            cVar1 = cVar16;
            uVar13 = in_xd14;
            if (cVar16 == '\0') {
              uVar12 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)lVar15);
              uVar13 = in_xd4;
            }
            do {
              in_xd4 = uVar13;
              cVar16 = cVar1;
              if (ar4_00 <= (uint)ar5) break;
              if (cVar16 == '\0') {
                uVar8 = (ulonglong)*puVar3;
                puVar3 = puVar3 + 1;
                fVar11 = *(float *)ar5;
                ar5 = ar5 + 4;
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*(undefined8 *)ar5 >> 0x20);
                ar5 = ar5 + 8;
              }
              cVar16 = '\0';
              fVar11 = fVar11 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = (float)((ulonglong)uVar12 >> 0x20);
              fVar11 = fVar11 * fVar11 + (float)uVar12;
              uVar12 = CONCAT44(fVar9,fVar11);
              cVar1 = '\0';
              uVar13 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
            ar6_00 = ar6_00 + 1;
            in_dr4 = uVar12;
            if (((float *)ar5 == ar4_00) && (in_dr4 = in_xd4, cVar16 == '\0')) {
              in_dr4 = CONCAT44((int)uVar12,(int)uVar12);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(ar4 + 0x5a));
        }
        ain0 = (float *)(*(int *)(ar4 + 0x44) + uVar6 * 4);
        FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5,ain0);
        fVar11 = fVar11 * (float)((ulonglong)lVar15 >> 0x20) -
                 *(float *)(*(int *)(ar4 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar14 + *ain0;
        uVar8 = (ulonglong)(uint)fVar11;
        *ain0 = fVar11;
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + *(int *)(ar4 + 0x70);
    } while (uVar6 < *(uint *)(ar4 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fab2\n.set _FUN_8c10fab2, _FUN_8c10fab2_def\n");
