#include "../decls.h"
undefined4 * Class_12bb08_m0_0da208_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12bb08;
    free_if_nonnull_wrap_0151a0(ar4 + 0x40a,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0e91f0(ar4 + 0x3d3,0xffffffff,ar6,ar7);
    uVar2 = 8;
    uVar1 = 0x68;
    vec_delete_array(ar4 + 0x303,FUN_8c0f68c0,0x68,8,ain0);
    free_if_nonnull_wrap_102790(ar4 + 0x2ea,0xffffffff,uVar1,uVar2);
    FUN_8c0da028(ar4 + 0x29a,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_019270(ar4 + 0x27a,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_015544(ar4 + 0x277,0xffffffff,uVar1,uVar2);
    FUN_8c0da0e8(ar4 + 0x1e9,0xffffffff,uVar1,uVar2);
    ar7_00 = 0x11;
    uVar2 = 0x3c;
    vec_delete_array(ar4 + 0xea,FUN_8c0fe250,0x3c,0x11,ain0);
    FUN_8c0fdf18(ar4 + 0x29,0xffffffff,uVar2,ar7_00);
    uVar1 = 0;
    Class_12bce0_m0_0d9a98(ar4,0,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12bb08_m0_0da208\n.set _Class_12bb08_m0_0da208, _Class_12bb08_m0_0da208_def\n");
