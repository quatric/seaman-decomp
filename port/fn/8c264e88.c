#include "../decls.h"
int FUN_8c264e88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ar5_01;
  int unaff_r14;
  undefined4 in_PR;
  
  if (*(char *)(unaff_r14 + 1) == '\x03') {
    FUN_8c264b14(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x01') {
    s_E9081001_can_t_play_d_ch_dat_2647fe(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x02') {
    FUN_8c264a42(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x04') {
    FUN_8c264b7a(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x05') {
    noop_264b9c(unaff_r14,ar5,ar6,ar7,in_PR);
  }
  cVar1 = *(char *)(unaff_r14 + 1);
  ar5_00 = sh4_tmu_1f88e6(unaff_r14,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(unaff_r14 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(unaff_r14 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7);
    if (*(int *)(unaff_r14 + 100) == iVar2) {
      *(short *)(unaff_r14 + 0x68) = *(short *)(unaff_r14 + 0x68) + 1;
      if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x68)) {
        *(undefined2 *)(unaff_r14 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(unaff_r14 + 0x68) = 0;
    }
    *(int *)(unaff_r14 + 100) = iVar2;
    if (*(short *)(unaff_r14 + 0x60) != 0) {
      if ((*(char *)(unaff_r14 + 0x6d) == '\x01') || (*(char *)(unaff_r14 + 0x6d) == '\x02')) {
        FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
      }
      if (*(char *)(unaff_r14 + 0x6d) != '\0') {
        *(undefined2 *)(unaff_r14 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(unaff_r14 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(unaff_r14 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(unaff_r14 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      piVar4 = *(int **)(unaff_r14 + 0x14);
      ar5_01 = 1;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,piVar4);
    }
    if (iVar2 < 0x40) {
      *(short *)(unaff_r14 + 0x6a) = *(short *)(unaff_r14 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(unaff_r14 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(unaff_r14 + 0x38) * 0x14 < (int)*(short *)(unaff_r14 + 0x6a))
      goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(unaff_r14 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
        FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
      }
      else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
        FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(unaff_r14 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(unaff_r14 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(unaff_r14 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(unaff_r14 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
      FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
    }
    else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
      FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(unaff_r14 + 0x6d) != '\0') {
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(unaff_r14 + 0x6a) = 0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264e88\n.set _FUN_8c264e88, _FUN_8c264e88_def\n");
