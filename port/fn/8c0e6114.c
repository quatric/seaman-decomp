#include "../decls.h"
int FUN_8c0e6114_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c015428(ar4 + 0x6e50,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x6e20,free_if_nonnull_wrap_0cffc8,0x18,2,ain0);
    ar7_00 = 500;
    ar6_00 = 0x38;
    vec_delete_array(ar4 + 0xbc,FUN_8c0d8094,0x38,500,ain0);
    FUN_8c0d80dc(ar4 + 0x78,0xffffffff,ar6_00,ar7_00);
    FUN_8c0d8128(ar4 + 0x50,0xffffffff,ar6_00,ar7_00);
    free_if_nonnull_wrap_0d8168(ar4 + 0x34,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(ar4 + 0x28,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x18,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 8,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0e6114\n.set _FUN_8c0e6114, _FUN_8c0e6114_def\n");
