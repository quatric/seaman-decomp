#include "../decls.h"
int FUN_8c0ddd74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    FUN_8c015428(ar4 + 0x12a5c,0xffffffff,ar6,ar7);
    vec_delete_array(ar4 + 0x62c,FUN_8c0d3304,0x88,0x226,ain0);
    vec_delete_array(ar4 + 0x5fc,free_if_nonnull_wrap_0cffc8,0x18,2,ain0);
    uVar2 = 5;
    uVar1 = 0x44;
    vec_delete_array(ar4 + 0x470,FUN_8c0d336c,0x44,5,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x154,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x108,0xffffffff,uVar1,uVar2);
    FUN_8c0fe59c(ar4 + 0x34,0xffffffff,uVar1,uVar2);
    ar7_00 = 3;
    uVar2 = 4;
    vec_delete_array(ar4 + 0x20,free_if_nonnull_wrap_016bfc,4,3,ain0);
    free_if_nonnull_wrap_016bfc(ar4 + 0x1c,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x10,0xffffffff,uVar2,ar7_00);
    uVar1 = 0xffffffff;
    free_if_nonnull_wrap_0153e4(ar4 + 8,0xffffffff,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddd74\n.set _FUN_8c0ddd74, _FUN_8c0ddd74_def\n");
