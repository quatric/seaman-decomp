#include "../decls.h"
undefined4 FUN_8c02374c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 ar7_00;
  float fVar3;
  undefined4 uVar4;
  double in_dr0;
  ulonglong uVar5;
  double dVar6;
  float fVar7;
  undefined4 in_fr4;
  undefined4 in_fr15;
  double dVar8;
  int iVar9;
  int ar5_00;
  char cVar10;
  char cVar11;
  undefined4 in_stack_00000000;
  undefined4 uStack_80;
  undefined4 auStack_78 [3];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_50 [17];
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar11 == '\0') {
    in_fr15 = uVar4;
    uVar4 = auStack_78[0];
  }
  auStack_78[0] = uVar4;
  FUN_8c02327c(ar4,ar5,ar6,ar7);
  uStack_80 = SUB84(in_dr0,0);
  uStack_5c = uStack_80;
  dVar8 = in_dr0;
  if (cVar11 == '\0') {
    uStack_5c = 0;
    dVar8 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  uVar5 = (ulonglong)in_dr0 & 0xffffffff;
  if (cVar11 == '\0') {
    uStack_58 = 0;
  }
  else {
    uStack_54 = 0;
    uStack_58 = uStack_80;
  }
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)(uVar5 >> 0x20);
  uStack_54 = uVar4;
  if (cVar11 != '\0') {
    uStack_54 = (undefined4)uVar5;
    auStack_50[0] = uVar4;
  }
  FUN_8c25cddc(auStack_50,ar5,ar6,ar7,in_fr4);
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar3 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar3);
    iVar9 = (int)fVar3;
  }
  else {
    dVar6 = dVar6 / dVar6;
    iVar9 = (int)dVar6;
  }
  uVar4 = SUB84(dVar6,0);
  FUN_8c256a78(auStack_50,iVar9,ar6,ar7,in_fr4);
  puVar2 = &uStack_68;
  puVar1 = &uStack_5c;
  FUN_8c21279c(auStack_50,puVar1,puVar2,ar7,in_fr4);
  uStack_5c = uStack_68;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  FUN_8c25cddc(auStack_50,puVar1,puVar2,ar7,in_fr4);
  ar7_00 = 0;
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,uVar4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar3 = (float)((ulonglong)dVar8 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20);
    dVar8 = (double)CONCAT44(fVar3,SUB84(dVar8,0));
    iVar9 = (int)fVar3;
  }
  else {
    dVar8 = dVar8 / dVar6;
    fVar3 = (float)((ulonglong)dVar8 >> 0x20);
    iVar9 = (int)dVar8;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = (double)CONCAT44(fVar3,SUB84(dVar8,0) * (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    ar5_00 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar8 / dVar6);
  }
  FUN_8c256b0c(auStack_50,ar5_00,iVar9,0,in_fr4);
  puVar2 = &uStack_68;
  puVar1 = &uStack_5c;
  FUN_8c21279c(auStack_50,puVar1,puVar2,ar7_00,in_fr4);
  Vec3_ctor_zero(auStack_78,puVar1,puVar2,ar7_00);
  if (cVar11 != '\0') {
    uStack_6c = uStack_5c;
  }
  Vec3_ctor_copy(in_stack_00000000,auStack_78,puVar2,ar7_00);
  Vec3_dtor(auStack_78,0xffffffff,puVar2,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c02374c\n.set _FUN_8c02374c, _FUN_8c02374c_def\n");
