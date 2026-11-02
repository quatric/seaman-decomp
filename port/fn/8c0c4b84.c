#include "../decls.h"
int FUN_8c0c4b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0153e4(ar4 + 700,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x1ac,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x1a4,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x19c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x194,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0x20,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0c4b84\n.set _FUN_8c0c4b84, _FUN_8c0c4b84_def\n");
