#include "../decls.h"
undefined4 FUN_8c0d6d58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  float fVar3;
  ulonglong in_dr0;
  code *pcVar5;
  double dVar4;
  ulonglong in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_3c [16];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_2c,uVar2,ar6_00,ar7);
  if (DAT_8c437c80 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      _DAT_8c437c7c = _DAT_8c437c7c & 0xffffffff00000000;
      uVar1 = _DAT_8c437c7c;
    }
    _DAT_8c437c7c = uVar1;
    _DAT_8c437c7c = CONCAT14(1,_DAT_8c437c7c);
  }
  if (DAT_8c437c88 == '\0') {
    in_dr0 = in_dr0 & 0xffffffff;
    uVar1 = in_dr0;
    if (cVar7 == '\0') {
      _DAT_8c437c84 = _DAT_8c437c84 & 0xffffffff00000000;
      uVar1 = _DAT_8c437c84;
    }
    _DAT_8c437c84 = uVar1;
    _DAT_8c437c84 = CONCAT14(1,_DAT_8c437c84);
  }
  Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_3c);
  Vec3_assign(&uStack_1c,auStack_3c,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
  Vec3_length_sq(&uStack_1c,uVar2,ar6_00,ar7);
  uVar1 = in_dr0;
  if (cVar7 == '\0') {
    _DAT_8c437c7c = CONCAT44(_DAT_8c437c80,(int)(in_dr0 >> 0x20));
    uVar1 = _DAT_8c437c7c;
  }
  _DAT_8c437c7c = uVar1;
  (**(code **)(*(int *)(ar4 + 0x11c) + 8))((int *)(ar4 + 0x11c),uVar2,ar6_00,ar7);
  fVar3 = (float)(in_dr0 >> 0x20);
  if (cVar7 == '\0') {
    _DAT_8c437c84 = CONCAT44(_DAT_8c437c88,fVar3);
    pcVar5 = (code *)0x3f000000;
    in_dr0 = in_xd0;
  }
  else {
    fVar3 = 0.5;
    pcVar5 = Vec3_length;
    _DAT_8c437c84 = in_dr0;
  }
  if (cVar6 == '\0' && (float)(uint)pcVar5 < fVar3) {
    Vec3_length(&uStack_1c,uVar2,ar6_00,ar7);
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_1c,_DAT_8c437c84);
    }
    else {
      dVar4 = (double)CONCAT44(uStack_18,uStack_1c);
      in_dr0 = _DAT_8c437c84;
    }
    if (cVar6 == '\0') {
      fStack_2c = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_2c = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_18,_DAT_8c437c84);
    }
    else {
      fStack_2c = (float)in_dr0;
      dVar4 = (double)CONCAT44(uStack_14,uStack_18);
      in_dr0 = _DAT_8c437c84;
    }
    if (cVar6 == '\0') {
      fStack_28 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_28 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = (double)CONCAT44(uStack_14,_DAT_8c437c84);
    }
    else {
      fStack_28 = (float)in_dr0;
      dVar4 = (double)CONCAT44(uStack_10,uStack_14);
      in_dr0 = _DAT_8c437c84;
    }
    if (cVar6 == '\0') {
      fStack_24 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_24 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 != '\0') {
      fStack_24 = (float)in_dr0;
      uStack_20 = (undefined4)(in_dr0 >> 0x20);
    }
    FUN_8c023aa0(ar5,&fStack_2c,ar6_00,ar7);
    Vec3_dtor(&fStack_2c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_1c,0xffffffff,ar6_00,ar7);
    uVar2 = 2;
  }
  else {
    Vec3_assign(ar5,ar6,ar6_00,ar7);
    Vec3_dtor(&fStack_2c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_1c,0xffffffff,ar6_00,ar7);
    uVar2 = 4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d6d58\n.set _FUN_8c0d6d58, _FUN_8c0d6d58_def\n");
