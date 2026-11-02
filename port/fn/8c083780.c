#include "../decls.h"
undefined4 FUN_8c083780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fr1;
  char cVar4;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  cVar4 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x2b0) = 1;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      Vec3_set_xyz(auStack_18,ar5,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_18,ar6,ar7,auStack_28);
      Vec3_assign(ar4 + 0x280,auStack_28,ar6,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      if (cVar4 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_fr1;
      }
    }
  }
  else if (iVar1 == 1) {
    *(float *)(ar4 + 0x28) = *(float *)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(ar4 + 0x28)) {
      *(undefined4 *)(ar4 + 0x28) = 0x41200000;
    }
    Vec3_ctor_copy(auStack_38,ar4 + 0x280,ar6,ar7);
    ar6_00 = 1;
    iVar1 = FUN_8c0811b4(ar4,auStack_38,1,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x2b0) = 1;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      Vec3_set_xyz(auStack_44,uVar2,ar6_00,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_44,ar6_00,ar7,auStack_54);
      Vec3_assign(ar4 + 0x280,auStack_54,ar6_00,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_44,0xffffffff,ar6_00,ar7);
    }
  }
  else if (iVar1 == 2) {
    *(float *)(ar4 + 0x28) = *(float *)(ar4 + 0x28) + 0.5;
    if (10.0 < *(float *)(ar4 + 0x28)) {
      *(undefined4 *)(ar4 + 0x28) = 0x41200000;
    }
    Vec3_ctor_copy(auStack_64,ar4 + 0x280,ar6,ar7);
    uVar2 = 1;
    iVar1 = FUN_8c0811b4(ar4,auStack_64,1,ar7);
    Vec3_dtor(auStack_64,0xffffffff,uVar2,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x2b0) = 0;
      *(undefined4 *)(ar4 + 0x134) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c083780\n.set _FUN_8c083780, _FUN_8c083780_def\n");
