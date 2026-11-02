#include "../decls.h"
undefined4 FUN_8c033530_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 ar4_00;
  undefined4 ar4_01;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  code *pcVar8;
  double dVar7;
  undefined8 in_dr4;
  undefined8 in_dr14;
  double dVar9;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_00000000;
  undefined8 uStack_5c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [4];
  double dStack_14;
  undefined4 uStack_4;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uStack_4 = (undefined4)in_dr14;
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  puVar5 = auStack_28;
  Vec3_ctor_xyz(puVar5,ar5,ar6,ar7);
  if (cVar12 == '\0') {
    uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),0x43c6c000);
  }
  else {
    uStack_5c = 0x8c01420043c6c000;
  }
  uVar3 = rand(puVar5,ar5,ar6,ar7);
  ar4_00 = rand(puVar5,ar5,ar6,ar7);
  ar4_01 = rand(puVar5,ar5,ar6,ar7);
  libgcc_divide_helper_01031c(uVar3,100,ar6,ar7);
  libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7);
  uVar3 = 100;
  libgcc_divide_helper_01031c(ar4_01,100,ar6,ar7);
  FUN_8c022d04(auStack_18,uVar3,ar6,ar7);
  Vec3_normalize(auStack_18,uVar3,ar6,ar7);
  Vec3_assign(auStack_18,auStack_38,ar6,ar7);
  uVar3 = 0xffffffff;
  puVar5 = auStack_38;
  Vec3_dtor(puVar5,0xffffffff,ar6,ar7);
  uVar3 = rand(puVar5,uVar3,ar6,ar7);
  iVar4 = libgcc_divide_helper_01031c(uVar3,100,ar6,ar7);
  if (cVar12 == '\0') {
    pcVar8 = (code *)0x42c80000;
    fVar6 = (float)uStack_5c;
  }
  else {
    fVar6 = 100.0;
    pcVar8 = Vec3_scale;
    in_xd0 = uStack_5c;
  }
  if (cVar11 == '\0') {
    fVar6 = (fVar6 / (float)(uint)pcVar8) * (float)iVar4;
  }
  else {
    fVar6 = SUB84((double)iVar4 * (double)iVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),fVar6);
    uVar1 = uStack_5c;
  }
  uStack_5c = uVar1;
  Vec3_scale(auStack_18,&uStack_5c,ar6,ar7,auStack_48);
  Vec3_add(auStack_48,auStack_28,ar6,ar7,(int)&uStack_5c + 4);
  Vec3_assign(auStack_18,(int)&uStack_5c + 4,ar6,ar7);
  Vec3_dtor((int)&uStack_5c + 4,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  dVar7 = dStack_14;
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44((*(uint*)((uchar*)&dStack_14+0)),fVar6);
  }
  if (cVar11 == '\0') {
    bVar10 = SUB84(dVar9,0) < (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    bVar10 = dVar9 < dVar7;
  }
  dVar2 = dStack_14;
  if (bVar10) {
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(ar4 + 0x48);
    }
    if (cVar11 == '\0') {
      fVar6 = SUB84(dVar9,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar9 - dVar7,0);
    }
    dVar2 = in_xd14;
    if (cVar12 == '\0') {
      dStack_14 = (double)CONCAT44((*(uint*)((uchar*)&dStack_14+4)),fVar6);
      dVar2 = dStack_14;
    }
  }
  dStack_14 = dVar2;
  Vec3_ctor_copy(in_stack_00000000,auStack_18,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c033530\n.set _FUN_8c033530, _FUN_8c033530_def\n");
