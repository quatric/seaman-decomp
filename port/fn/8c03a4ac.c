#include "../decls.h"
int FUN_8c03a4ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c024758(ar4 + 0xf8,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xd8,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0247b0(ar4 + 0xb0,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x98,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x88,free_if_nonnull_wrap_0153e4,8,2,ain0);
    uVar2 = 2;
    uVar1 = 8;
    vec_delete_array(ar4 + 0x78,free_if_nonnull_wrap_0153e4,8,2,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x74,0xffffffff,uVar1,uVar2);
    vec_delete_array(ar4 + 0x70,free_if_nonnull_wrap_016bfc,4,1,ain0);
    vec_delete_array(ar4 + 0x48,free_if_nonnull_wrap_0247e0,0x14,2,ain0);
    uVar2 = 2;
    uVar1 = 0x14;
    ar5_00 = free_if_nonnull_wrap_0247e0;
    vec_delete_array(ar4 + 0x20,free_if_nonnull_wrap_0247e0,0x14,2,ain0);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,uVar1,uVar2,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c03a4ac\n.set _FUN_8c03a4ac, _FUN_8c03a4ac_def\n");
