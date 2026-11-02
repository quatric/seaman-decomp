#include "../decls.h"
int FUN_8c024758_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0x18,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c024758\n.set _FUN_8c024758, _FUN_8c024758_def\n");
