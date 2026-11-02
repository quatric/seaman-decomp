#include "../decls.h"
int FUN_8c0c4968_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    vec_delete_array(ar4 + 0x2794,FUN_8c0ba180,0xf0,10,ain0);
    vec_delete_array(ar4 + 0x14c4,FUN_8c0ba180,0xf0,0x14,ain0);
    vec_delete_array(ar4 + 0x1ec,FUN_8c0ba180,0xf0,0x14,ain0);
    ar7_00 = 3;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x1bc,Vec3_dtor,0x10,3,ain0);
    ar5_00 = 0xffffffff;
    FUN_8c0ba180(ar4 + 0xb0,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4968\n.set _FUN_8c0c4968, _FUN_8c0c4968_def\n");
