#include "../decls.h"
undefined4 FUN_8c255346_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *a5;
  uint uVar7;
  int *a6;
  uint uVar8;
  int *a7;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double in_dr2;
  double dVar13;
  float fVar14;
  undefined4 in_fr5;
  float fVar15;
  undefined4 in_fr12;
  undefined8 in_dr14;
  bool bVar16;
  uint uVar17;
  char cVar18;
  char cVar19;
  uint uStack_74;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int aiStack_30 [3];
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar19 = '\0';
  cVar18 = '\0';
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  iVar9 = 0;
  if (ar4[1] == 0) {
    return ain0;
  }
  if ((*ar4 & 8) != 0) {
    return *ar4;
  }
  puVar4 = (undefined4 *)(uint)ar4[1];
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  fVar14 = 2.1474836e+09;
  iVar11 = puVar4[2];
  iVar5 = _DAT_8c4aad78 * 4;
  if (_DAT_8c4aad84 == 1) {
    iVar10 = *(int *)(_DAT_8c4aad68 + iVar5);
    if (iVar10 != 0) {
      fVar14 = _DAT_8c4aad70;
      if (2.1474836e+09 < _DAT_8c4aad70) {
        fVar14 = _DAT_8c4aad70 + -4.2949673e+09;
      }
      uVar7 = 0;
      uVar6 = *(uint *)(_DAT_8c4aad6c + iVar5);
      while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
        uVar6 = uVar7 + uVar8 >> 1;
        if (*(uint *)(uVar6 * 8 + iVar10) <= (uint)(int)fVar14) {
          uVar7 = uVar6;
          uVar6 = uVar8;
        }
      }
      FUN_8c254fbc(iVar10,uVar7,*(uint *)(_DAT_8c4aad6c + iVar5),&iStack_3c);
      iVar9 = 1;
    }
  }
  else if (_DAT_8c4aad84 == 2) {
    iVar10 = *(int *)(_DAT_8c4aad68 + iVar5);
    if (iVar10 != 0) {
      fVar14 = _DAT_8c4aad70;
      if (2.1474836e+09 < _DAT_8c4aad70) {
        fVar14 = _DAT_8c4aad70 + -4.2949673e+09;
      }
      uVar7 = 0;
      uVar6 = *(uint *)(_DAT_8c4aad6c + iVar5);
      while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
        uVar6 = uVar7 + uVar8 >> 1;
        if (*(uint *)(uVar6 * 8 + iVar10) <= (uint)(int)fVar14) {
          uVar7 = uVar6;
          uVar6 = uVar8;
        }
      }
      FUN_8c254fbc(iVar10,uVar7,*(uint *)(_DAT_8c4aad6c + iVar5),&iStack_4c);
      iVar9 = 2;
    }
  }
  else if (_DAT_8c4aad84 == 3) {
    iVar10 = *(int *)(_DAT_8c4aad68 + iVar5);
    if (iVar10 != 0) {
      if (_DAT_8c4aad70 <= 2.1474836e+09) {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c4aad70);
      }
      else {
        in_dr2 = (double)CONCAT44(0xcf800000,_DAT_8c4aad70 + -4.2949673e+09);
      }
      uVar7 = 0;
      uVar6 = *(uint *)(_DAT_8c4aad6c + iVar5);
      while (uVar8 = uVar6, 1 < uVar8 - uVar7) {
        uVar6 = uVar7 + uVar8 >> 1;
        if (*(uint *)(uVar6 * 8 + iVar10) <= (uint)(int)SUB84(in_dr2,0)) {
          uVar7 = uVar6;
          uVar6 = uVar8;
        }
      }
      FUN_8c254fbc(iVar10,uVar7,*(uint *)(_DAT_8c4aad6c + iVar5),&iStack_3c);
      iVar9 = 1;
    }
    _DAT_8c4aad78 = _DAT_8c4aad78 + 1;
    iVar5 = *(int *)(_DAT_8c4aad68 + _DAT_8c4aad78 * 4);
    if (iVar5 != 0) {
      uVar7 = *(uint *)(_DAT_8c4aad6c + _DAT_8c4aad78 * 4);
      if (cVar19 == '\0') {
        dVar13 = (double)CONCAT44(_DAT_8c4aad70,in_fr5);
      }
      else {
        dVar13 = (double)CONCAT44(_DAT_8c4aad74,_DAT_8c4aad70);
      }
      fVar15 = (float)((ulonglong)dVar13 >> 0x20);
      if (cVar18 == '\0') {
        bVar16 = fVar14 < fVar15;
      }
      else {
        bVar16 = (double)CONCAT44(in_fr12,fVar14) < dVar13;
      }
      uVar6 = 0;
      if (bVar16) {
        if (cVar19 == '\0') {
          dVar13 = (double)CONCAT44(0xcf800000,fVar15);
        }
        else {
          dVar13 = -1.8639332822651773e-249;
        }
        if (cVar18 == '\0') {
          fVar14 = (float)((ulonglong)dVar13 >> 0x20);
          in_dr2 = (double)CONCAT44(fVar14,SUB84(dVar13,0) + fVar14);
        }
        else {
          in_dr2 = dVar13 + dVar13;
        }
      }
      else if (cVar19 == '\0') {
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar15);
      }
      uVar8 = uVar7;
      if (cVar18 == '\0') {
        uVar17 = (uint)SUB84(in_dr2,0);
      }
      else {
        uVar17 = (uint)in_dr2;
      }
      while (uStack_74 = uVar8, 1 < uStack_74 - uVar6) {
        uVar8 = uStack_74 + uVar6 >> 1;
        if (*(uint *)(uVar8 * 8 + iVar5) <= uVar17) {
          uVar6 = uVar8;
          uVar8 = uStack_74;
        }
      }
      FUN_8c254fbc(iVar5,uVar6,uVar7,&iStack_4c);
      iVar9 = iVar9 + 2;
    }
  }
  iVar5 = _DAT_8c4ab0c4;
  a7 = &iStack_44;
  a5 = aiStack_30;
  a6 = &iStack_40;
  if (iVar9 == 1) {
    iVar9 = 0;
    iVar10 = 0;
    if (0 < iVar11) {
      do {
        a7 = (int *)(aiStack_30[0] + iVar10);
        a5 = (int *)(iStack_38 + iVar10);
        a6 = (int *)(iStack_34 + iVar10);
        FUN_8c2552b0(iVar10 + iStack_3c,a5,a6,a7);
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 < iVar11);
    }
    *(int *)(uint)ar4[1] = iVar5;
  }
  else {
    if (iVar9 == 2) {
      iVar9 = 0;
      iVar10 = 0;
      if (0 < iVar11) {
        do {
          a5 = (int *)(iVar10 + iStack_48);
          a7 = (int *)(iStack_40 + iVar10);
          a6 = (int *)(iStack_44 + iVar10);
          FUN_8c2551d4(iStack_4c + iVar10,a5,a6,a7);
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + 0xc;
        } while (iVar9 < iVar11);
      }
    }
    else {
      if (iVar9 != 3) goto LAB_8c25569a;
      iVar9 = 0;
      iVar10 = iVar11 * 0xc + _DAT_8c4ab0c4;
      iVar12 = 0;
      if (0 < iVar11) {
        do {
          FUN_8c2552b0(iStack_3c + iVar12,iStack_38 + iVar12,iStack_34 + iVar12,
                       aiStack_30[0] + iVar12);
          a5 = (int *)(iStack_48 + iVar12);
          a7 = (int *)(iStack_40 + iVar12);
          a6 = (int *)(iStack_44 + iVar12);
          FUN_8c2551d4(iStack_4c + iVar12,a5,a6,a7);
          iVar9 = iVar9 + 1;
          iVar12 = iVar12 + 0xc;
        } while (iVar9 < iVar11);
      }
      *(int *)(uint)ar4[1] = iVar5;
      iVar5 = iVar10;
    }
    *(int *)(ar4[1] + 4) = iVar5;
  }
LAB_8c25569a:
  uVar1 = (*_DAT_8c4ab0bc)(ar4[1],a5,a6,a7);
  *(undefined4 *)(uint)ar4[1] = uVar2;
  *(undefined4 *)(ar4[1] + 4) = uVar3;
  return uVar1;
}

__asm__(".globl _FUN_8c255346\n.set _FUN_8c255346, _FUN_8c255346_def\n");
