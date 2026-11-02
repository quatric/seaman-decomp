#include "../decls.h"
undefined4 s_SEAMAN_0c6e7e_def(int ar4,int ar5,undefined4 ar6,char *ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint ar5_00;
  undefined4 uVar5;
  uint extraout_fr1;
  char cVar6;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar6 = '\0';
  iVar2 = ar5;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,iVar2,ar6,ar7);
  uVar5 = 1;
  if (DAT_8c437124 == '\0') {
    if (cVar6 == '\0') {
      _DAT_8c437120 = _DAT_8c437120 & 0xffffffff00000000;
    }
    else {
      _DAT_8c437120 = (ulonglong)extraout_fr1;
    }
    _DAT_8c437120 = CONCAT14(1,_DAT_8c437120);
  }
  if (DAT_8c43712c == '\0') {
    if (cVar6 == '\0') {
      _DAT_8c437128 = _DAT_8c437128 & 0xffffffff00000000;
    }
    else {
      _DAT_8c437128 = (ulonglong)extraout_fr1;
    }
    _DAT_8c437128 = CONCAT14(1,_DAT_8c437128);
  }
  ar5_00 = 0x7d4;
  *(undefined4 *)(ar5 + 0x7d4) = *(undefined4 *)(ar4 + 0x2d160);
  piVar3 = (int *)(uint)*(byte *)(ar5 + 0xa0);
  FUN_8c0d1c14(piVar3,0x7d4,ar6,ar7);
  if (*(int *)(ar4 + 0x2d160) != 0) {
    if (*(int *)(ar4 + 0x2d160) == 1) {
      pure_virtual_stub(ar4,ar5,ar6,ar7);
    }
    goto LAB_8c0c7340;
  }
  if (*(int *)(ar5 + 0x84) == 0) {
    if ((*(int *)(ar5 + 0x88) != 0) && (*(int *)(ar5 + 0x88) != 1)) {
      piVar3 = *(int **)(ar5 + 0x84);
      FUN_8c0b7920(piVar3,ar5_00,ar6,ar7);
      uVar4 = s_SEAMANDC_USR_0b76dc(piVar3,ar5_00,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2d16c) = uVar4;
      if (*(int *)(ar4 + 0x2d16c) == 0) {
        piVar3 = (int *)(ar5 + 0x96);
        uVar4 = FUN_8c0b77a0(piVar3,ar5_00,ar6,ar7);
        *(undefined4 *)(ar4 + 0x2d168) = uVar4;
      }
    }
    if (*(int *)(ar5 + 0x88) != 0) {
      iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
      ar5_00 = (uint)*(byte *)(ar5 + 0xa0);
      piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
      (**(code **)(*piVar3 + 0xa8))(piVar3,ar5_00,ar6,ar7);
    }
    if (*(int *)(ar4 + 0x2d168) == 0) {
      FUN_8c0b79f0(piVar3,ar5_00,ar6,ar7);
      ar7 = &DAT_8c13d092;
      ar6 = 0;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,5,0,&DAT_8c13d092);
      goto LAB_8c0c7340;
    }
    if (*(int *)(ar4 + 0x2d16c) != 0) {
      FUN_8c0b79f0(piVar3,ar5_00,ar6,ar7);
      FUN_8c0b787c(*(undefined4 *)(ar4 + 0x2d16c),ar5_00,ar6,ar7);
      goto LAB_8c0c7340;
    }
    iVar2 = FUN_8c1000c8(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
    if ((((iVar2 == 1) && (*(int *)(ar4 + 0x2d164) == 0)) && (DAT_8c13bcc4 == 1)) &&
       (*(int *)(ar4 + 0x2d39c) == 0)) {
      iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
      piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
      (**(code **)(*piVar3 + 0xa4))(piVar3,(uint)*(byte *)(ar5 + 0xa0),ar6,ar7);
      *(undefined4 *)(ar4 + 0x2d164) = 1;
    }
    if (*(int *)(ar4 + 0x2d164) == 1) {
      iVar2 = ar5;
      iVar1 = s_WARNING_EXIT_0c76d0(ar4,ar5,ar6,ar7);
      if (iVar1 == 1) {
        iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),iVar2,ar6,ar7);
        piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
        (**(code **)(*piVar3 + 0xa8))(piVar3,(uint)*(byte *)(ar5 + 0xa0),ar6,ar7);
        *(undefined4 *)(ar4 + 0x2d164) = 0;
      }
      else if (iVar1 == 0) {
        uVar5 = 0;
      }
    }
    else {
      iVar2 = ar5;
      pure_virtual_stub(ar4,ar5,ar6,ar7);
      if ((_DAT_8c436924 == 1) && (DAT_8c13bcc4 == 1)) {
        iVar1 = FUN_8c0637d0(*(undefined4 *)(ar5 + 0x7cc),iVar2,ar6,ar7);
        if (iVar1 == 0) {
          iVar1 = get_field_d4_0c7424(*(undefined4 *)(ar5 + 0x7cc),iVar2,ar6,ar7);
        }
        s_wtNumberOfItems_is_over_CGam_0c5df6(ar4,ar5,iVar1,0x8c431a68);
        ar7 = s_Seaman_User_Data_8c13d157;
        ar6 = 0x4208;
        iVar2 = FUN_8c0b6c3c(s_SM2000US_USR_8c13d13d,0x8c431a68,0x4208,s_Seaman_User_Data_8c13d157);
        if (iVar2 == 0) {
          _DAT_8c436924 = 0;
        }
      }
    }
  }
  else {
    if (*(int *)(ar5 + 0x88) == 0) {
      iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),ar5_00,ar6,ar7);
      ar5_00 = (uint)*(byte *)(ar5 + 0xa0);
      piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
      (**(code **)(*piVar3 + 0xa4))(piVar3,ar5_00,ar6,ar7);
    }
    uVar4 = 0x8c35468c;
    FUN_8c0f8214(0x8c35468c,ar5_00,ar6,ar7);
    FUN_8c0b79f0(uVar4,ar5_00,ar6,ar7);
    FUN_8c0b7920(*(undefined4 *)(ar5 + 0x84),ar5_00,ar6,ar7);
  }
  uVar4 = 2;
  FUN_8c0c412c(&DAT_8c2b5628,2,ar6,ar7);
  FUN_8c0c42b0(&DAT_8c2b5628,uVar4,ar6,ar7);
LAB_8c0c7340:
  iVar2 = ar4;
  iVar1 = ar5;
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  FUN_8c0d1c84(iVar2,iVar1,ar6,ar7);
  FUN_8c0fedf4(*(undefined4 *)(ar5 + 2000),0x8c3eb334,ar6,ar7);
  if (*(byte *)(ar5 + 0xa0) < *(byte *)(ar5 + 0xa1)) {
    *(undefined4 *)(ar4 + 0x2d160) = 1;
    *(undefined4 *)(ar4 + 0x2d15c) = 1;
    *(undefined1 *)(ar5 + 0xa1) = DAT_8c436548;
  }
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return uVar5;
}

__asm__(".globl _s_SEAMAN_0c6e7e\n.set _s_SEAMAN_0c6e7e, _s_SEAMAN_0c6e7e_def\n");
