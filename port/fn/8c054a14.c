#include "../decls.h"
undefined4 FUN_8c054a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double in_dr0;
  char cVar5;
  char cVar6;
  undefined8 uStack_14;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(ar4 + 0x2f0) = 0xffffffff;
  if (*(int *)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6 = 0xffffffff;
    uVar2 = 0x4e;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x4e,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
    *(undefined4 *)(ar4 + 0x280) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    uVar2 = ar5;
    if (*(int *)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,ar7);
    uVar3 = 0;
    *(undefined4 *)(ar4 + 300) = 0;
  }
  else {
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,ar5);
    uStack_14 = in_dr0;
    if (cVar6 == '\0') {
      uStack_14 = (double)CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x4e,ar6,ar7);
    uVar4 = SUB84(in_dr0,0);
    uVar2 = libgcc_divide_helper_0101e4(iVar1 + -1,6,ar6,ar7);
    if (cVar6 == '\0') {
      uStack_14 = (double)CONCAT44((undefined4)uStack_14,uVar4);
    }
    if (cVar5 == '\0') {
      iVar1 = (int)(float)((ulonglong)uStack_14 >> 0x20);
    }
    else {
      iVar1 = (int)uStack_14;
    }
    iVar1 = libgcc_divide_helper_01031c(iVar1,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = rand_range(ar4,0x19,0x1b,ar7);
      FUN_8c033474(ar4,uVar2,ar5,*(undefined4 *)(ar4 + 0x244));
      iVar1 = *(int *)(ar4 + 0x280);
      *(int *)(ar4 + 0x280) = iVar1 + 1;
      *(int *)(ar4 + 0x2f0) = iVar1;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c054a14\n.set _FUN_8c054a14, _FUN_8c054a14_def\n");
