#include "../decls.h"
undefined4 FUN_8c1f7558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piStack_160;
  int aiStack_140 [8];
  int aiStack_120 [4];
  int aiStack_110 [24];
  int aiStack_b0 [6];
  int aiStack_98 [24];
  int aiStack_38 [7];
  
  FUN_8c1f8176(0x8c4749e8,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749e8,&DAT_8c4749d8,ar6,ar7);
  uVar11 = 0x8c4748c4;
  _DAT_8c474a06 = 0;
  iVar4 = FUN_8c1f7b64(_DAT_8c4748bc,0x8c4748c4,ar6,ar7);
  if (iVar4 == 0) {
    uVar11 = 0;
  }
  else {
    iVar4 = FUN_8c1f6fc8(_DAT_8c4748bc,uVar11,ar6,ar7);
    if (_DAT_8c474972 == -1) {
      _DAT_8c474972 = 0;
    }
    if (_DAT_8c474978 == -1) {
      _DAT_8c474978 = 0;
    }
    if (DAT_8c47497a == -1) {
      DAT_8c47497a = '\0';
    }
    if (DAT_8c47497b == -1) {
      DAT_8c47497b = '\0';
    }
    if (_DAT_8c474940 == -1) {
      _DAT_8c474940 = -2;
    }
    _DAT_8c4748c0 = FUN_8c1f6f06(0xffff,0xff,ar6,ar7);
    if (2 < _DAT_8c4748c0) {
      bVar1 = false;
      FUN_8c1f6e0c(0x14,aiStack_98,ar6,ar7);
      FUN_8c1f6e0c(0x15,aiStack_98 + 0xf,ar6,ar7);
      FUN_8c1f6e0c(0x16,aiStack_110,ar6,ar7);
      piVar9 = aiStack_110 + 0xf;
      FUN_8c1f6e0c(0x17,piVar9,ar6,ar7);
      piVar10 = aiStack_120;
      pbVar14 = &DAT_8c26c8c3;
      pbVar15 = &DAT_8c26c8c7;
      do {
        piVar5 = (int *)FUN_8c1f62cc((uint)*pbVar14,piVar9,ar6,ar7);
        if (piVar5 == (int *)0x0) {
          _DAT_8c4748a8 = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *piVar10 = *piVar5;
        piVar10 = piVar10 + 1;
      } while (pbVar14 < pbVar15);
      piVar10 = aiStack_38;
      for (iVar12 = 0; iVar12 < 4; iVar12 = iVar12 + 1) {
        piVar5 = aiStack_120 + iVar12;
        if (*piVar5 != 0) {
          iVar8 = 0;
          do {
            if (aiStack_98[iVar8] == *piVar5) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar2 = aiStack_98;
          piVar3 = aiStack_98;
          if (iVar8 == 0x18) {
            for (; piVar9 = piVar3, piVar2 < piVar10; piVar2 = piVar2 + 1) {
              if (*piVar2 == -1) {
                *piVar9 = *piVar5;
                bVar1 = true;
                break;
              }
              piVar3 = piVar9 + 1;
            }
          }
        }
      }
      if (bVar1) {
        FUN_8c1f6e5e(0x14,aiStack_98,iVar12,piVar10);
        piVar9 = aiStack_98 + 0xf;
        FUN_8c1f6e5e(0x15,piVar9,iVar12,piVar10);
      }
      piStack_160 = aiStack_140;
      pbVar14 = &DAT_8c26c8c7;
      pbVar15 = &DAT_8c26c8cf;
      do {
        piVar5 = (int *)FUN_8c1f6342((uint)*pbVar14,piVar9,iVar12,piVar10);
        if (piVar5 == (int *)0x0) {
          _DAT_8c4748a8 = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *piStack_160 = *piVar5;
        piStack_160 = piStack_160 + 1;
      } while (pbVar14 < pbVar15);
      piVar9 = aiStack_b0;
      bVar1 = false;
      for (iVar12 = 0; iVar12 < 8; iVar12 = iVar12 + 1) {
        piVar10 = aiStack_140 + iVar12;
        if (*piVar10 != 0) {
          iVar8 = 0;
          do {
            if (aiStack_110[iVar8] == *piVar10) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar5 = aiStack_110;
          piVar2 = aiStack_110;
          if (iVar8 == 0x18) {
            for (; piVar5 < piVar9; piVar5 = piVar5 + 1) {
              if (*piVar5 == -1) {
                *piVar2 = *piVar10;
                bVar1 = true;
                break;
              }
              piVar2 = piVar2 + 1;
            }
          }
        }
      }
      if (bVar1) {
        FUN_8c1f6e5e(0x16,aiStack_110,iVar12,piVar9);
        FUN_8c1f6e5e(0x17,aiStack_110 + 0xf,iVar12,piVar9);
      }
      piStack_160 = (int *)0x0;
      uVar13 = 0;
      uVar6 = FUN_8c1f752a(0x8c474936,3,iVar12,piVar9);
      uVar7 = FUN_8c1f752a(0x8c474939,3,iVar12,piVar9);
      for (iVar12 = 0; iVar12 < 0x18; iVar12 = iVar12 + 1) {
        piVar10 = aiStack_120;
        for (piVar9 = aiStack_120; piVar9 < aiStack_110; piVar9 = piVar9 + 1) {
          if ((*piVar9 != 0) && (aiStack_98[iVar12] == *piVar10)) {
            piStack_160 = (int *)((uint)piStack_160 | 1);
          }
          piVar10 = piVar10 + 1;
        }
        piStack_160 = (int *)((int)piStack_160 << 1);
        piVar9 = aiStack_110 + iVar12;
        piVar5 = aiStack_140;
        for (piVar10 = aiStack_140; piVar10 < aiStack_120; piVar10 = piVar10 + 1) {
          if ((*piVar10 != 0) && (*piVar9 == *piVar5)) {
            uVar13 = uVar13 | 1;
          }
          piVar5 = piVar5 + 1;
        }
        uVar13 = uVar13 << 1;
      }
      uVar7 = ~((int)uVar13 >> 1 | ~uVar7);
      FUN_8c1f7540(~((int)piStack_160 >> 1 | ~uVar6),3,0x8c474936,piVar9,uVar7);
      uVar11 = 0x8c474939;
      FUN_8c1f7540(uVar7,3,0x8c474939,piVar9,uVar7);
      FUN_8c1f6e5e(iVar4 * 4 + 0x19,0x8c474900,uVar11,piVar9);
    }
    uVar11 = 1;
    _DAT_8c4749e4 = 0;
    _DAT_8c4749e0 = 0;
    _DAT_8c474a04 = 0;
  }
  return uVar11;
}

__asm__(".globl _FUN_8c1f7558\n.set _FUN_8c1f7558, _FUN_8c1f7558_def\n");
