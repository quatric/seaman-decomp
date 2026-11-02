#include "../decls.h"
undefined4 FUN_8c08eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar5_00;
  undefined4 ar5_01;
  undefined4 uVar3;
  undefined4 in_fr1;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  Vec3_ctor_xyz(auStack_28,ar5,ar6,ar7);
  if (cVar6 != '\0') {
    in_fr1 = (undefined4)*(undefined8 *)(ar4 + 700);
  }
  Vec3_set_xyz(auStack_34,ar5,ar6,ar7);
  FUN_8c023484(auStack_28,auStack_34,ar6,ar7,auStack_44);
  iVar1 = FUN_8c023334(ar4 + 0x14,auStack_44,ar6,ar7);
  Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_34,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  if (iVar1 == 3) {
    iVar1 = 8;
  }
  else {
    iVar1 = 9;
  }
  ar5_00 = iVar1;
  iVar2 = FUN_8c034148(ar4 + 0xb0,iVar1,ar6,ar7);
  if ((iVar2 == 1) || (iVar2 == 2)) {
    FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
    Vec3_ctor_xyz(auStack_54,ar5_00,ar6,ar7);
    if (cVar6 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(ar4 + 700),in_fr1);
    }
    else {
      uVar4 = *(ulonglong *)(ar4 + 700);
    }
    Vec3_set_xyz(auStack_60,ar5_00,ar6,ar7);
    FUN_8c023484(auStack_54,auStack_60,ar6,ar7,auStack_70);
    FUN_8c022dac(ar4 + 0x14,auStack_70,ar6,ar7);
    if (cVar6 == '\0') {
      uVar4 = uVar4 >> 0x20;
    }
    Vec3_dtor(auStack_70,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_60,0xffffffff,ar6,ar7);
    ar5_01 = 0xffffffff;
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
    if (cVar5 != '\0' || (float)uVar4 <= 1.0) {
      Vec3_ctor_xyz(auStack_d8,ar5_01,ar6,ar7);
      Vec3_set_xyz(auStack_e4,ar5_01,ar6,ar7);
      FUN_8c023484(auStack_d8,auStack_e4,ar6,ar7,auStack_f4);
      Vec3_assign(ar4 + 0x14,auStack_f4,ar6,ar7);
      Vec3_dtor(auStack_f4,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_e4,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
      uVar3 = 0;
    }
    else if (iVar1 == 8) {
      Vec3_ctor_xyz(auStack_80,ar5_01,ar6,ar7);
      Vec3_set_xyz(auStack_8c,ar5_01,ar6,ar7);
      FUN_8c023484(auStack_80,auStack_8c,ar6,ar7,auStack_9c);
      Vec3_assign(ar4 + 0x14,auStack_9c,ar6,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_8c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_80,0xffffffff,ar6,ar7);
    }
    else {
      Vec3_ctor_xyz(auStack_ac,ar5_01,ar6,ar7);
      Vec3_set_xyz(auStack_b8,ar5_01,ar6,ar7);
      FUN_8c023484(auStack_ac,auStack_b8,ar6,ar7,auStack_c8);
      Vec3_assign(ar4 + 0x14,auStack_c8,ar6,ar7);
      Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_b8,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6,ar7);
    }
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c08eb8c\n.set _FUN_8c08eb8c, _FUN_8c08eb8c_def\n");
