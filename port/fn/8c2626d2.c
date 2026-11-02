#include "../decls.h"
undefined4 s_E9040828_ptid_is_range_outsi_2626d2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char *s0;
  undefined4 in_PR;
  
  if ((ar4 < 0) || (0xff < ar4)) {
    s0 = s_E9040828__ptid__is_range_outside_8c272648;
  }
  else {
    ar4 = *(int *)(ar4 * 4 + -0x73b4c1e0);
    if ((-1 < ar5) && (ar5 < *(int *)(ar4 + 0xc))) {
      return 0;
    }
    s0 = s_E9040828__flid__is_range_outside_8c272680;
  }
  FUN_8c25ece6(ar4,ar5,ar6,ar7,s0,in_PR);
  return 0xfffffffd;
}

__asm__(".globl _s_E9040828_ptid_is_range_outsi_2626d2\n.set _s_E9040828_ptid_is_range_outsi_2626d2, _s_E9040828_ptid_is_range_outsi_2626d2_def\n");
