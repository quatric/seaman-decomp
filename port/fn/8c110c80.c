#include "../decls.h"
undefined4 FUN_8c110c80_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *a5;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int a4;
  float fVar10;
  undefined8 in_dr0;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  double dVar14;
  undefined8 in_dr4;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char cVar21;
  
  fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
  fVar16 = (float)((ulonglong)in_dr4 >> 0x20);
  a4 = *ar4;
  FUN_8c120550(ar4,2,ar6,ar7);
  fVar18 = fVar13;
  FUN_8c120550(ar4,3,ar6,ar7);
  ar4[0xe] = (int)fVar16;
  uVar3 = ((int)fVar13 & 0xffffU) >> 1;
  uVar9 = uVar3 + 1;
  iVar5 = uVar9 * 4;
  iVar1 = a4;
  a5 = (float *)(**(code **)(a4 + 0x10))(a4,iVar5,ar6,ar7);
  if (a5 == (float *)0x0) {
LAB_8c1110d4:
    FUN_8c1204c4(ar4,100,ar6,ar7);
  }
  else {
    fVar10 = fVar18 / (float)uVar3;
    fVar19 = 1000.0;
    fVar17 = fVar18;
    if (1000.0 < fVar18) {
      fVar17 = 1000.0;
    }
    fVar20 = 0.0;
    pfVar6 = a5;
    if (0.0 < fVar17) {
      do {
        *pfVar6 = fVar20 / (fVar16 * 100.0);
        fVar20 = fVar20 + fVar10;
        pfVar6 = pfVar6 + 1;
      } while (fVar20 < fVar17);
    }
    fVar15 = fVar10 / 2.0 + fVar18;
    fVar17 = 5.0;
    for (; fVar20 < fVar15; fVar20 = fVar20 + fVar10) {
      cVar21 = '\0';
      fVar12 = fVar16 * 1000.0;
      thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7);
      if (cVar21 == '\0') {
        fVar12 = 0.69314694;
      }
      *pfVar6 = fVar17 * (fVar13 / fVar12) + 10.0;
      pfVar6 = pfVar6 + 1;
      fVar13 = fVar17;
    }
    if (fVar19 <= fVar18) {
      fVar13 = 4.4765625;
      thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7);
      dVar11 = (double)((fVar13 * fVar17) / 0.69314694 + 10.0) + -0.95;
      dVar14 = dVar11;
      if (2147483648.0 <= dVar11) {
        dVar11 = dVar11 - 4294967296.0;
        dVar14 = dVar11;
      }
    }
    else {
      dVar14 = (double)fVar18 / 100.0 + -0.95;
      dVar11 = 2147483648.0;
      if (2147483648.0 <= dVar14) {
        dVar11 = 4294967296.0;
        dVar14 = dVar14 - 4294967296.0;
      }
    }
    fVar13 = (float)((ulonglong)dVar11 >> 0x20);
    ar4[10] = (int)dVar14;
    FUN_8c120550(ar4,4,ar6,ar7);
    if (ar4[10] == ((int)fVar13 & 0xffffU)) {
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xb] = iVar1;
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xc] = iVar1;
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xd] = iVar1;
      ar6 = 4;
      pfVar6 = (float *)(uint)ar4[10];
      iVar1 = (**(code **)(a4 + 0x14))(a4,pfVar6,4,ar7);
      if ((((ar4[0xb] != 0) && (ar4[0xc] != 0)) && (ar4[0xd] != 0)) && (iVar1 != 0)) {
        uVar3 = 0;
        if (ar4[10] != 0) {
          do {
            iVar5 = uVar3 * 4;
            *(undefined4 *)(ar4[0xd] + iVar5) = 0;
            *(undefined4 *)(ar4[0xc] + iVar5) = 0xffffffff;
            fVar13 = (float)(int)(uVar3 + 1);
            if (fVar13 < 0.0) {
              fVar13 = fVar13 + 4.2949673e+09;
            }
            if (uVar3 < 10) {
              *(float *)(iVar1 + uVar3 * 4) = fVar13 * 100.0;
            }
            else {
              fVar18 = -2.0;
              thunk_FUN_8c014064(iVar5,pfVar6,ar6,ar7);
              *(float *)(iVar1 + uVar3 * 4) = fVar18 * fVar19;
            }
            uVar4 = 1;
            iVar5 = uVar3 * 4;
            if (1 < uVar9) {
              do {
                if ((a5[uVar4] <= fVar13 + -1.0) || (fVar13 + 1.0 <= a5[uVar4])) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = 1;
                }
                *(int *)(ar4[0xd] + iVar5) = *(int *)(ar4[0xd] + iVar5) + iVar7;
                if ((iVar7 != 0) && (*(int *)(ar4[0xc] + iVar5) == -1)) {
                  *(uint *)(ar4[0xc] + iVar5) = uVar4;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar9);
            }
            iVar7 = ar4[0xb];
            ar6 = 4;
            cVar21 = '\0';
            uVar2 = (**(code **)(a4 + 0x14))(a4,*(undefined4 *)(ar4[0xd] + iVar5),4,ar7);
            *(undefined4 *)(iVar7 + iVar5) = uVar2;
            if (*(int *)(ar4[0xb] + iVar5) == 0) goto LAB_8c1110d4;
            pfVar6 = *(float **)(ar4[0xb] + iVar5);
            uVar4 = 0;
            pfVar8 = pfVar6;
            if (*(int *)(ar4[0xd] + iVar5) != 0) {
              do {
                iVar7 = *(int *)(ar4[0xc] + iVar5) + uVar4;
                if (cVar21 == '\0') {
                  fVar18 = a5[iVar7];
                }
                else {
                  fVar18 = (float)((ulonglong)*(undefined8 *)(a5 + iVar7) >> 0x20);
                }
                cVar21 = '\0';
                pfVar6 = pfVar8 + 1;
                if (fVar13 <= fVar18) {
                  fVar18 = fVar13 - fVar18;
                }
                else {
                  fVar18 = fVar18 - fVar13;
                }
                uVar4 = uVar4 + 1;
                *pfVar8 = fVar18 + 1.0;
                pfVar8 = pfVar6;
              } while (uVar4 < *(uint *)(ar4[0xd] + iVar5));
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[10]);
        }
        (**(code **)(a4 + 0x18))(a4,iVar1,ar6,ar7);
        (**(code **)(a4 + 0x18))(a4,a5,ar6,ar7);
        return 0;
      }
      FUN_8c1204c4(ar4,100,ar6,ar7);
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c110c80\n.set _FUN_8c110c80, _FUN_8c110c80_def\n");
