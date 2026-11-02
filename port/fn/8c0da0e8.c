#include "../decls.h"
int FUN_8c0da0e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x23;
    ar6_00 = 0x10;
    ar5_00 = FUN_8c0da130;
    vec_delete_array(ar4,FUN_8c0da130,0x10,0x23,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0da0e8\n.set _FUN_8c0da0e8, _FUN_8c0da0e8_def\n");
