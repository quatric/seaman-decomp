#include "../decls.h"
undefined4 FUN_8c10df48_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a5;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  undefined8 in_dr0;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined8 in_dr12;
  double dVar15;
  ulonglong in_dr14;
  ulonglong uVar16;
  undefined8 in_xd2;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)(in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  puVar6 = auStack_3c;
  iVar3 = *ar4;
  *(undefined2 *)((int)ar4 + 0x92) = 0xffff;
  uVar16 = in_dr14 & 0xffffffff;
  FUN_8c120550(ar4,0x1e,ar6,ar7);
  *(short *)(ar4 + 0x25) = (short)(int)fVar9;
  FUN_8c120550(ar4,0x1f,ar6,ar7);
  *(short *)((int)ar4 + 0x96) = (short)(int)fVar9;
  ar4[0x17] = ar4[3] + 8;
  ar4[0x18] = ar4[3] + 0x10;
  ar4[0x19] = *(int *)(uint)ar4[4];
  FUN_8c120550(ar4,0x13,ar6,ar7);
  a5 = 0x400;
  bVar17 = 0;
  bVar18 = 0;
  bVar19 = 0;
  ar4[0x4c] = (int)fVar9 & 0xffff;
  ar4[0x49] = (int)(uVar16 >> 0x20);
  ar4[0x4a] = -0x3eec6e59;
  iVar2 = iVar3;
  iVar1 = (**(code **)(iVar3 + 0x10))(iVar3,0x400,ar6,ar7);
  uVar4 = 0;
  ar4[0x48] = iVar1;
  if (bVar19 == 0) {
    dVar15 = 255.0;
    puVar6 = auStack_3c;
  }
  else {
    dVar15 = 1.1125374633749587e-308;
  }
  do {
    *(uint *)(puVar6 + -4) = ar4[0x48] + uVar4 * 4;
    if (bVar19 == 0) {
      uVar16 = CONCAT44((int)(uVar16 >> 0x20),ar4[0x49]);
    }
    dVar12 = (double)(float)uVar16;
    if ((char)((((uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14) & 0x100000) >>
              0x14) == '\0') {
      pdVar8 = (double *)(puVar6 + -0xc);
      *(double *)(puVar6 + -0xc) = dVar12;
    }
    else {
      *(double *)(puVar6 + -0xc) = dVar12;
      pdVar8 = (double *)(puVar6 + -0x14);
      *(undefined8 *)(puVar6 + -0x14) = in_xd2;
    }
    fVar9 = (float)(int)uVar4;
    if ((int)uVar4 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    dVar12 = (double)(fVar9 * ((float)uVar16 - (float)ar4[0x4a])) / dVar15;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    thunk_FUN_8c013cd8(iVar2,a5,ar6,ar7);
    iVar1 = uVar4 + 1;
    if (bVar19 == 0) {
      *(int *)*(double **)(pdVar8 + 1) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      **(double **)(pdVar8 + 1) = dVar12;
    }
    *(int *)(pdVar8 + 1) = ar4[0x48] + iVar1 * 4;
    if (bVar19 == 0) {
      uVar16 = CONCAT44((int)(uVar16 >> 0x20),ar4[0x49]);
    }
    dVar12 = (double)(float)uVar16;
    if ((char)((((uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14) & 0x100000) >>
              0x14) == '\0') {
      *pdVar8 = dVar12;
    }
    else {
      *pdVar8 = dVar12;
      pdVar7 = pdVar8 + -1;
      pdVar8 = pdVar8 + -1;
      *pdVar7 = (double)in_xd2;
    }
    fVar9 = (float)iVar1;
    if (iVar1 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    dVar12 = (double)(fVar9 * ((float)uVar16 - (float)ar4[0x4a])) / dVar15;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    thunk_FUN_8c013cd8(iVar2,a5,ar6,ar7);
    uVar4 = uVar4 + 2;
    puVar6 = (undefined1 *)((int)pdVar8 + 0xc);
    if (bVar19 == 0) {
      *(int *)*(double **)((int)pdVar8 + 8) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      **(double **)((int)pdVar8 + 8) = dVar12;
    }
  } while (uVar4 < 0x100);
  cVar20 = '\0';
  FUN_8c120550(ar4,0x12,ar6,ar7);
  if (cVar20 == '\0') {
    ar4[0x4b] = (int)((ulonglong)dVar12 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x4b) = dVar12;
  }
  iVar2 = (**(code **)(iVar3 + 0x10))(iVar3,(ar4[0x4c] + 1) * 4,ar6,ar7);
  ar4[0x4d] = iVar2;
  iVar2 = (**(code **)(iVar3 + 0x10))(iVar3,(ar4[0x4c] + 1) * 0x100,ar6,ar7);
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(int *)(ar4[0x4d] + iVar1) = iVar2;
    iVar2 = iVar2 + 0x100;
  } while (uVar4 <= (uint)ar4[0x4c]);
  uVar10 = 0x3ff0000000000000;
  cVar20 = '\0';
  thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
  if (cVar20 == '\0') {
    *(int *)((int)pdVar8 + 0xc) = (int)((ulonglong)uVar10 >> 0x20);
  }
  else {
    *(undefined8 *)((int)pdVar8 + 0xc) = uVar10;
  }
  *(undefined4 *)((int)pdVar8 + 0x14) = 0;
  if (cVar20 == '\0') {
    uVar16 = CONCAT44((int)(uVar16 >> 0x20),0x437f0000);
  }
  do {
    fVar9 = (float)*(int *)((int)pdVar8 + 0x14);
    if (*(int *)((int)pdVar8 + 0x14) < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    uVar5 = 0;
    *(float *)((int)pdVar8 + 0x10) = fVar9 * (float)ar4[0x4b];
    iVar1 = *(int *)((int)pdVar8 + 0x14) * 4;
    do {
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)(int)uVar5;
      if ((int)uVar5 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
      }
      fVar13 = (float)ar4[0x49];
      fVar9 = (float)(-((double)((fVar14 - fVar9) - fVar13) * dVar15) /
                      (double)(fVar13 - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + uVar5) = (char)(int)fVar9;
      iVar3 = uVar5 + 1;
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar11 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar11);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      dVar12 = dVar11;
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
        dVar12 = (double)(ulonglong)(uint)fVar13;
      }
      cVar20 = '\0';
      fVar14 = SUB84(dVar12,0);
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
        fVar14 = (float)((ulonglong)dVar11 >> 0x20);
      }
      fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)ar4[0x49]) * dVar15) /
                      (double)((float)ar4[0x49] - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      iVar3 = uVar5 + 2;
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
      }
      fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)ar4[0x49]) * dVar15) /
                      (double)((float)ar4[0x49] - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      iVar3 = uVar5 + 3;
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
      }
      fVar13 = 1.75;
      fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)ar4[0x49]) * dVar15) /
                      (double)((float)ar4[0x49] - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x100);
    iVar1 = *(int *)((int)pdVar8 + 0x14);
    *(uint *)((int)pdVar8 + 0x14) = iVar1 + 1U;
  } while (iVar1 + 1U <= (uint)ar4[0x4c]);
  ar4[0x45] = 0;
  ar4[0x46] = 0;
  FUN_8c120550(ar4,0x14,ar6,ar7);
  *(char *)(ar4 + 0x47) = (char)(int)fVar13;
  *(undefined1 *)((int)ar4 + 0x11d) = 1;
  return 0;
}

__asm__(".globl _FUN_8c10df48\n.set _FUN_8c10df48, _FUN_8c10df48_def\n");
