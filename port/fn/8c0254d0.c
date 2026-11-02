#include "../decls.h"
int FUN_8c0254d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                undefined4 s8,undefined4 s12,undefined4 s16)

{
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined8 *puVar2;
  undefined4 ar5_00;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar3 = ar4;
  FUN_8c0f4040(ar4,ar5,ar6,s0,s4);
  *(undefined **)(ar4 + 8) = &DAT_8c129a88;
  uVar1 = rand(iVar3,ar5,ar6,s0);
  ar7_00 = libgcc_divide_helper_01031c(uVar1,2,ar6,s0);
  ar5_00 = 0;
  uVar1 = ar7;
  FUN_8c02b9a8(ar4 + 0x174,0,ar7,ar7_00);
  uVar1 = FUN_8c02bfd8(ar4 + 0x174,ar5_00,uVar1,ar7_00);
  iVar3 = (int)(short)uVar1;
  FUN_8c034c50(ar4 + 0x2dc,iVar3,ar7,ar7_00);
  FUN_8c02b1dc(ar4 + 0x310,iVar3,ar7,ar7_00);
  Vec3_set_zero(ar4 + 0x338,iVar3,ar7,ar7_00);
  FUN_8c024848(ar4 + 0x344,iVar3,ar7,ar7_00);
  FUN_8c023dac(ar4 + 0x480,iVar3,ar7,ar7_00);
  FUN_8c02911c(ar4,iVar3,ar7,ar7_00);
  *(undefined4 *)(ar4 + 0x328) = s8;
  *(undefined4 *)(ar4 + 0x32c) = s12;
  *(undefined4 *)(ar4 + 0x410) = s16;
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xbc);
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x170) = *(undefined4 *)puVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x170) = *puVar2;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xb8);
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)puVar2;
    *(undefined4 *)(ar4 + 100) = uVar1;
    *(undefined4 *)(ar4 + 0x60) = uVar1;
    *(undefined4 *)(ar4 + 0x5c) = uVar1;
  }
  else {
    uVar5 = *puVar2;
    *(undefined8 *)(ar4 + 100) = uVar5;
    *(undefined8 *)(ar4 + 0x60) = uVar5;
    *(undefined8 *)(ar4 + 0x5c) = uVar5;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xe8);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x60);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x408) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xec);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x5c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0254d0\n.set _FUN_8c0254d0, _FUN_8c0254d0_def\n");
