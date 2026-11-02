#include "../decls.h"
uint FUN_8c2588f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *ar5_00;
  float *ar6_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a7;
  undefined4 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 in_xd2;
  char cVar10;
  undefined4 in_stack_ffffff14;
  undefined4 in_stack_ffffff18;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  
  cVar10 = '\0';
  puVar5 = &stack0xffffff14;
  puVar6 = &stack0xffffff14;
  _DAT_8c4aa518 = 0;
  _DAT_8c4aa51c = 0;
  _DAT_8c4aa520 = 0;
  _DAT_8c4aa4b4 = _DAT_8c4aa4ac / 2.0;
  _DAT_8c4aa4b8 = _DAT_8c4aa4b0 / 2.0;
  _DAT_8c4aa4dc = 0x3f800000;
  _DAT_8c4aa4e0 = 0x3f800000;
  _DAT_8c4aa4a8 = 0x43fa0000;
  _DAT_8c4aa4d4 = 0x3f800000;
  ar5_00 = &uStack_2c;
  _DAT_8c4aa4d8 = 0x476a6000;
  ar6_00 = &fStack_24;
  a7 = &DAT_8c4aa4c4;
  _DAT_8c4aa4f0 = 0;
  _DAT_8c4aa540 = 0;
  _DAT_8c4ab14c = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  _DAT_8c4aa4cc = _DAT_8c4aa4ac + -1.0;
  _DAT_8c4aa4d0 = _DAT_8c4aa4b0 + -1.0;
  _DAT_8c4aa4c4 = 0;
  _DAT_8c4aa4c8 = 0;
  uVar9 = CONCAT44(_DAT_8c4aa4d0,_DAT_8c4aa4cc);
  fStack_24 = _DAT_8c4aa4cc;
  fStack_20 = _DAT_8c4aa4d0;
  FUN_8c237770(&DAT_8c4aa4cc,ar5_00,ar6_00,&DAT_8c4aa4c4);
  puVar8 = (undefined1 *)0x8c4aa73c;
  puVar7 = (undefined4 *)&DAT_8c4aabc0;
  do {
    FUN_8c258d82(puVar8,ar5_00,ar6_00,a7);
    puVar8 = puVar8 + 0xc0;
    *puVar7 = 0x80012;
    puVar7 = puVar7 + 1;
  } while (puVar8 < &DAT_8c4aabbc);
  FUN_8c258d82(&DAT_8c4aabfc,ar5_00,ar6_00,a7);
  _DAT_8c4aabfc = 0xc0;
  _DAT_8c4aac28 = 10;
  _DAT_8c4aac2c = 0xb;
  FUN_8c20f640(&DAT_8c4aabfc,ar5_00,ar6_00,a7);
  puVar8 = &DAT_8c4aabfc;
  FUN_8c20a366(&DAT_8c4aabfc,ar5_00,ar6_00,a7);
  noop_257488(puVar8,ar5_00,ar6_00,a7,in_stack_ffffff14);
  FUN_8c20a13a(puVar8,ar5_00,ar6_00,a7);
  uVar1 = 0;
  FUN_8c258d4c(0,ar5_00,ar6_00,a7);
  FUN_8c010838(uVar1,ar5_00,&stack0xffffff14,a7,in_stack_ffffff14,in_stack_ffffff18);
  uVar3 = 0;
  do {
    uVar2 = uVar3 + 4;
    if (cVar10 == '\0') {
      uVar9 = (ulonglong)*(uint *)(puVar5 + uVar3);
    }
    else {
      in_xd2 = *(undefined8 *)(puVar5 + uVar3);
    }
    if (cVar10 == '\0') {
      *(int *)(uVar3 + 0x8c4c0d60) = (int)uVar9;
    }
    else {
      *(undefined8 *)(uVar3 + 0x8c4c0d60) = in_xd2;
    }
    uVar3 = uVar2;
  } while (uVar2 < 0xc0);
  uVar1 = 3;
  _DAT_8c4c0da0 = 3;
  FUN_8c010838(uVar2,&DAT_8c4c0da0,&stack0xffffff14,3,in_stack_ffffff14,in_stack_ffffff18);
  uVar3 = 0;
  do {
    uVar2 = uVar3;
    uVar4 = uVar3 + 4;
    if (cVar10 == '\0') {
      uVar9 = (ulonglong)*(uint *)(puVar6 + uVar3);
    }
    else {
      in_xd2 = *(undefined8 *)(puVar6 + uVar3);
    }
    if (cVar10 == '\0') {
      *(int *)(uVar3 + 0x8c4c0e80) = (int)uVar9;
    }
    else {
      *(undefined8 *)(uVar3 + 0x8c4c0e80) = in_xd2;
    }
    uVar3 = uVar4;
  } while (uVar4 < 0xc0);
  _DAT_8c4c0ec0 = uVar1;
  _DAT_8c4ab330 = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c2588f8\n.set _FUN_8c2588f8, _FUN_8c2588f8_def\n");
