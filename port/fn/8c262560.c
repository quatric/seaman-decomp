#include "../decls.h"
undefined4
s_E9040825_adxf_is_NULL_ADXF_S_262560_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int a6;
  int a7;
  int unaff_r12;
  int unaff_r13;
  int unaff_r14;
  undefined4 in_PR;
  
  uVar1 = 0;
  ar4_00 = 6;
  a6 = unaff_r14;
  a7 = unaff_r12;
  FUN_8c261a4c(6,0,unaff_r14,unaff_r12);
  if (unaff_r14 == 0) {
    FUN_8c25ece6(ar4_00,uVar1,a6,a7,s_E9040825__adxf__is_NULL__ADXF_Se_8c2724ec,in_PR);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(unaff_r14 + 1) == '\x02') {
      ar4_00 = unaff_r14;
      s_E9040822_adxf_is_NULL_ADXF_S_262408(unaff_r14,uVar1,a6,a7);
    }
    if (unaff_r13 == 0) {
      *(int *)(unaff_r14 + 0x18) = unaff_r12;
    }
    else if (unaff_r13 == 1) {
      *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x18) + unaff_r12;
    }
    else {
      if (unaff_r13 != 2) {
        FUN_8c25ece6(ar4_00,uVar1,a6,a7,s_E9040826__type__is_illigal__ADXF_8c272514,in_PR);
        goto LAB_8c2625b4;
      }
      *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    }
    if (*(int *)(unaff_r14 + 0x18) < 0) {
      *(undefined4 *)(unaff_r14 + 0x18) = 0;
    }
    else if (*(int *)(unaff_r14 + 0x10) < *(int *)(unaff_r14 + 0x18)) {
      *(undefined4 *)(unaff_r14 + 0x18) = *(undefined4 *)(unaff_r14 + 0x10);
    }
    FUN_8c261a4c(6,1,unaff_r14,unaff_r12);
    uVar1 = *(undefined4 *)(unaff_r14 + 0x18);
  }
  return uVar1;
}

__asm__(".globl _s_E9040825_adxf_is_NULL_ADXF_S_262560\n.set _s_E9040825_adxf_is_NULL_ADXF_S_262560, _s_E9040825_adxf_is_NULL_ADXF_S_262560_def\n");
