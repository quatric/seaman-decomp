#include "../decls.h"
undefined4 Class_1299f8_m4_019588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *ar6_00;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 in_dr4;
  undefined4 uVar8;
  undefined8 in_dr6;
  undefined4 in_fr13;
  float fVar9;
  undefined4 uVar10;
  double in_xd0;
  int iVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_00000000;
  undefined4 uStack_168;
  undefined4 auStack_160 [4];
  undefined1 auStack_150 [12];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 auStack_138 [16];
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [64];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  dVar4 = (double)CONCAT44((int)in_dr4,in_fr13);
  uVar10 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  FUN_8c0241e8(&uStack_48,ar5,ar6,ar7);
  FUN_8c024088(&uStack_68,ar5,ar6,ar7);
  FUN_8c023e44(auStack_a8,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_b8,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    uStack_144 = *(undefined4 *)(ar4 + 0x50);
    uStack_140 = *(undefined4 *)(ar4 + 0x54);
    uStack_13c = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    uStack_144 = (undefined4)*(undefined8 *)(ar4 + 0x50);
    uStack_140 = (undefined4)*(undefined8 *)(ar4 + 0x54);
    uStack_13c = (undefined4)*(undefined8 *)(ar4 + 0x58);
    auStack_138[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x58) >> 0x20);
  }
  FUN_8c023e7c(auStack_a8,ar5,ar6,ar7);
  FUN_8c25cddc(auStack_f8,ar5,ar6,ar7,uVar8);
  puVar1 = auStack_138;
  FUN_8c25cddc(puVar1,ar5,ar6,ar7,uVar8);
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b4,uVar8);
  }
  else {
    in_xd0 = (double)CONCAT44(uStack_168,uVar8);
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
  }
  if (cVar12 == '\0') {
    fVar2 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b8,fVar2);
  }
  else {
    fVar2 = SUB84(in_xd0,0);
    dVar7 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar4 >> 0x20) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar9 = (float)((ulonglong)(dVar4 - dVar7) >> 0x20);
  }
  FUN_8c013b8c(puVar1,ar5,ar6,ar7);
  uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,uVar8);
    dVar7 = in_xd0;
  }
  else {
    dVar4 = 12831.689682006836;
    auStack_160[0] = uVar8;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(0x40c90fd8,fVar3);
  }
  else {
    dVar4 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44((float)(int)fVar3,uVar10);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar4 = (double)(int)(dVar4 / dVar4);
  }
  if (cVar13 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar5;
  }
  if (cVar13 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,SUB84(dVar5,0));
  }
  else {
    dVar5 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  FUN_8c013b8c(puVar1,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,(int)((ulonglong)dVar5 >> 0x20));
    dVar5 = dVar7;
  }
  else {
    dVar6 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x40c90fd8,fVar3);
  }
  else {
    dVar7 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    iVar11 = (int)fVar3;
  }
  else {
    fVar3 = SUB84(dVar7 / dVar7,0);
    iVar11 = (int)(dVar7 / dVar7);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44(fVar9,(float)iVar11 * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = (double)CONCAT44(fVar9,(float)iVar11) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar6,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = dVar6 / dVar7;
  }
  uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44(uVar8,-SUB84(dVar6,0) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = (double)CONCAT44(uVar8,-SUB84(dVar6,0)) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    iVar11 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar6 / dVar7);
  }
  FUN_8c256ce0(auStack_f8,iVar11,ar6,ar7,fVar2);
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44(-(float)((ulonglong)dVar4 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = -dVar4;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar4 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20);
    dVar4 = (double)CONCAT44(fVar9,SUB84(dVar4,0));
    iVar11 = (int)fVar9;
  }
  else {
    dVar4 = dVar4 / dVar7;
    iVar11 = (int)dVar4;
  }
  FUN_8c256a78(auStack_138,iVar11,ar6,ar7,fVar2);
  FUN_8c255d6c(auStack_f8,auStack_138,ar6,ar7,fVar2);
  ar6_00 = auStack_150;
  puVar1 = &uStack_144;
  FUN_8c21279c(auStack_f8,puVar1,ar6_00,ar7,fVar2);
  FUN_8c022d04(auStack_58,puVar1,ar6_00,ar7);
  Vec3_length(auStack_58,puVar1,ar6_00,ar7);
  if (cVar13 == '\0') {
    uStack_68 = *(undefined4 *)(ar4 + 0x44);
    uStack_64 = *(undefined4 *)(ar4 + 0x48);
    uStack_60 = *(undefined4 *)(ar4 + 0x4c);
    dVar7 = (double)CONCAT44(uStack_60,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    uStack_68 = (undefined4)*(undefined8 *)(ar4 + 0x44);
    uStack_64 = (undefined4)*(undefined8 *)(ar4 + 0x48);
    dVar7 = *(double *)(ar4 + 0x4c);
    uStack_60 = SUB84(dVar7,0);
    uStack_5c = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar5 = *(double *)(ar4 + 0x50);
  }
  fVar2 = SUB84(dVar4,0);
  if (cVar12 == '\0') {
    fVar9 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar9);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x44);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    uStack_48 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x54));
  }
  else {
    uStack_48 = SUB84(dVar5,0);
    dVar5 = *(double *)(ar4 + 0x54);
  }
  if (cVar12 == '\0') {
    fVar9 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar9);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x48);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    uStack_44 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x58));
  }
  else {
    uStack_44 = SUB84(dVar5,0);
    dVar5 = *(double *)(ar4 + 0x58);
  }
  if (cVar12 == '\0') {
    fVar2 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar2 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar2);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x4c);
  }
  if (cVar12 == '\0') {
    fStack_40 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_40 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar13 == '\0') {
    uStack_38 = *(undefined4 *)(ar4 + 0x50);
    uStack_34 = *(undefined4 *)(ar4 + 0x54);
    uStack_30 = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    fStack_40 = SUB84(dVar5,0);
    uStack_3c = (undefined4)((ulonglong)dVar5 >> 0x20);
    uStack_38 = (undefined4)*(undefined8 *)(ar4 + 0x50);
    uStack_34 = (undefined4)*(undefined8 *)(ar4 + 0x54);
    uStack_30 = (undefined4)*(undefined8 *)(ar4 + 0x58);
    uStack_2c = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x58) >> 0x20);
  }
  puVar1 = &uStack_48;
  FUN_8c0240bc(&uStack_68,&uStack_38,puVar1,ar7);
  Vec3_assign(auStack_28,auStack_160,puVar1,ar7);
  Vec3_dtor(auStack_160,0xffffffff,puVar1,ar7);
  Vec3_ctor_copy(in_stack_00000000,auStack_28,puVar1,ar7);
  Vec3_dtor(auStack_b8,0xffffffff,puVar1,ar7);
  free_if_nonnull_wrap_023e4c(auStack_a8,0xffffffff,puVar1,ar7);
  FUN_8c0198dc(&uStack_68,0xffffffff,puVar1,ar7);
  FUN_8c019928(&uStack_48,0xffffffff,puVar1,ar7);
  Vec3_dtor(auStack_28,0xffffffff,puVar1,ar7);
  return 0;
}

__asm__(".globl _Class_1299f8_m4_019588\n.set _Class_1299f8_m4_019588, _Class_1299f8_m4_019588_def\n");
