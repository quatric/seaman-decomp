#include "../decls.h"
int FUN_8c0da028_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c0d6424(ar4 + 0x11c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d63c0(ar4 + 0x108,0xffffffff,ar6,ar7);
    FUN_8c0d6424(ar4 + 0xe8,0xffffffff,ar6,ar7);
    ar7_00 = 4;
    ar6_00 = 0x20;
    vec_delete_array(ar4 + 0x68,FUN_8c0d6424,0x20,4,ain0);
    Vec3_dtor(ar4 + 0x40,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x30,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6_00,ar7_00);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0da028\n.set _FUN_8c0da028, _FUN_8c0da028_def\n");
