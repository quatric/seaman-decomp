#include "../decls.h"
undefined4 FUN_8c02702c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int a5;
  undefined4 a5_00;
  int ar6_00;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffc8;
  undefined2 uVar11;
  undefined4 uVar8;
  
  uVar11 = (undefined2)((uint)in_stack_ffffffc8 >> 0x10);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  uVar8 = CONCAT22(uVar11,sVar1);
  iVar4 = *(int *)(ar4 + 0x328) + sVar1 * 0x124;
  uVar2 = *(undefined4 *)(iVar4 + 0xa8);
  ar6_00 = (int)*(short *)(iVar4 + 0xa4);
  FUN_8c027234(*(undefined4 *)(ar4 + 0x30c),*(undefined4 *)(iVar4 + 0xa0),ar6_00,uVar2);
  if ((*(uint *)(ar4 + 0x74) & 0x70) == 0x20) {
    FUN_8c02722c(*(undefined4 *)(ar4 + 0x30c),1,ar6_00,uVar2);
  }
  a5 = (int)sVar1;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0x20))(*(int **)(ar4 + 0x30c),a5,ar6_00,uVar2);
  (**(code **)(**(int **)(ar4 + 0x30c) + 0x2c))(*(int **)(ar4 + 0x30c),a5,ar6_00,uVar2);
  *(undefined4 *)(ar4 + 0xa0) = *(undefined4 *)(iVar4 + 0xb4);
  a5_00 = *(undefined4 *)(ar4 + 0xa0);
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x24))(*(int **)(ar4 + 0xa4),a5_00,ar6_00,uVar2);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),a5_00,ar6_00,uVar2,uVar8);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_00,uVar2);
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xbc);
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x170) = *(undefined4 *)puVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x170) = *puVar3;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xb8);
  if (cVar10 == '\0') {
    uVar8 = *(undefined4 *)puVar3;
    *(undefined4 *)(ar4 + 100) = uVar8;
    *(undefined4 *)(ar4 + 0x60) = uVar8;
    *(undefined4 *)(ar4 + 0x5c) = uVar8;
  }
  else {
    uVar6 = *puVar3;
    *(undefined8 *)(ar4 + 100) = uVar6;
    *(undefined8 *)(ar4 + 0x60) = uVar6;
    *(undefined8 *)(ar4 + 0x5c) = uVar6;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xe8);
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(ar4 + 0x5c);
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x408) = fVar5;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xec);
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(ar4 + 0x60);
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar5;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  uVar2 = s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(ar4 + 0x478),ar6_00,uVar2);
  return uVar2;
}

__asm__(".globl _FUN_8c02702c\n.set _FUN_8c02702c, _FUN_8c02702c_def\n");
