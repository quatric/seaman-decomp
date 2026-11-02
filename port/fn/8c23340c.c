#include "../decls.h"
undefined4 FUN_8c23340c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *ar4_00;
  int *piVar4;
  int *piVar5;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int *piVar6;
  uint uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined4 in_stack_fffffeec;
  int *piVar10;
  undefined4 in_stack_fffffef0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int aiStack_b0 [24];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [16];
  
  cVar9 = '\0';
  uVar7 = 0;
  FUN_8c2360b0(ar4,auStack_2c,auStack_38,ar7);
  FUN_8c2360b0(ar5,auStack_44,auStack_50,ar7);
  ar6_00 = auStack_44;
  ar5_00 = auStack_38;
  ar7_00 = auStack_50;
  iVar1 = FUN_8c212808(auStack_2c,ar5_00,ar6_00,ar7_00);
  if (iVar1 != 0) {
    ar4_00 = aiStack_b0;
    FUN_8c010838(ar4_00,ar5_00,ar6_00,ar7_00,in_stack_fffffeec,in_stack_fffffef0);
    piVar6 = ar4_00 + 0x18;
    piVar10 = ar4_00;
    while (ar4_00 < piVar6) {
      puVar3 = (undefined8 *)(*ar4_00 * 0xc + ar4);
      if (cVar9 == '\0') {
        uStack_e0 = *(undefined4 *)puVar3;
      }
      else {
        uStack_e0 = (undefined4)*puVar3;
      }
      iVar1 = *ar4_00 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_dc = *(undefined4 *)(iVar1 + 4);
      }
      else {
        uStack_dc = (undefined4)*(undefined8 *)(iVar1 + 4);
      }
      iVar1 = *ar4_00 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_d8 = *(undefined4 *)(iVar1 + 8);
      }
      else {
        uStack_d8 = (undefined4)*(undefined8 *)(iVar1 + 8);
      }
      piVar4 = ar4_00 + 1;
      puVar3 = (undefined8 *)(*piVar4 * 0xc + ar4);
      if (cVar9 == '\0') {
        uStack_d4 = *(undefined4 *)puVar3;
      }
      else {
        uStack_d4 = (undefined4)*puVar3;
      }
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_d0 = *(undefined4 *)(iVar1 + 4);
      }
      else {
        uStack_d0 = (undefined4)*(undefined8 *)(iVar1 + 4);
      }
      piVar5 = ar4_00 + 2;
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_cc = *(undefined4 *)(iVar1 + 8);
      }
      else {
        uStack_cc = (undefined4)*(undefined8 *)(iVar1 + 8);
      }
      puVar3 = (undefined8 *)(*piVar5 * 0xc + ar4);
      if (cVar9 == '\0') {
        uStack_c8 = *(undefined4 *)puVar3;
      }
      else {
        uStack_c8 = (undefined4)*puVar3;
      }
      iVar1 = *piVar5 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_c4 = *(undefined4 *)(iVar1 + 4);
      }
      else {
        uStack_c4 = (undefined4)*(undefined8 *)(iVar1 + 4);
      }
      piVar4 = ar4_00 + 3;
      iVar1 = *piVar5 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_c0 = *(undefined4 *)(iVar1 + 8);
      }
      else {
        uStack_c0 = (undefined4)*(undefined8 *)(iVar1 + 8);
      }
      puVar3 = (undefined8 *)(*piVar4 * 0xc + ar4);
      if (cVar9 == '\0') {
        uStack_bc = *(undefined4 *)puVar3;
      }
      else {
        uStack_bc = (undefined4)*puVar3;
      }
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_b8 = *(undefined4 *)(iVar1 + 4);
      }
      else {
        uStack_b8 = (undefined4)*(undefined8 *)(iVar1 + 4);
      }
      iVar1 = *piVar4 * 0xc + ar4;
      if (cVar9 == '\0') {
        uStack_b4 = *(undefined4 *)(iVar1 + 8);
      }
      else {
        uVar8 = *(undefined8 *)(iVar1 + 8);
        uStack_b4 = (undefined4)uVar8;
        aiStack_b0[0] = (int)((ulonglong)uVar8 >> 0x20);
      }
      ar4_00 = ar4_00 + 4;
      piVar4 = piVar10;
      while (piVar4 < piVar6) {
        piVar5 = piVar4 + 3;
        piVar4 = piVar4 + 4;
        if (cVar9 != '\0') {
          uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)(*piVar5 * 0xc + ar5 + 8) >> 0x20);
        }
        iVar1 = FUN_8c212a30(&uStack_e0,&stack0xfffffef0,ar6_00,ar7_00);
        if (iVar1 != 0) {
          return 1;
        }
        uVar2 = FUN_8c2136b0(&uStack_e0,&stack0xfffffef0,ar6_00,ar7_00);
        uVar7 = uVar7 | uVar2;
        if (uVar7 == 7) {
          return 1;
        }
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c23340c\n.set _FUN_8c23340c, _FUN_8c23340c_def\n");
