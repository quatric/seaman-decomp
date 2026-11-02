#include "../decls.h"
undefined4 FUN_8c10c530_def(int ar4,float *ar5,float *ar6,int ar7)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float in_fr3;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_fr5;
  ulonglong uVar17;
  undefined8 in_xd2;
  undefined8 uVar18;
  undefined8 in_xd4;
  char cVar19;
  int iStack_24;
  
  iVar9 = **(int **)(ar4 + 0x10);
  pfVar12 = (float *)0x0;
  if (*(char *)(iVar9 + 0x30) == '\0') {
    if (*(char *)(ar4 + 0x58) == '\0') {
      ar5 = (float *)0x1;
      uVar1 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),1,ar6,ar7);
      if ((uVar1 & 0xff) != 0) {
        cVar19 = '\0';
        pfVar2 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1]
                                       ,ar6,ar7);
        iVar5 = ar4 + 0x34;
        uVar1 = (uint)*(ushort *)(ar4 + 0x2c);
        pfVar3 = *(float **)((uVar1 & 7) * 4 + iVar5);
        pfVar10 = *(float **)((uVar1 + 7 & 7) * 4 + iVar5);
        pfVar8 = (float *)(*(int *)((uVar1 + 6 & 7) * 4 + iVar5) + 4);
        pfVar6 = *(float **)((uVar1 + 5 & 7) * 4 + iVar5);
        if (cVar19 == '\0') {
          in_fr5 = *pfVar2;
          pfVar2 = pfVar2 + 1;
        }
        else {
          in_xd4 = *(undefined8 *)pfVar2;
          pfVar2 = pfVar2 + 2;
        }
        pfVar7 = *(float **)((uVar1 + 4 & 7) * 4 + iVar5);
        *(int *)(ar4 + 0x28) = *(int *)(ar4 + 0x28) + 1;
        if (cVar19 == '\0') {
          *pfVar3 = in_fr5;
          fVar13 = 2.0;
        }
        else {
          *(undefined8 *)pfVar3 = in_xd4;
          in_fr5 = 2.0;
          fVar13 = 0.19999999;
        }
        pfVar3 = pfVar3 + 3;
        pfVar12 = pfVar6 + 1;
        pfVar11 = pfVar10 + 3;
        *pfVar8 = (((in_fr5 * fVar13 - *pfVar7 * fVar13) + *pfVar10) - *pfVar6) * 0.19999999;
        in_fr3 = 0.19999999;
        in_fr5 = 1.0;
        pfVar6[2] = (*pfVar8 - pfVar7[1]) * 1.0;
        pfVar6 = pfVar6 + 3;
        iStack_24 = 0;
        pfVar8 = pfVar8 + *(ushort *)(ar4 + 0x2e) + 2;
        ar5 = pfVar7 + 3;
        if (*(short *)(ar4 + 0x2e) != 0) {
          do {
            pfVar2 = pfVar2 + 1;
            *pfVar3 = *pfVar2;
            pfVar3 = pfVar3 + 1;
            fVar14 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar15 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            fVar16 = *ar5;
            ar5 = ar5 + 1;
            in_fr3 = (((fVar13 * *pfVar2 + fVar14) - fVar15) - fVar16 * fVar13) * 0.375;
            *pfVar8 = in_fr3;
            iStack_24 = iStack_24 + 1;
            pfVar8 = pfVar8 + 1;
          } while (iStack_24 < (int)(uint)*(ushort *)(ar4 + 0x2e));
        }
        ar6 = pfVar8 + -(uint)*(ushort *)(ar4 + 0x2e);
        pfVar6 = pfVar6 + *(ushort *)(ar4 + 0x2e);
        ar7 = 0;
        if (*(short *)(ar4 + 0x2e) != 0) {
          do {
            ar7 = ar7 + 1;
            fVar13 = *ar6;
            ar6 = ar6 + 1;
            in_fr3 = *ar5;
            ar5 = ar5 + 1;
            *pfVar6 = (fVar13 - in_fr3) * 1.0;
            pfVar6 = pfVar6 + 1;
          } while (ar7 < (int)(uint)*(ushort *)(ar4 + 0x2e));
        }
      }
    }
    if (*(char *)(ar4 + 0x58) != '\0') {
      iVar5 = *(int *)(ar4 + 0x28) + -1;
      *(int *)(ar4 + 0x28) = iVar5;
      if (iVar5 == 4) {
        *(undefined1 *)(ar4 + 0x58) = 0;
      }
      pfVar12 = (float *)(*(int *)((*(ushort *)(ar4 + 0x2c) + 5 & 7) * 4 + ar4 + 0x34) + 4);
    }
    if (pfVar12 != (float *)0x0) {
      if (3 < *(uint *)(ar4 + 0x28)) {
        cVar19 = '\0';
        pfVar3 = (float *)FUN_8c111dfe(iVar9,ar5,ar6,ar7);
        if (*(uint *)(ar4 + 0x28) < 7) {
          if (cVar19 == '\0') {
            uVar17 = (ulonglong)(uint)in_fr5;
          }
          else {
            uVar17 = 0x233853ea00000000;
          }
          fVar13 = (float)(uVar17 >> 0x20);
          if (*(int *)(ar4 + 0x28) == 6) {
            if (cVar19 == '\0') {
              in_fr3 = *pfVar12;
              pfVar12 = pfVar12 + 1;
            }
            else {
              in_xd2 = *(undefined8 *)pfVar12;
              pfVar12 = pfVar12 + 2;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              *pfVar3 = in_fr3;
              pfVar3[1] = fVar13;
            }
            else {
              *(undefined8 *)pfVar3 = in_xd2;
              *(ulonglong *)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 1;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(ar4 + 0x2e) << 1));
            }
            iVar9 = 0;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(ar4 + 0x2e));
            }
          }
          else {
            if (cVar19 == '\0') {
              *pfVar3 = fVar13;
            }
            else {
              *(ulonglong *)pfVar3 = uVar17;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              pfVar3[1] = fVar13;
            }
            else {
              *(ulonglong *)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 2;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(ar4 + 0x2e));
            }
            iVar9 = 0;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(ar4 + 0x2e) << 1));
            }
          }
        }
        else {
          iVar9 = 0;
          if (0 < (int)(*(ushort *)(ar4 + 0x30) - 1)) {
            do {
              if (cVar19 == '\0') {
                fVar13 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                *pfVar3 = fVar13;
              }
              else {
                uVar18 = *(undefined8 *)pfVar12;
                pfVar12 = pfVar12 + 2;
                *(undefined8 *)pfVar3 = uVar18;
              }
              iVar9 = iVar9 + 1;
              pfVar3 = pfVar3 + 1;
            } while (iVar9 < (int)(*(ushort *)(ar4 + 0x30) - 1));
          }
        }
      }
      if (pfVar12 != (float *)0x0) {
        *(ushort *)(ar4 + 0x2c) = (short)*(char *)(ar4 + 0x2c) + 1U & 7;
      }
    }
  }
  iVar9 = **(int **)(ar4 + 0xc);
  if ((*(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar9 + 0x40)) == *(int *)(iVar9 + 0x3c))
     && (*(char *)(ar4 + 0x58) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c10c530\n.set _FUN_8c10c530, _FUN_8c10c530_def\n");
