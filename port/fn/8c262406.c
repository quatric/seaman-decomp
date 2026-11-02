#include "../decls.h"
undefined4
s_E9040822_adxf_is_NULL_ADXF_S_262408_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  
  ar5_01 = &stack0xfffffff4;
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar4_00 = 5;
  ar6_00 = ar4;
  FUN_8c261a4c(5,0,ar4,0xffffffff);
  if (ar4 == 0) {
    FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00,"E9040822:\'adxf\' is NULL.(ADXF_Stop)\n",
                 in_stack_fffffff4);
    return 0xfffffffd;
  }
  if (*(char *)(ar4 + 1) != '\x01') {
    if (*(char *)(ar4 + 1) == '\x03') {
      *(undefined1 *)(ar4 + 1) = 1;
    }
    else {
      if (*(int *)(ar4 + 4) == 0) {
        FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00,"E9040823:\'adxf->stm\' is NULL.(ADXF_Stop)\n",
                     in_stack_fffffff4);
        return 0xffffffff;
      }
      FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
      FUN_8c263498(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7_00);
      FUN_8c263768(*(undefined4 *)(ar4 + 4),&stack0xfffffff4,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x24) = in_stack_fffffff4;
      ar4_01 = ar4;
      FUN_8c26211c(ar4,ar5_01,ar6_00,ar7_00,in_stack_fffffff4);
      *(undefined1 *)(ar4 + 1) = 1;
      FUN_8c260cc8(ar4_01,ar5_01,ar6_00,ar7_00,in_stack_fffffff4);
      FUN_8c261a4c(5,1,ar4,0xffffffff);
    }
  }
  return *(undefined4 *)(ar4 + 0x18);
}

__asm__(".globl _s_E9040822_adxf_is_NULL_ADXF_S_262408\n.set _s_E9040822_adxf_is_NULL_ADXF_S_262408, _s_E9040822_adxf_is_NULL_ADXF_S_262408_def\n");
