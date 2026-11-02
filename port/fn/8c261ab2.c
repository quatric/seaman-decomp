#include "../decls.h"
undefined4 s_E9040801_ptid_is_range_outsi_261ab2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  char *s0;
  
  if ((ar4 < 0) || (0xff < ar4)) {
    s0 = s_E9040801__ptid__is_range_outside_8c27207c;
  }
  else {
    if (ar5 != 0) {
      return 0;
    }
    s0 = s_E9040802__ptinfo__is_NULL__adxf__8c2720b0;
  }
  FUN_8c25ece6(ar4,ar5,ar6,ar7,s0,in_PR);
  return 0xfffffffd;
}

__asm__(".globl _s_E9040801_ptid_is_range_outsi_261ab2\n.set _s_E9040801_ptid_is_range_outsi_261ab2, _s_E9040801_ptid_is_range_outsi_261ab2_def\n");
