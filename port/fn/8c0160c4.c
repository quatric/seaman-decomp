#include "../decls.h"
undefined4 s_C3DRenderPly_SetMem_0160d0_def(int ar4,int ar5,int ar6,short *ar7,undefined4 s0,int s4)

{
  int ar5_00;
  int ar5_01;
  undefined4 ar7_00;
  uint uVar1;
  undefined4 in_stack_ffffffb4;
  
  *(undefined4 *)(ar4 + 0x10) = 4;
  for (uVar1 = 0; uVar1 < *(uint *)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4)) = *(undefined4 *)(ar5 + uVar1 * 0x10);
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4) + 4) = *(undefined4 *)(ar5 + uVar1 * 0x10 + 4);
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4) + 8) = *(undefined4 *)(ar5 + uVar1 * 0x10 + 8);
    *(undefined4 *)(uVar1 * 4 + *(int *)(ar4 + 8)) = *(undefined4 *)(uVar1 * 4 + ar6);
  }
  *(undefined4 *)(ar4 + 0x90) = 1;
  **(undefined2 **)(ar4 + 0xc) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 2) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 4) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 6) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 8) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 10) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 0xc) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 0xe) = 0xff;
  ar5_00 = FUN_8c1fb4b8((int)*ar7 * (int)ar7[1] * s4,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    report_error_message("Lack of memory!","C3DRenderPly::SetMem()",1,2);
  }
  FUN_8c257188(ar4 + 0xa0,ar5_00,0xb01,(int)*ar7,(int)ar7[1],in_stack_ffffffb4);
  ar7_00 = 0x40800000;
  ar5_01 = ar4 + 0xa0;
  FUN_8c257196(*(undefined4 *)(ar4 + 0x8c),ar5_01,s0,0x40800000,in_stack_ffffffb4);
  FUN_8c25b3a2(ar4 + 0x8c,ar5_01,s0,ar7_00);
  FUN_8c25b100((int)*ar7,ar5_01,s0,ar7_00);
  FUN_8c1fb586(ar5_00,ar5_01,s0,ar7_00);
  *(uint *)(ar4 + 0xcc) = *(uint *)(ar4 + 0xcc) | 0x80000000;
  *(uint *)(ar4 + 0xcc) = *(uint *)(ar4 + 0xcc) | 0x20;
  return 1;
}

__asm__(".globl _s_C3DRenderPly_SetMem_0160d0\n.set _s_C3DRenderPly_SetMem_0160d0, _s_C3DRenderPly_SetMem_0160d0_def\n");
