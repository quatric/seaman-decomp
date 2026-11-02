#include "../decls.h"
int FUN_8c264c92_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  
  cVar1 = *(char *)(ar4 + 1);
  ar5_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(ar4 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(ar4 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7);
    if (*(int *)(ar4 + 100) == iVar2) {
      *(short *)(ar4 + 0x68) = *(short *)(ar4 + 0x68) + 1;
      if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x68)) {
        *(undefined2 *)(ar4 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x68) = 0;
    }
    *(int *)(ar4 + 100) = iVar2;
    if (*(short *)(ar4 + 0x60) != 0) {
      if ((*(char *)(ar4 + 0x6d) == '\x01') || (*(char *)(ar4 + 0x6d) == '\x02')) {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      if (*(char *)(ar4 + 0x6d) != '\0') {
        *(undefined2 *)(ar4 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(ar4 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(ar4 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(ar4 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      ar5_01 = 1;
      iVar2 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
    }
    if (iVar2 < 0x40) {
      *(short *)(ar4 + 0x6a) = *(short *)(ar4 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(ar4 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(ar4 + 0x38) * 0x14 < (int)*(short *)(ar4 + 0x6a)) goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(ar4 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(ar4 + 0x6d) == '\x01') {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      else if (*(char *)(ar4 + 0x6d) == '\x02') {
        FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(ar4 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(ar4 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(ar4 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(ar4 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(ar4 + 0x6d) == '\x01') {
      FUN_8c263c64(ar4,ar5_01,ar6,ar7);
    }
    else if (*(char *)(ar4 + 0x6d) == '\x02') {
      FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(ar4 + 0x6d) != '\0') {
      *(undefined2 *)(ar4 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(ar4 + 0x6a) = 0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264c92\n.set _FUN_8c264c92, _FUN_8c264c92_def\n");
