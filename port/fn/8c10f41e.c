#include "../decls.h"
undefined4 FUN_8c10f41e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 in_dr0;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  char cVar12;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar4 = *ar4;
  FUN_8c120550(ar4,3,ar6,ar7);
  fStack_1c = (float)(int)(short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(ar4,4,ar6,ar7);
  uVar5 = (int)(float)((ulonglong)in_dr0 >> 0x20) & 0xffff;
  ar4[0xb] = uVar5;
  uVar1 = (uint)(*(ushort *)(*(int *)(uint)ar4[3] + 0xc) >> 2);
  ar4[10] = uVar1;
  if (uVar5 < uVar1) {
    uVar2 = 1;
  }
  else {
    if ((uint)ar4[10] < uVar5) {
      *(undefined1 *)(ar4 + 0xf) = 1;
      ar4[0x10] = (uVar5 - ar4[10]) * 4;
      iVar4 = (**(code **)(iVar4 + 0x10))(iVar4,uVar5 << 2,ar6,ar7);
      ar4[0x11] = iVar4;
    }
    *(undefined2 *)(*(int *)(uint)ar4[4] + 0xc) = 4;
    *(short *)(*(int *)(ar4[4] + 4) + 0xc) = ((short)(uVar5 >> 1) + 1) * 4;
    uVar2 = 1;
    cVar12 = '\0';
    piVar3 = ar4;
    FUN_8c120550(ar4,1,ar6,ar7);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    fStack_20 = fVar8;
    if (cVar12 != '\0') {
      fStack_20 = (float)in_dr0;
      fStack_1c = fVar8;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = fVar8 * fStack_20;
    fVar6 = (float)(int)fStack_1c * 2.0;
    fVar10 = 2.0;
    fStack_24 = fVar6;
    thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7);
    if (cVar12 == '\0') {
      fVar8 = 2.1474836e+09;
    }
    fVar9 = fVar10;
    if (fVar8 < fVar10) {
      fVar9 = fVar10 + -4.2949673e+09;
    }
    uVar1 = (uint)fVar9;
    ar4[0xc] = uVar1;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    ar4[0xc] = uVar1;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar1) {
      uVar1 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xc] = uVar1;
    uVar2 = 2;
    cVar12 = '\0';
    piVar3 = ar4;
    FUN_8c120550(ar4,2,ar6,ar7);
    if (cVar12 == '\0') {
      fStack_24 = fVar10;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    lVar7 = CONCAT44(0x3f7ff972,fVar6);
    fVar6 = (fVar8 * fStack_24) / fVar6;
    thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7);
    fVar8 = (float)((ulonglong)lVar7 >> 0x20);
    lVar11 = lVar7;
    if (cVar12 == '\0') {
      fVar6 = 2.1474836e+09;
      lVar11 = (ulonglong)(uint)fVar8 << 0x20;
    }
    fVar10 = (float)((ulonglong)lVar11 >> 0x20);
    if (fVar6 < fVar8) {
      fVar10 = fVar10 + -4.2949673e+09;
    }
    uVar1 = (uint)fVar10;
    ar4[0xd] = uVar1;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    ar4[0xd] = uVar1;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar1) {
      uVar1 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xd] = uVar1;
    uVar5 = ar4[0xc];
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    ar4[0xd] = uVar5;
    cVar12 = '\0';
    FUN_8c120550(ar4,5,ar6,ar7);
    if (cVar12 == '\0') {
      ar4[0xe] = (int)((ulonglong)lVar7 >> 0x20);
    }
    else {
      *(longlong *)(ar4 + 0xe) = lVar7;
    }
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10f41e\n.set _FUN_8c10f41e, _FUN_8c10f41e_def\n");
