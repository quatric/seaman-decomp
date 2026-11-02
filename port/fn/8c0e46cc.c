#include "../decls.h"
undefined4 * Class_12b758_m0_0e46cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b758;
    uVar2 = 1;
    uVar1 = 0x18;
    vec_delete_array(ar4 + 0x578,free_if_nonnull_wrap_0cffc8,0x18,1,ain0);
    FUN_8c0e462c(ar4 + 0x56f,0xffffffff,uVar1,uVar2);
    uVar2 = 100;
    uVar1 = 0xc;
    vec_delete_array(ar4 + 0x443,free_if_nonnull_wrap_0d6ef8,0xc,100,ain0);
    Vec3_dtor(ar4 + 0x43f,0xffffffff,uVar1,uVar2);
    Vec3_dtor(ar4 + 0x43b,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_016bfc(ar4 + 0x439,0xffffffff,uVar1,uVar2);
    free_if_nonnull_wrap_0153e4(ar4 + 0x437,0xffffffff,uVar1,uVar2);
    ar7_00 = 3;
    uVar2 = 0x24;
    vec_delete_array(ar4 + 0x41c,FUN_8c0e468c,0x24,3,ain0);
    uVar1 = 0;
    Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,uVar1,uVar2,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b758_m0_0e46cc\n.set _Class_12b758_m0_0e46cc, _Class_12b758_m0_0e46cc_def\n");
