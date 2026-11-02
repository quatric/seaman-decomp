#include "../decls.h"
uint FUN_8c080890_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint uVar3;
  char cVar4;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [4];
  undefined8 uStack_1c;
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar1 = (**(code **)(*ar6 + 0x10c))(ar6,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_20,uVar1,ar6,ar7);
  if (cVar4 == '\0') {
    uStack_1c = CONCAT44((*(uint*)((uchar*)&uStack_1c+4)),0x44570000);
  }
  else {
    uStack_1c = 0x14c44570000;
  }
  Vec3_ctor_xyz(auStack_60,uVar1,ar6,ar7);
  Vec3_add(auStack_20,auStack_60,ar6,ar7,auStack_70);
  Vec3_ctor_copy(auStack_30,auStack_70,ar6,ar7);
  Vec3_dtor(auStack_70,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_60,0xffffffff,ar6,ar7);
  Vec3_ctor_xyz(auStack_80,uVar1,ar6,ar7);
  Vec3_add(auStack_20,auStack_80,ar6,ar7,auStack_90);
  Vec3_ctor_copy(auStack_40,auStack_90,ar6,ar7);
  Vec3_dtor(auStack_90,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_80,0xffffffff,ar6,ar7);
  Vec3_ctor_xyz(auStack_a0,uVar1,ar6,ar7);
  Vec3_add(auStack_20,auStack_a0,ar6,ar7,auStack_b0);
  Vec3_ctor_copy(auStack_50,auStack_b0,ar6,ar7);
  Vec3_dtor(auStack_b0,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_a0,0xffffffff,ar6,ar7);
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6,ar7);
    if (iVar2 == 1) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6 = (int *)0x5;
      ar5_00 = 3;
      uVar1 = rand_range(ar4,3,5,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar1;
      FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
      FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
      FUN_8c032ab0(ar4,ar5_00,ar6,ar7);
      Vec3_ctor_xyz(auStack_c0,ar5_00,ar6,ar7);
      Vec3_add(auStack_30,auStack_c0,ar6,ar7,auStack_d0);
      Vec3_assign(ar4 + 0x54,auStack_d0,ar6,ar7);
      Vec3_dtor(auStack_d0,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_c0,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 1) {
    ar6 = (int *)(ar4 + 0x54);
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      Vec3_ctor_xyz(auStack_e0,ar5,ar6,ar7);
      Vec3_add(auStack_40,auStack_e0,ar6,ar7,auStack_f0);
      Vec3_assign(ar4 + 0x54,auStack_f0,ar6,ar7);
      Vec3_dtor(auStack_f0,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_e0,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 2) {
    ar6 = (int *)(ar4 + 0x54);
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      Vec3_ctor_xyz(auStack_100,ar5,ar6,ar7);
      Vec3_add(auStack_50,auStack_100,ar6,ar7,auStack_110);
      Vec3_assign(ar4 + 0x54,auStack_110,ar6,ar7);
      Vec3_dtor(auStack_110,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_100,0xffffffff,ar6,ar7);
    }
  }
  else if (iVar2 == 3) {
    ar6 = (int *)(ar4 + 0x54);
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = *(int *)(ar4 + 0x294) + -1;
      *(int *)(ar4 + 0x294) = iVar2;
      uVar3 = (uint)(0 < iVar2);
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c080890\n.set _FUN_8c080890, _FUN_8c080890_def\n");
