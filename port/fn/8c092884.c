#include "../decls.h"
undefined4 FUN_8c092884_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar3;
  double in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined4 in_stack_00000000;
  int iStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  float fStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_set_zero(&fStack_14,ar5,ar6,ar7);
  Vec3_sub(ar6,ar5,ar6_00,ar7_00,auStack_34);
  Vec3_normalize(auStack_34,ar5,ar6_00,ar7_00);
  Vec3_ctor_copy(auStack_24,auStack_44,ar6_00,ar7_00);
  Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  FUN_8c0230f0(ar7,uVar2,ar6_00,ar7_00,auStack_54);
  FUN_8c0230f0(auStack_24,uVar2,ar6_00,ar7_00,(int)&uStack_68 + 4);
  FUN_8c022dac(auStack_54,(int)&uStack_68 + 4,ar6_00,ar7_00);
  uStack_10 = SUB84(in_dr0,0);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  dVar4 = in_dr0;
  if (cVar6 == '\0') {
    uStack_68 = (double)CONCAT44((*(uint*)((uchar*)&uStack_68+4)),uVar2);
    dVar4 = uStack_68;
    uStack_10 = uVar2;
    uVar2 = uStack_c;
  }
  uStack_c = uVar2;
  uStack_68 = dVar4;
  Vec3_dtor((int)&uStack_68 + 4,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
  ar5_00 = auStack_24;
  iStack_6c = FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00);
  if (iStack_6c == 4) {
    if (cVar6 == '\0') {
      in_dr0 = (double)CONCAT44(0xbf800000,uStack_10);
    }
    else {
      in_xd0 = CONCAT44(uStack_c,uStack_10);
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar6 == '\0') {
      uStack_10 = SUB84(in_dr0,0);
    }
    else {
      uStack_10 = (undefined4)in_xd0;
      uStack_c = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  FUN_8c0231c8(auStack_24,ar5_00,ar6_00,ar7_00);
  iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_70 = iVar1;
  if (cVar6 != '\0') {
    iStack_70 = SUB84(in_dr0,0);
    iStack_6c = iVar1;
  }
  FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00);
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_dr0 = (double)CONCAT44(uVar2,iStack_70);
  }
  else {
    in_xd0 = CONCAT44(iStack_6c,uVar2);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    fVar3 = SUB84(in_dr0 - in_dr0,0);
  }
  fStack_14 = fVar3;
  if (cVar6 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0' && fVar3 < 0.0) {
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  iVar1 = FUN_8c0232e8(ar7,auStack_24,ar6_00,ar7_00);
  if (iVar1 == 1) {
    if (cVar6 == '\0') {
      dVar4 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(uStack_10,fStack_14);
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar5 == '\0') {
      fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fStack_14 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar6 != '\0') {
      fStack_14 = (float)in_xd0;
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
  }
  vec3_copy_8c02b5fc(in_stack_00000000,&fStack_14,ar6_00,ar7_00);
  Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&fStack_14,0xffffffff,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c092884\n.set _FUN_8c092884, _FUN_8c092884_def\n");
