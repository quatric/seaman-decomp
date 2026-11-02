#include "../decls.h"
uint FUN_8c120b48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  int *piVar7;
  uint d;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  float *pfVar12;
  double in_dr2;
  float fVar13;
  uint in_fr5;
  ulonglong uVar14;
  double dVar15;
  byte in_FPSCR_DN;
  byte bVar16;
  byte bVar17;
  float *pfStack_30;
  int iStack_2c;
  
  bVar17 = 0;
  bVar16 = 0;
  uVar6 = 0;
  piVar7 = *(int **)(ar4 + 0x284);
  iStack_2c = 0;
  d = (uint)*(ushort *)(ar4 + 0x288);
  uVar3 = 0x8c120c6c;
  dVar15 = 0.5;
  uVar14 = (ulonglong)in_fr5;
  for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[4]) {
    uVar4 = libgcc_divide_helper_01051c(piVar7[1],d);
    uVar3 = uVar4;
    uVar9 = uVar6;
    if (d != 0) {
      do {
        pfStack_30 = *(float **)(ar4 + 0x28c + iStack_2c * 4);
        pfVar12 = *(float **)(ar4 + 0x29c);
        uVar3 = uVar6;
        if (uVar4 != 0) {
          do {
            iVar10 = *piVar7;
            if (bVar17 == 0) {
              *pfVar12 = (float)(uVar14 >> 0x20);
            }
            else {
              *(ulonglong *)pfVar12 = uVar14;
            }
            puVar11 = (ushort *)(iVar10 + uVar9 * 2);
            uVar8 = uVar6;
            if (uVar4 != 0) {
              do {
                uVar8 = uVar8 + 1;
                pfVar5 = pfStack_30 + 1;
                in_FPSCR_DN = 0;
                bVar16 = 0;
                bVar17 = 0;
                fVar13 = (float)*puVar11 * *pfStack_30 + *pfVar12;
                in_dr2 = (double)CONCAT44(fVar13,*pfStack_30);
                *pfVar12 = fVar13;
                puVar11 = puVar11 + d;
                pfStack_30 = pfVar5;
              } while (uVar8 < uVar4);
            }
            uVar3 = uVar3 + 1;
            pfVar12 = pfVar12 + 1;
          } while (uVar3 < uVar4);
        }
        iVar10 = uVar9 * 2;
        pfVar12 = *(float **)(ar4 + 0x29c);
        puVar11 = (ushort *)(*piVar7 + iVar10);
        uVar8 = uVar6;
        uVar3 = uVar6;
        if (uVar4 != 0) {
          do {
            fVar13 = SUB84(in_dr2,0);
            uVar1 = (uint)in_FPSCR_DN;
            uVar2 = (uint)bVar16;
            uVar3 = uVar3 + 1;
            if (bVar17 == 0) {
              fVar13 = *pfVar12;
              pfVar12 = pfVar12 + 1;
            }
            else {
              pfVar12 = pfVar12 + 2;
            }
            in_FPSCR_DN = 0;
            bVar16 = 0;
            bVar17 = (byte)(((uVar1 << 0x12 | uVar2 << 0x13 | (uint)bVar17 << 0x14) & 0x100000) >>
                           0x14);
            in_dr2 = (double)fVar13 + dVar15;
            *puVar11 = (ushort)(int)in_dr2;
            uVar8 = uVar8 + *puVar11;
            puVar11 = puVar11 + d;
          } while (uVar3 < uVar4);
        }
        uVar9 = uVar9 + 1;
        uVar3 = piVar7[2];
        *(short *)(uVar3 + iVar10) = (short)uVar8;
      } while (uVar9 < d);
    }
    iStack_2c = iStack_2c + 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c120b48\n.set _FUN_8c120b48, _FUN_8c120b48_def\n");
