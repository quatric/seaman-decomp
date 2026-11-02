#include "../decls.h"
undefined4 Class_129a24_m1_019b68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff28;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [16];
  undefined1 auStack_48 [68];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uStack_94 = *(undefined4 *)(ar4 + 0x90);
  uStack_90 = *(undefined4 *)(ar4 + 0x94);
  uStack_8c = *(undefined4 *)(ar4 + 0x98);
  uStack_a0 = *(undefined4 *)(ar4 + 0xa0);
  uStack_9c = *(undefined4 *)(ar4 + 0xa4);
  uStack_98 = *(undefined4 *)(ar4 + 0xa8);
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_stack_ffffff28);
  FUN_8c25cddc(auStack_88,ar5,ar6,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb4);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256ce0(auStack_88,iVar6,ar6,ar7,in_stack_ffffff28);
  FUN_8c255d6c(auStack_48,auStack_88,ar6,ar7,in_stack_ffffff28);
  puVar3 = &uStack_ac;
  puVar2 = &uStack_94;
  FUN_8c21279c(auStack_48,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uStack_ac,*(undefined4 *)(ar4 + 0x80));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x80);
    dVar5 = (double)CONCAT44(uStack_a8,uStack_ac);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
    dVar5 = (double)CONCAT44(uStack_a4,*(undefined4 *)(ar4 + 0x80));
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x80);
    dVar5 = (double)CONCAT44(uStack_a0,uStack_a4);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  FUN_8c235f44(ar4 + 4,puVar2,puVar3,ar7);
  FUN_8c25cddc(auStack_88,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb0));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb0);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256a78(auStack_88,iVar6,puVar3,ar7,in_stack_ffffff28);
  puVar2 = auStack_88;
  FUN_8c255d6c(auStack_48,puVar2,puVar3,ar7,in_stack_ffffff28);
  FUN_8c25cddc(auStack_88,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb8));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb8);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256d7c(auStack_88,iVar6,puVar3,ar7,in_stack_ffffff28);
  FUN_8c255d6c(auStack_48,auStack_88,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    uStack_94 = *(undefined4 *)(ar4 + 0x6c);
    uStack_90 = *(undefined4 *)(ar4 + 0x70);
    uStack_8c = *(undefined4 *)(ar4 + 0x74);
  }
  else {
    uStack_94 = (undefined4)*(undefined8 *)(ar4 + 0x6c);
    uStack_90 = (undefined4)*(undefined8 *)(ar4 + 0x70);
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x74);
    auStack_88[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x74) >> 0x20);
  }
  FUN_8c21279c(auStack_48,&uStack_94,&uStack_c4,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = uStack_c4;
    *(undefined4 *)(ar4 + 0x54) = uStack_c0;
    *(undefined4 *)(ar4 + 0x58) = uStack_bc;
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = CONCAT44(uStack_c0,uStack_c4);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(uStack_bc,uStack_c0);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(uStack_b8,uStack_bc);
  }
  puVar3 = &uStack_b8;
  puVar2 = &uStack_c4;
  FUN_8c255f40(&uStack_ac,puVar2,puVar3,ar7);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uStack_b8,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_b4,uStack_b8);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
    dVar5 = (double)CONCAT44(uStack_b4,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_b0,uStack_b4);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x48);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x48) = fVar4;
    dVar5 = (double)CONCAT44(uStack_b0,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(ar4 + 0x48) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_ac,uStack_b0);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  vec3_clear(ar4 + 0x80,puVar2,puVar3,ar7);
  uVar1 = FUN_8c2572ec(ar4 + 4,puVar2,puVar3,ar7);
  return uVar1;
}

__asm__(".globl _Class_129a24_m1_019b68\n.set _Class_129a24_m1_019b68, _Class_129a24_m1_019b68_def\n");
