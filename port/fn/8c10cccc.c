#include "../decls.h"
undefined4 FUN_8c10cccc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  uint uVar2;
  int a4;
  int a5;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 in_dr0;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined4 in_fr13;
  double dVar11;
  float in_fr15;
  uint uVar12;
  int iVar13;
  float fVar14;
  char cVar15;
  
  fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(ar4,2,ar6,ar7);
  uVar12 = (uint)fVar9;
  uVar4 = uVar12 & 0xffff;
  ar4[10] = uVar4;
  FUN_8c120550(ar4,3,ar6,ar7);
  iVar13 = (int)fVar9;
  FUN_8c120550(ar4,4,ar6,ar7);
  ar4[0xc] = (int)fVar9 & 0xffff;
  FUN_8c120550(ar4,1,ar6,ar7);
  uVar2 = ((int)fVar9 & 0xffffU) - ar4[0xc];
  ar4[0xb] = uVar2;
  *(short *)(*(int *)(uint)ar4[4] + 0xc) = ((short)uVar12 + 1) * 4;
  fVar9 = (float)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  a5 = uVar2 * uVar4 * 4;
  ar4[0xe] = (int)(2.0 / fVar9);
  a4 = *ar4;
  cVar15 = '\0';
  pfVar1 = (float *)(**(code **)(a4 + 0x10))(a4,a5,ar6,ar7);
  ar4[0xd] = (int)pfVar1;
  if (cVar15 == '\0') {
    fVar9 = 1.0;
    dVar11 = (double)CONCAT44(0x400921fb,in_fr13);
  }
  else {
    in_fr15 = 1.0;
    fVar9 = 2.142699;
    dVar11 = 8.619199512815383e+97;
  }
  uVar12 = 0;
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),0x54442d18);
  }
  if (uVar4 != 0) {
    do {
      dVar10 = (double)(int)uVar12;
      if ((int)uVar12 < 0) {
        dVar10 = dVar10 + 4294967296.0;
      }
      dVar8 = (double)(int)(short)iVar13;
      fVar14 = (float)((dVar10 * dVar11) / dVar8);
      cVar15 = '\0';
      thunk_FUN_8c0142e4(a4,a5,ar6,ar7);
      if (cVar15 == '\0') {
        fVar14 = (float)((ulonglong)dVar8 >> 0x20);
        fVar6 = 6.0;
        in_fr15 = fVar9;
      }
      else {
        fVar6 = 1.75;
      }
      in_fr15 = fVar6 * fVar14 + in_fr15;
      uVar5 = 0;
      pfVar3 = pfVar1;
      if (uVar2 != 0) {
        do {
          pfVar1 = pfVar3 + 1;
          fVar14 = (float)(int)uVar5;
          if ((int)uVar5 < 0) {
            fVar14 = fVar14 + 4.2949673e+09;
          }
          fVar6 = (float)(int)uVar12;
          if ((int)uVar12 < 0) {
            fVar6 = fVar6 + 4.2949673e+09;
          }
          fVar7 = (float)(int)uVar2;
          if ((int)uVar2 < 0) {
            fVar7 = fVar7 + 4.2949673e+09;
          }
          dVar10 = (double)fVar7;
          fVar14 = (float)((((double)fVar14 + 0.5) * (double)fVar6 * dVar11) / dVar10);
          cVar15 = '\0';
          thunk_FUN_8c013c88(a4,a5,ar6,ar7);
          uVar5 = uVar5 + 1;
          if (cVar15 == '\0') {
            fVar14 = in_fr15;
          }
          *pfVar3 = fVar14 * (float)((ulonglong)dVar10 >> 0x20);
          pfVar3 = pfVar1;
        } while (uVar5 < uVar2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
  return 0;
}

__asm__(".globl _FUN_8c10cccc\n.set _FUN_8c10cccc, _FUN_8c10cccc_def\n");
