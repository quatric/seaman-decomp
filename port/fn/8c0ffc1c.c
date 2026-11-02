#include "../decls.h"
int FUN_8c0ffc1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_015c94(ar4 + 0x15c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x14c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x13c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 300,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    FUN_8c0ff6f0(ar4 + 0xd8,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ffc1c\n.set _FUN_8c0ffc1c, _FUN_8c0ffc1c_def\n");
