#include "../decls.h"
undefined4 FUN_8c262554_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  undefined4 in_PR;
  
  uVar1 = 0;
  ar4_00 = 6;
  ar6_00 = ar4;
  ar7_00 = ar5;
  FUN_8c261a4c(6,0,ar4,ar5,ar6);
  if (ar4 == 0) {
    FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00,s_E9040825__adxf__is_NULL__ADXF_Se_8c2724ec,in_PR);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(ar4 + 1) == '\x02') {
      ar4_00 = ar4;
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,uVar1,ar6_00,ar7_00);
    }
    if (ar6 == 0) {
      *(int *)(ar4 + 0x18) = ar5;
    }
    else if (ar6 == 1) {
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + ar5;
    }
    else {
      if (ar6 != 2) {
        FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00,s_E9040826__type__is_illigal__ADXF_8c272514,in_PR);
        goto LAB_8c2625b4;
      }
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x10) + ar5;
    }
    if (*(int *)(ar4 + 0x18) < 0) {
      *(undefined4 *)(ar4 + 0x18) = 0;
    }
    else if (*(int *)(ar4 + 0x10) < *(int *)(ar4 + 0x18)) {
      *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(ar4 + 0x10);
    }
    FUN_8c261a4c(6,1,ar4,ar5,ar6);
    uVar1 = *(undefined4 *)(ar4 + 0x18);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c262554\n.set _FUN_8c262554, _FUN_8c262554_def\n");
