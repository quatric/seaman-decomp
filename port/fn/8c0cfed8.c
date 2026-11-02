#include "../decls.h"
int FUN_8c0cfed8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0151a0(ar4 + 0x3cc,0xffffffff,ar6,ar7);
    uVar2 = 0x19;
    uVar1 = 0x18;
    vec_delete_array(ar4 + 0x174,FUN_8c0cee98,0x18,0x19,ain0);
    free_if_nonnull_wrap_0151a0(ar4 + 0x160,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x158,0xffffffff,uVar1,uVar2);
    uVar2 = 0x10;
    uVar1 = 0x14;
    ar5_00 = FUN_8c0ceed8;
    vec_delete_array(ar4 + 4,FUN_8c0ceed8,0x14,0x10,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,uVar1,uVar2,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0cfed8\n.set _FUN_8c0cfed8, _FUN_8c0cfed8_def\n");
