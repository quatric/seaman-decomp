#include "../decls.h"
undefined4 * FUN_8c014ab0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  int iVar2;
  uint uVar3;
  undefined8 in_dr0;
  undefined8 uVar4;
  uint in_PR;
  char cVar5;
  uint uStack_10;
  uint uStack_c;
  
  cVar5 = '\0';
  *ar4 = 0x8c1297f4;
  Vec3_ctor_zero(ar4 + 0x15,ar5,ar6,ar7);
  ar4[0x1f] = 0;
  ar4[0x20] = 0xffffffff;
  ar4[0x21] = FUN_8c014f74;
  ar4[0x22] = 0;
  ar4[0x23] = 0xffffffff;
  ar4[0x24] = FUN_8c014fd0;
  ar4[0x25] = 0;
  ar4[0x26] = 0xffffffff;
  ar4[0x27] = FUN_8c015054;
  ar4[0x28] = 0;
  ar4[0x29] = 0xffffffff;
  ar4[0x2a] = FUN_8c015098;
  uStack_c = in_PR;
  for (iVar2 = 0; uVar3 = (uint)in_dr0, iVar2 < 5; iVar2 = iVar2 + 1) {
    if (cVar5 == '\0') {
      uStack_10 = 0;
    }
    else {
      uStack_c = 0;
      uStack_10 = uVar3;
    }
    uVar1 = uStack_10;
    if (cVar5 == '\0') {
      ar4[iVar2 * 3 + 3] = uStack_10;
    }
    else {
      *(ulonglong *)(ar4 + iVar2 * 3 + 3) = CONCAT44(uStack_c,uStack_10);
      uStack_10 = uStack_c;
      uVar3 = uVar1;
    }
    if (cVar5 == '\0') {
      uVar4 = CONCAT44(uVar1,uVar3);
      ar4[iVar2 * 3 + 2] = uVar1;
    }
    else {
      uVar4 = CONCAT44(uStack_10,uVar1);
      *(undefined8 *)(ar4 + iVar2 * 3 + 2) = uVar4;
    }
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44(uVar1,(int)uVar4);
      ar4[iVar2 * 3 + 1] = uVar1;
    }
    else {
      in_dr0 = CONCAT44(uStack_10,uVar1);
      *(undefined8 *)(ar4 + iVar2 * 3 + 1) = in_dr0;
    }
  }
  ar5_00 = 0xffffffff;
  FUN_8c014ef8(ar4,0xffffffff,ar6,ar7);
  ar4[0x1a] = 0;
  *(undefined1 *)(ar4 + 0x1e) = 1;
  if (cVar5 == '\0') {
    ar4[0x1d] = 0;
    ar4[0x1c] = 0x3ca3d70a;
  }
  else {
    *(ulonglong *)(ar4 + 0x1d) = (ulonglong)uVar3;
    *(undefined8 *)(ar4 + 0x1c) = 0x8c014d903ca3d70a;
  }
  FUN_8c014d90(ar4,ar5_00,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c014ab0\n.set _FUN_8c014ab0, _FUN_8c014ab0_def\n");
