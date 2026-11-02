#include "../decls.h"
undefined4 FUN_8c07b7d0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 in_fr1;
  char cVar4;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar4 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  uVar2 = ar5;
  if (iVar1 == 0) {
    ar7_00 = 0;
    uVar3 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
    uVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,4,uVar3,ar7_00);
    ar5_00 = 0;
    rand_range(ar4,0,uVar3,ar7_00);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7_00);
    if (cVar4 != '\0') {
      in_fr1 = 0x41700000;
    }
    FUN_8c03263c(ar4,ar6,uVar3,ar7_00);
    Vec3_add(auStack_20,ar5,uVar3,ar7_00,auStack_30);
    Vec3_assign(ar4 + 0x54,auStack_30,uVar3,ar7_00);
    Vec3_dtor(auStack_30,0xffffffff,uVar3,ar7_00);
    Vec3_dtor(auStack_20,0xffffffff,uVar3,ar7_00);
    if (cVar4 != '\0') {
      in_fr1 = 0x40400000;
    }
    iVar1 = ar4 + 0x54;
    FUN_8c032788(ar4,iVar1,ar7,s0);
    if (cVar4 == '\0') {
      uVar3 = 0x40000000;
      *(undefined4 *)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      uVar3 = 0x42700000;
      *(undefined8 *)(ar4 + 0x34) = 0x4270000040000000;
    }
    FUN_8c032ab0(ar4,iVar1,ar7,s0);
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x38) = uVar3;
    }
    else {
      *(ulonglong *)(ar4 + 0x38) = CONCAT44(uVar3,in_fr1);
    }
    FUN_8c032ab0(ar4,iVar1,ar7,s0);
    ar6 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,ar6,s0);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    s0 = ar7;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
        iVar1 = FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
        if (iVar1 < 1) {
          return 1;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        return 1;
      }
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = ar4 + 0x54;
      FUN_8c031764(ar4,iVar1,ar5,ar7);
      if (*(int *)(ar4 + 0x40) != 0) {
        return 1;
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7);
      if (iVar1 != 1) {
        return 1;
      }
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar5,ar7);
      *(undefined4 *)(ar4 + 300) = 0;
      return 0;
    }
  }
  FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,s0);
  FUN_8c031764(ar4,ar4 + 0x54,ar5,s0);
  if (*(int *)(ar4 + 0x40) == 4) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07b7d0\n.set _FUN_8c07b7d0, _FUN_8c07b7d0_def\n");
