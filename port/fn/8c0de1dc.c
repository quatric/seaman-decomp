#include "../decls.h"
undefined4 Class_12b930_m1_0de1dc_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  int iVar3;
  float fVar4;
  double in_dr0;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [12];
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_20,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_30,iVar2,ar6_00,ar7);
  if (*(int *)(ar4 + 0xacc) == 2) {
    ar7 = auStack_18;
    ar6_00 = auStack_1c;
    FUN_8c0db5a8(ar4 + 0x9e8,auStack_20,ar6_00,ar7);
    iVar2 = ar4 + 0xa98;
    Vec3_assign(auStack_30,iVar2,ar6_00,ar7);
    (**(code **)(*(int *)(*(int *)(ar4 + 0xac8) + 8) + 0x130))
              (*(int *)(ar4 + 0xac8),iVar2,ar6_00,ar7);
    uVar1 = uStack_28;
    if (cVar6 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(int)uStack_28);
      uVar1 = in_xd0;
    }
    if (cVar5 == '\0') {
      fVar4 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar4 = SUB84(in_dr0 - in_dr0,0);
    }
    if (cVar6 == '\0') {
      uStack_28 = CONCAT44((*(uint*)((uchar*)&uStack_28+4)),fVar4);
      uVar1 = uStack_28;
    }
    uStack_28 = uVar1;
    for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
      ar7 = auStack_20;
      ar6_00 = auStack_30;
      iVar2 = ar4 + 0xa68;
      FUN_8c0d7294(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7);
    }
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    FUN_8c0d7100(ar4 + iVar3 * 0x16c + 0x22d48,iVar2,ar6_00,ar7);
  }
  FUN_8c0e389c(ar4,iVar2,ar6_00,ar7);
  FUN_8c0d0178(ar4 + 0x13b24,iVar2,ar6_00,ar7);
  iVar2 = ar5;
  FUN_8c0d9600(ar4 + 0x22704,ar5,ar6_00,ar7);
  get_field_a0_035724(ar5,iVar2,ar6_00,ar7);
  pure_virtual_stub(ar4,ar5,ar6_00,ar7);
  Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7);
  iVar2 = ar4 + 0x10ac;
  FUN_8c0e3994(ar4,iVar2,ar6,ar7);
  FUN_8c0d64a0(ar4 + 0xa68,iVar2,ar6,ar7);
  FUN_8c0dbd80(ar4,iVar2,ar6,ar7);
  FUN_8c0d0714(ar4 + 0x13b24,iVar2,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return 1;
}

__asm__(".globl _Class_12b930_m1_0de1dc\n.set _Class_12b930_m1_0de1dc, _Class_12b930_m1_0de1dc_def\n");
