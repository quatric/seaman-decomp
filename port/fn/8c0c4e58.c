#include "../decls.h"
undefined4 FUN_8c0c4e58_def(undefined4 ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a4;
  int iVar3;
  uint ar6_00;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined1 *a5;
  undefined1 auStack_2c [20];
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = get_field_d0_0c51fc(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,iVar2,ar6_00,ar7);
  piVar5 = *(int **)(iVar1 * 4 + ar5);
  uVar6 = ar6;
  (**(code **)(*piVar5 + 0x78))(piVar5,ar6,ar6_00,ar7);
  FUN_8c0c51c4(ar4,uVar6,ar6_00,ar7);
  FUN_8c1006bc(ar4,uVar6,ar6_00,ar7);
  if (iVar1 == 0) {
    FUN_8c100694(ar4,uVar6,ar6_00,ar7);
    iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
    if (iVar2 == 0) {
      uVar6 = 3;
      FUN_8c0c51b8(ar4,3,ar6_00,ar7);
      iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
      if (iVar2 == 0) {
        uVar6 = 0;
        FUN_8c0c51a0(ar4,0,ar6_00,ar7);
      }
    }
    else {
      iVar2 = get_field_24_05c284(iVar2,uVar6,ar6_00,ar7);
      if (iVar2 == 0xd) {
        uVar6 = 1;
        FUN_8c0c51b8(ar4,1,ar6_00,ar7);
      }
      else {
        uVar6 = 3;
        FUN_8c0c51b8(ar4,3,ar6_00,ar7);
        iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
        if (iVar2 == 0) {
          uVar6 = 0;
          FUN_8c0c51a0(ar4,0,ar6_00,ar7);
        }
      }
    }
  }
  else if (iVar1 == 3) {
    if ((ar6 & 0xff) == 0) {
      uVar6 = 0;
      FUN_8c0c51b8(ar4,0,ar6_00,ar7);
    }
    else {
      uVar6 = 1;
      FUN_8c0c51b8(ar4,1,ar6_00,ar7);
    }
  }
  else if (iVar1 == 1) {
    if (((ar6 & 0xff) == 1) || ((ar6 & 0xff) == 2)) {
      uVar6 = 0;
      FUN_8c0c51b8(ar4,0,ar6_00,ar7);
    }
    else if ((ar6 & 0xff) == 3) {
      uVar6 = 2;
      FUN_8c0c51b8(ar4,2,ar6_00,ar7);
    }
  }
  else if (iVar1 == 2) {
    FUN_8c100694(ar4,uVar6,ar6_00,ar7);
    iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
    if (iVar2 == 0) {
      uVar6 = 3;
      FUN_8c0c51b8(ar4,3,ar6_00,ar7);
      iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
      if (iVar2 == 0) {
        uVar6 = 0;
        FUN_8c0c51a0(ar4,0,ar6_00,ar7);
      }
    }
    else {
      iVar2 = get_field_24_05c284(iVar2,uVar6,ar6_00,ar7);
      if (iVar2 == 0xd) {
        uVar6 = 1;
        FUN_8c0c51b8(ar4,1,ar6_00,ar7);
      }
      else {
        uVar6 = 3;
        FUN_8c0c51b8(ar4,3,ar6_00,ar7);
        iVar2 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
        if (iVar2 == 0) {
          uVar6 = 0;
          FUN_8c0c51a0(ar4,0,ar6_00,ar7);
        }
      }
    }
  }
  iVar2 = get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7);
  piVar5 = *(int **)(iVar2 * 4 + ar5);
  uVar6 = ar6;
  (**(code **)(*piVar5 + 0x70))(piVar5,ar6,ar6_00,ar7);
  a4 = FUN_8c0637d0(ar4,uVar6,ar6_00,ar7);
  if ((a4 != 0) &&
     (iVar3 = get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7), iVar3 != 3)) {
    ar6_00 = get_field_d0_0c51fc(ar4,uVar6,ar6_00,ar7);
    a5 = auStack_2c;
    (**(code **)(0x150 + *(int *)(a4 + 8)))(a4,a5,ar6_00,ar7);
    piVar5 = *(int **)(iVar2 * 4 + ar5);
    (**(code **)(0xa0 + *piVar5))(piVar5,a5,ar6_00,ar7);
  }
  FUN_8c021720(0x8c2b59d0,1,ar6_00,ar7);
  (*(code *)(&FUN_8c0d1c20))
            (*(undefined4 *)(iVar1 * 4 + ar5),*(undefined4 *)(iVar2 * 4 + ar5),ar6,ar7);
  uVar4 = Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0c4e58\n.set _FUN_8c0c4e58, _FUN_8c0c4e58_def\n");
