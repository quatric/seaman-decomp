#include "../decls.h"
undefined4 * Class_12b930_m0_0dde84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b930;
    vec_delete_array(ar4 + 0x8c96,free_if_nonnull_wrap_0cffc8,0x18,2,ain0);
    uVar2 = 3;
    uVar1 = 0x16c;
    vec_delete_array(ar4 + 0x8b52,FUN_8c0ddb3c,0x16c,3,ain0);
    free_if_nonnull_wrap_0153e4(ar4 + 0x8b50,0xffffffff,uVar1,uVar2);
    ar7_00 = 0x6e;
    uVar2 = 0xc;
    vec_delete_array(ar4 + 0x8a06,free_if_nonnull_wrap_0d6ef8,0xc,0x6e,ain0);
    Vec3_dtor(ar4 + 0x8a00,0xffffffff,uVar2,ar7_00);
    Vec3_dtor(ar4 + 0x89fc,0xffffffff,uVar2,ar7_00);
    Vec3_dtor(ar4 + 0x89f8,0xffffffff,uVar2,ar7_00);
    Vec3_dtor(ar4 + 0x89f4,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_0cfe48(ar4 + 0x89d3,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddbc8(ar4 + 0x89c1,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x89bf,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x89be,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddc40(ar4 + 0x4ee3,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddcc4(ar4 + 0x4edc,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddd14(ar4 + 0x4ec9,0xffffffff,uVar2,ar7_00);
    FUN_8c0ddd74(ar4 + 0x42b,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x41f,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x41e,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_016bfc(ar4 + 0x41d,0xffffffff,uVar2,ar7_00);
    free_if_nonnull_wrap_0153e4(ar4 + 0x41b,0xffffffff,uVar2,ar7_00);
    uVar1 = 0;
    Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b930_m0_0dde84\n.set _Class_12b930_m0_0dde84, _Class_12b930_m0_0dde84_def\n");
