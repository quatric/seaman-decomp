#include "../decls.h"
int Class_12b2ac_m5_0afddc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 in_dr0;
  char cVar4;
  undefined8 uStack_1c;
  undefined8 uStack_10;
  
  cVar4 = '\0';
  if (*(int *)(ar4 + 300) == 0) {
    iVar1 = get_field_10_031590(ar4 + 0xb0,ar5,ar6,ar7);
    uVar3 = 0;
    uVar2 = 0xffffffff;
    ar5_00 = iVar1 + -1;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar3);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    FUN_8c032ab0(ar4,ar5_00,uVar2,uVar3);
    uStack_10 = in_dr0;
    if (cVar4 == '\0') {
      uStack_10 = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
    }
    iVar1 = 0x1c;
    if (cVar4 == '\0') {
      *(int *)(ar4 + 0x34c) = (int)uStack_10;
    }
    else {
      *(undefined8 *)(ar4 + 0x34c) = uStack_10;
    }
  }
  else if (*(int *)(ar4 + 300) == 1) {
    iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 7) {
      uVar3 = 100;
      uVar2 = 0;
      iVar1 = rand_range(ar4,0,100,ar7);
      if (iVar1 < 0x1f) {
        iVar1 = 300;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        FUN_8c032ab0(ar4,uVar2,uVar3,ar7);
        uStack_1c = in_dr0;
        if (cVar4 == '\0') {
          uStack_1c = CONCAT44(iVar1,(int)((ulonglong)in_dr0 >> 0x20));
        }
        iVar1 = 0x10;
        if (cVar4 == '\0') {
          *(int *)(ar4 + 0x34c) = (int)uStack_1c;
        }
        else {
          *(undefined8 *)(ar4 + 0x34c) = uStack_1c;
        }
      }
    }
  }
  else {
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = 300;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + -1;
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12b2ac_m5_0afddc\n.set _Class_12b2ac_m5_0afddc, _Class_12b2ac_m5_0afddc_def\n");
