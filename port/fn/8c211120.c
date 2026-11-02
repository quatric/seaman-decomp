#include "../decls.h"
int s_HARDWARE_211130_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 extraout_fr0;
  float fVar13;
  double in_dr2;
  double dVar14;
  undefined4 in_fr5;
  double dVar15;
  float fVar16;
  ulonglong in_dr14;
  undefined8 in_xd2;
  bool bVar17;
  char cVar18;
  char cVar19;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_5c;
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  uint auStack_4c [5];
  undefined8 auStack_38 [3];
  undefined4 uStack_20;
  
  cVar19 = '\0';
  cVar18 = '\0';
  uStack_20 = (undefined4)in_dr14;
  dVar14 = (double)(in_dr14 & 0xffffffff00000000);
  uStack_88 = 2;
  iVar4 = ar4;
  FUN_8c2034c0(ar4,ar5,ar6,ar7);
  FUN_8c21214e(iVar4,ar5,ar6,ar7);
  _DAT_8c4aa1f4 = 0;
  uStack_7c = (uint)((*(uint *)(ar4 + 4) & 1) != 0);
  uStack_6c = (uint)((*(uint *)(ar4 + 4) & 0x20) == 0);
  uStack_80 = (uint)((*(uint *)(ar4 + 4) & 2) != 0);
  _DAT_8c4a9fdc = (uint)((*(uint *)(ar4 + 4) & 0x100000) == 0);
  uVar11 = *(undefined4 *)(ar4 + 0x14);
  sh4_dmac_202c60(0xff,uStack_80,uVar11,ar7);
  if ((*(uint *)(ar4 + 4) & 0x10000) == 0) {
    DAT_8c2758ec = 0;
    bVar17 = (*(uint *)(ar4 + 4) & 0x10) != 0;
    if (bVar17) {
      _DAT_8c4a9fdc = 1;
    }
    _DAT_8c4a9ef0 = (uint)bVar17;
    FUN_8c211040(_DAT_8c4a9ef0,*(undefined4 *)(ar4 + 0x5c),uVar11,ar7);
    _DAT_8c4a9fec = *(uint *)(ar4 + 0x24);
    uVar1 = *(uint *)(ar4 + 0x28);
    if ((_DAT_8c4a9fec & 0x1f) != 0) {
      uVar1 = uVar1 - (0x20 - (_DAT_8c4a9fec & 0x1f));
      _DAT_8c4a9fec = _DAT_8c4a9fec + 0x1f & 0xffffffe0;
    }
    if (_DAT_8c4a9ef0 == 0) {
      uVar1 = uVar1 >> 1;
    }
    for (puVar6 = auStack_4c; puVar6 < auStack_38; puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    puVar7 = (undefined8 *)(ar4 + 0x2c);
    while (fVar13 = SUB84(dVar14,0), puVar7 < (undefined8 *)(ar4 + 0x40U)) {
      if (cVar19 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)puVar7);
        puVar7 = (undefined8 *)((int)puVar7 + 4);
      }
      else {
        in_xd2 = *puVar7;
        puVar7 = puVar7 + 1;
      }
      if (cVar18 == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),fVar13 + SUB84(in_dr2,0));
      }
      else {
        dVar14 = dVar14 + in_dr2;
      }
    }
    if (cVar19 == '\0') {
      dVar15 = (double)CONCAT44(0x42c80000,in_fr5);
    }
    else {
      dVar15 = 9.046259222189e+74;
    }
    fVar16 = (float)((ulonglong)dVar15 >> 0x20);
    if (cVar18 == '\0') {
      bVar17 = fVar16 < fVar13;
    }
    else {
      bVar17 = dVar15 < dVar14;
    }
    if (bVar17) {
      uVar2 = 0;
      while (uVar2 < 0x14) {
        puVar7 = (undefined8 *)(ar4 + 0x2c + uVar2);
        if (cVar19 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)puVar7);
        }
        else {
          in_xd2 = *puVar7;
        }
        if (cVar18 == '\0') {
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                    (SUB84(in_dr2,0) * fVar16) / fVar13);
        }
        else {
          in_dr2 = (in_dr2 * dVar15) / dVar14;
        }
        if (cVar19 == '\0') {
          *(int *)((int)auStack_38 + uVar2) = SUB84(in_dr2,0);
          uVar2 = uVar2 + 4;
        }
        else {
          *(undefined8 *)((int)auStack_38 + uVar2) = in_xd2;
          uVar2 = uVar2 + 4;
        }
      }
    }
    else {
      uVar2 = 0;
      while (uVar2 < 0x14) {
        puVar6 = (uint *)(ar4 + 0x2c + uVar2);
        if (cVar19 == '\0') {
          uVar3 = *puVar6;
          in_dr2 = (double)(ulonglong)uVar3;
          *(uint *)((int)auStack_38 + uVar2) = uVar3;
          uVar2 = uVar2 + 4;
        }
        else {
          *(undefined8 *)((int)auStack_38 + uVar2) = *(undefined8 *)puVar6;
          uVar2 = uVar2 + 4;
        }
      }
    }
    for (uVar2 = 0; uVar11 = SUB84(in_dr2,0), uVar2 < 0x14; uVar2 = uVar2 + 4) {
      if (cVar19 == '\0') {
        uVar11 = *(undefined4 *)((int)auStack_38 + uVar2);
      }
      if (cVar18 == '\0') {
        dVar14 = (double)CONCAT44((float)(int)uVar1,uVar11);
      }
      else {
        dVar14 = (double)(int)uVar1;
      }
      if ((int)uVar1 < 0) {
        if (cVar18 == '\0') {
          dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + 4.2949673e+09,
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 + (double)CONCAT44(extraout_fr0,0x4f800000);
        }
      }
      if (cVar18 == '\0') {
        fVar13 = (SUB84(dVar14,0) * (float)((ulonglong)dVar14 >> 0x20)) / fVar16;
      }
      else {
        fVar13 = SUB84((dVar14 * dVar14) / dVar15,0);
      }
      in_dr2 = (double)CONCAT44(0x4f000000,fVar13);
      if (cVar18 != '\0' || 2.1474836e+09 <= fVar13) {
        if (cVar18 == '\0') {
          in_dr2 = (double)CONCAT44(0x4f800000,fVar13 - 4.2949673e+09);
        }
        else {
          in_dr2 = (in_dr2 + in_dr2) - (in_dr2 + in_dr2);
        }
      }
      if (cVar18 == '\0') {
        uVar3 = (uint)SUB84(in_dr2,0);
      }
      else {
        uVar3 = (uint)in_dr2;
      }
      *(uint *)(uVar2 + (int)auStack_4c) = uVar3 & 0xfffffff8;
    }
    if (((_DAT_8c4a9bb0 & 0x40) != 0) && (auStack_4c[0] < 0x38)) {
      auStack_4c[0] = auStack_4c[0] + 0x38;
    }
    uVar12 = 0xffffffff;
    uVar3 = 0;
    for (uVar2 = 0; uVar2 < 5; uVar2 = uVar2 + 1) {
      puVar6 = auStack_4c + uVar2;
      uVar5 = *puVar6;
      uVar3 = uVar3 + uVar5;
      if ((int)uVar12 < (int)uVar5) {
        uVar12 = *puVar6;
        uStack_84 = uVar2;
      }
    }
    if (uVar1 < uVar3) {
      puVar6 = auStack_4c + uStack_84;
      *puVar6 = *puVar6 - (uVar3 - uVar1);
      *puVar6 = *puVar6 & 0xffffffe0;
    }
    if (auStack_4c[0] != 0) {
      auStack_4c[0] = auStack_4c[0] - 0x10;
    }
    puVar8 = auStack_4c + 1;
    puVar6 = puVar8;
    for (; puVar8 < auStack_38; puVar8 = puVar8 + 1) {
      if (*puVar8 != 0) {
        *puVar6 = *puVar6 - 0x10;
      }
      puVar6 = puVar6 + 1;
    }
    _DAT_8c4aa1a0 = *(undefined4 *)(ar4 + 0x20);
    _DAT_8c4aa1a4 = auStack_4c[0];
    _DAT_8c4aa1a8 = auStack_4c[1];
    _DAT_8c4aa1ac = auStack_4c[2];
    _DAT_8c4aa1b0 = auStack_4c[3];
    _DAT_8c4aa1b4 = auStack_4c[4];
    FUN_8c211730(auStack_4c[0],auStack_4c[1],auStack_4c[2],auStack_4c[3]);
    *(undefined4 *)(*(int *)(ar4 + 0x20) + 0x10) = _DAT_8c4aa014;
    for (puVar9 = (undefined4 *)&DAT_8c4aa288; puVar9 < (undefined4 *)0x8c4aa29c;
        puVar9 = puVar9 + 1) {
      *puVar9 = 0;
    }
    uVar1 = auStack_4c[1];
    uVar2 = auStack_4c[2];
    uVar3 = auStack_4c[3];
    uStack_8c = FUN_8c211876(auStack_4c[0],auStack_4c[1],auStack_4c[2],auStack_4c[3]);
    FUN_8c211ba4(uStack_8c,uVar1,uVar2,uVar3);
    if (_DAT_8c4a9ef0 == 1) {
      uStack_88 = 1;
    }
    FUN_8c211c98(auStack_4c[0],auStack_4c[1],auStack_4c[2],auStack_4c[3]);
    _DAT_8c4aa254 = _DAT_8c4aa22c;
    _DAT_8c4aa258 = _DAT_8c4aa230;
    _DAT_8c4aa25c = _DAT_8c4aa234;
    _DAT_8c4aa260 = _DAT_8c4aa238;
    _DAT_8c4aa264 = _DAT_8c4aa23c;
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 4) {
      *(undefined4 *)(uVar1 + 0x8c4aa268) = *(undefined4 *)(&DAT_8c4aa254 + uVar1);
    }
    _DAT_8c4aa208 = 0;
    _DAT_8c4aa20c = 0;
    _DAT_8c4aa210 = 0;
    _DAT_8c4aa214 = 0;
    puVar10 = &DAT_8c4aa22c;
    _DAT_8c4aa218 = &DAT_8c4aa22c;
    puVar9 = (undefined4 *)&DAT_8c4aa224;
    _DAT_8c4aa21c = &DAT_8c4aa254;
    uVar1 = 0;
    if (uStack_88 != 0) {
      do {
        uVar1 = uVar1 + 1;
        *puVar9 = puVar10;
        puVar10 = puVar10 + 0x14;
        puVar9 = puVar9 + 1;
      } while (uVar1 < uStack_88);
    }
    FUN_8c211a20(uStack_88,puVar9,uVar1,auStack_4c[3]);
    for (uVar1 = 0; uVar1 < 0x14; uVar1 = uVar1 + 4) {
      *(int *)(_DAT_8c4aa21c + uVar1) =
           *(int *)(_DAT_8c4aa21c + uVar1) + *(int *)(&DAT_8c4aa288 + uVar1) * 4;
    }
  }
  else {
    _DAT_8c4a9fdc = 1;
    DAT_8c2758ec = 1;
    _DAT_8c4a9f10 = _DAT_8c4a9f08;
    *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
    _DAT_8c4a9db8 = 0;
    _DAT_8c4a9f20 = 1;
    uVar1 = *(uint *)(*(int *)(ar4 + 0x20) + 0x10);
    uVar12 = *(uint *)(*(int *)(ar4 + 0x20) + 0x10) & 2;
    uVar2 = *(uint *)(*(int *)(ar4 + 0x20) + 0x10) & 4;
    uVar3 = *(uint *)(*(int *)(ar4 + 0x20) + 0x10) & 8;
    FUN_8c211730(uStack_68,uVar12,uVar2,uStack_5c);
    uStack_8c = FUN_8c211876(uVar1 & 1,uVar12,uVar2,uVar3);
    FUN_8c211ba4(uStack_8c,uVar12,uVar2,uVar3);
    auStack_4c[3] = uVar3;
  }
  _DAT_8c4aa1fc = *(uint *)(ar4 + 0x1c);
  if ((_DAT_8c4aa1fc & 7) != 0) {
    _DAT_8c4aa1fc = _DAT_8c4aa1fc + 7 & 0xfffffff8;
  }
  _DAT_8c4aa1f8 = _DAT_8c4a9bc0 + _DAT_8c4aa1fc * -4 + _DAT_8c4aa200 * -2 >> 1;
  iVar4 = s_HARDWARE_205e00(s_HARDWARE_8c26d6c8,s_EnableTexture16MB_8c26d6d4,0,auStack_4c[3]);
  if (iVar4 == 1) {
    if (0x400000 < _DAT_8c4aa1f8) {
      _DAT_8c4aa1f8 = 0x400000;
    }
  }
  else if (0x200000 < _DAT_8c4aa1f8) {
    _DAT_8c4aa1f8 = 0x200000;
  }
  if (_DAT_8c4aa1f8 < _DAT_8c4aa204) {
    iVar4 = 3;
  }
  else {
    iVar4 = FUN_8c203820(_DAT_8c4aa1f8,auStack_54,auStack_50,auStack_4c[3]);
    if (iVar4 == 0) {
      _DAT_8c4aa004 = _DAT_8c4aa1f8;
      uVar3 = _DAT_8c4a9c24 >> 7;
      uVar2 = _DAT_8c4a9c20 >> 7;
      uVar1 = _DAT_8c4a9c1c >> 7;
      FUN_8c25d7c6(_DAT_8c4a9c18 >> 7,uVar1,uVar2,uVar3,~uStack_80 & uStack_8c);
      if ((*(uint *)(ar4 + 4) & 0x10000) != 0) {
        _DAT_8c4a9db8 = 1;
      }
      **(undefined4 **)(ar4 + 0x20) = &DAT_8c4aa254;
      *(undefined4 **)(*(int *)(ar4 + 0x20) + 4) = &DAT_8c2757a8;
      *(undefined1 **)(*(int *)(ar4 + 0x20) + 8) = &DAT_8c4aa208;
      *(undefined1 **)(*(int *)(ar4 + 0x20) + 0xc) = &DAT_8c4aa224;
      _DAT_8c4aa1b8 = uStack_80;
      _DAT_8c4a9be0 = uStack_80;
      _DAT_8c4aa1bc = **(undefined4 **)(ar4 + 8);
      _DAT_8c4aa1c0 = *(undefined4 *)(ar4 + 0x10);
      _DAT_8c4aa1c4 = *(undefined4 *)(ar4 + 0x14);
      _DAT_8c4aa1c8 = uStack_7c;
      _DAT_8c4aa1cc = *(undefined4 *)(*(int *)(ar4 + 8) + 4);
      _DAT_8c4aa1d0 = *(undefined4 *)(ar4 + 0x10);
      _DAT_8c4aa1d4 = *(undefined4 *)(ar4 + 0x14);
      _DAT_8c4aa1d8 = uStack_7c;
      _DAT_8c4aa1dc = **(undefined4 **)(ar4 + 8);
      _DAT_8c4aa1e0 = *(undefined4 *)(*(int *)(ar4 + 8) + 4);
      _DAT_8c4aa1e4 = uStack_6c;
      DAT_8c2758e8 = 0x80000000;
      iVar4 = FUN_8c211f40(_DAT_8c4aa1f4,uVar1,uVar2,uVar3);
    }
  }
  return iVar4;
}

__asm__(".globl _s_HARDWARE_211130\n.set _s_HARDWARE_211130, _s_HARDWARE_211130_def\n");
