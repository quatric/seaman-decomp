#include "../decls.h"
int FUN_8c25d0a0_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *extraout_r2;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *extraout_r3;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *a5;
  uint uVar18;
  int iVar19;
  uint n;
  bool bVar20;
  uint uVar21;
  uint in_stack_00000000;
  int in_stack_00000004;
  int iStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint auStack_80 [7];
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint auStack_50 [7];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  bVar1 = false;
  bVar20 = _DAT_8c4a9d70 == 1;
  iVar17 = ar5;
  uVar18 = ar6;
  if (_DAT_8c4a9db8 == 0) {
    uVar18 = in_stack_00000000;
    FUN_8c25cebc(ar4,ar5,in_stack_00000000,ar7);
  }
  uVar21 = ar4 * ar5;
  iVar19 = in_stack_00000000 * 0x20;
  iStack_d8 = ar6 * uVar21 * 0x18 + *(int *)(iVar19 + -0x73b55fe4);
  if (((_DAT_8c4a9bb0 & 0x20) != 0) && (_DAT_8c4aa010 != 0)) {
    iVar17 = *(int *)(&DAT_8c4aa018 + iVar19);
    uStack_cc = FUN_8c25cfc2(*(int *)(iVar19 + -0x73b55fe4) + uVar21 * 0x60,iVar17,uVar18,ar7);
    if ((_DAT_8c4aa05c == 0) && ((_DAT_8c4aa064 != 0 && (bVar20 != 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if ((_DAT_8c4a9bb0 & 0x80) != 0) {
    FUN_8c25d028(iStack_d8,iVar17,uVar18,ar7);
    iStack_d8 = iStack_d8 + 0x18;
  }
  if (_DAT_8c4aa05c == 0) {
    uStack_98 = 0x80000000;
  }
  else {
    uStack_98 = 0;
  }
  if (_DAT_8c4aa060 == 0) {
    uStack_94 = 0x80000000;
  }
  else {
    uStack_94 = 0;
  }
  if (_DAT_8c4aa064 == 0) {
    uStack_90 = 0x80000000;
  }
  else {
    uStack_90 = 0;
  }
  if (_DAT_8c4aa068 == 0) {
    uStack_84 = 0x80000000;
  }
  else {
    uStack_84 = 0;
  }
  if (_DAT_8c4aa06c == 0) {
    uStack_88 = 0x80000000;
  }
  else {
    uStack_88 = 0;
  }
  iVar7 = *(int *)(&DAT_8c277d80 + _DAT_8c4aa05c * 4);
  iVar9 = *(int *)(&DAT_8c277d80 + _DAT_8c4aa060 * 4);
  iVar10 = *(int *)(&DAT_8c277d80 + _DAT_8c4aa064 * 4);
  iVar11 = *(int *)(&DAT_8c277d80 + _DAT_8c4aa068 * 4);
  iVar12 = *(int *)(&DAT_8c277d80 + _DAT_8c4aa06c * 4);
  iVar19 = *(int *)(iVar19 + -0x73b55fdc);
  iVar4 = *(int *)(&DAT_8c277d80 + _DAT_8c4aa05c * 4) * uVar21 * 4 + iVar19;
  iVar5 = iVar4 + *(int *)(&DAT_8c277d80 + _DAT_8c4aa060 * 4) * uVar21 * 4;
  iVar6 = *(int *)(&DAT_8c277d80 + _DAT_8c4aa064 * 4) * uVar21 * 4 + iVar5;
  iVar17 = _DAT_8c4aa068 * 4;
  n = 0;
  iVar13 = *(int *)(&DAT_8c277d80 + iVar17);
  uVar18 = (uint)bVar20 << 0x1d;
  uStack_d4 = ar6;
  if (uVar21 != 0) {
    do {
      uVar16 = 0;
      if (in_stack_00000004 == 0) {
        uStack_d4 = libgcc_divide_helper_01051c(n,_DAT_8c4aa00c);
        uStack_d0 = libgcc_divide_helper_0106dc(n,*extraout_r2);
      }
      else if (in_stack_00000004 == 1) {
        uStack_d4 = libgcc_divide_helper_0106dc(n,_DAT_8c4aa008);
        uStack_d0 = libgcc_divide_helper_01051c(n,*extraout_r3);
      }
      if ((_DAT_8c4a9d74 == 1) && ((_DAT_8c4a9d78 < uStack_d4 || (_DAT_8c4a9d7c < uStack_d0)))) {
        uVar16 = 0x80000000;
      }
      uVar2 = (uStack_d0 & 0x3f) << 8;
      iVar17 = uStack_d0 * _DAT_8c4aa008 + uStack_d4;
      uVar3 = (uStack_d4 & 0x3f) << 2;
      uVar14 = (uint)(n == uVar21 - 1) << 0x1f | uVar2 | uVar3;
      auStack_50[6] = uVar14 | uVar18;
      uStack_34 = iVar7 * 4 * iVar17 + iVar19 | uStack_98 | uVar16;
      uVar8 = iVar9 * 4 * iVar17 + iVar4 | uStack_94 | uVar16;
      uVar15 = iVar10 * 4 * iVar17 + iVar5 | uStack_90 | uVar16;
      uStack_28 = iVar11 * 4 * iVar17 + iVar6 | uStack_84 | uVar16;
      uStack_24 = uVar15;
      if (DAT_8c277d90 == 0) {
        uStack_24 = iVar12 * 4 * iVar17 + iVar6 + iVar13 * uVar21 * 4 | uStack_88 | uVar16;
      }
      uStack_30 = uVar8;
      if ((_DAT_8c4a9d80 != 0) && (uStack_30 = uStack_28, _DAT_8c4a9d84 == 1)) {
        uStack_30 = uVar8;
        uStack_28 = uVar8;
      }
      uStack_2c = uVar15;
      if ((_DAT_8c4a9bb0 & 0x20) == 0) {
        iVar17 = FUN_8c20a87c(n * 0x18 + iStack_d8,auStack_50 + 6,0x18,ar7);
      }
      else {
        if (_DAT_8c4aa010 == 0) {
          auStack_50[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
          auStack_50[0] = uVar14 | uVar18 | 0x40000000;
          auStack_50[1] = 0x80000000;
          auStack_50[2] = 0x80000000;
          auStack_50[3] = 0x80000000;
          auStack_50[4] = 0x80000000;
          auStack_50[5] = 0x80000000;
          iVar17 = n * 0x30 + iStack_d8;
          FUN_8c20a87c(iVar17,auStack_50 + 6,0x18,ar7);
          iVar17 = iVar17 + 0x18;
          a5 = auStack_50;
        }
        else {
          auStack_50[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
          auStack_80[6] = uVar2 | uVar3 | uVar18 | 0x50000000;
          auStack_80[0] = uVar14 | uVar18 | 0x40000000;
          auStack_50[0] = uVar2 | uVar3 | 0x50000000;
          if (bVar1) {
            uStack_34 = uStack_cc;
          }
          auStack_50[1] = 0x80000000;
          auStack_50[2] = 0x80000000;
          auStack_50[3] = uStack_cc;
          auStack_50[4] = 0x80000000;
          auStack_50[5] = 0x80000000;
          uStack_64 = 0x80000000;
          uStack_60 = 0x80000000;
          uStack_58 = uStack_28;
          uStack_54 = 0x80000000;
          uStack_2c = 0x80000000;
          uStack_28 = 0x80000000;
          auStack_80[1] = 0x80000000;
          auStack_80[2] = 0x80000000;
          auStack_80[3] = 0x80000000;
          auStack_80[4] = 0x80000000;
          auStack_80[5] = 0x80000000;
          iVar17 = n * 0x60 + iStack_d8;
          uStack_5c = uVar15;
          FUN_8c20a87c(iVar17,auStack_50 + 6,0x18,ar7);
          FUN_8c20a87c(iVar17 + 0x18,auStack_50,0x18,ar7);
          FUN_8c20a87c(iVar17 + 0x30,auStack_80 + 6,0x18,ar7);
          a5 = auStack_80;
          iVar17 = iVar17 + 0x48;
        }
        iVar17 = FUN_8c20a87c(iVar17,a5,0x18,ar7);
      }
      n = n + 1;
    } while (n < uVar21);
  }
  return iVar17;
}

__asm__(".globl _FUN_8c25d0a0\n.set _FUN_8c25d0a0, _FUN_8c25d0a0_def\n");
