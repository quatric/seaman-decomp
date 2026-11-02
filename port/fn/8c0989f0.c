#include "../decls.h"
int FUN_8c0989f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined8 in_dr0;
  char cVar4;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  cVar4 = '\0';
  if (*(int *)(ar4 + 0x128) == 3) {
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      uVar3 = 100;
      uVar2 = 0;
      iStack_10 = rand_range(ar4,0,100,ar7);
      if (iStack_10 < 0x3c) {
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7);
        iVar1 = (int)((ulonglong)in_dr0 >> 0x20);
        iStack_14 = iVar1;
        if (cVar4 != '\0') {
          iStack_14 = (int)in_dr0;
          iStack_10 = iVar1;
        }
        iVar1 = 0x14;
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x304) = iStack_14;
        }
        else {
          *(ulonglong *)(ar4 + 0x304) = CONCAT44(iStack_10,iStack_14);
        }
      }
      else {
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7);
        uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        uStack_18 = uVar2;
        if (cVar4 != '\0') {
          uStack_18 = (undefined4)in_dr0;
          iStack_14 = uVar2;
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(undefined4 *)(ar4 + 0x304) = uStack_18;
        }
        else {
          *(undefined8 *)(ar4 + 0x304) = CONCAT44(iStack_14,uStack_18);
        }
      }
    }
  }
  else {
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = rand_range(ar4,0,100,ar7);
      if (iVar1 < 0x50) {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00);
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(ar4 + 0x304) = in_dr0;
        }
      }
      else {
        ar7_00 = 0;
        uVar3 = 0xffffffff;
        uVar2 = 7;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7_00);
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x304) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(undefined8 *)(ar4 + 0x304) = in_dr0;
        }
      }
      iVar1 = s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,ar7_00);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0989f0\n.set _FUN_8c0989f0, _FUN_8c0989f0_def\n");
