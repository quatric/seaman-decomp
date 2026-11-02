#include "../decls.h"
undefined4 FUN_8c256164_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  int *ar5_00;
  int a5;
  int in_stack_ffffffdc;
  int iStack_1c;
  byte bStack_18;
  short sStack_16;
  undefined2 uStack_14;
  undefined2 uStack_12;
  
  a4 = (int *)&stack0xffffffdc;
  ar5_00 = ar5;
  FUN_8c25b5b4(ar4,ar5,ar6,ar7,in_stack_ffffffdc);
  iVar1 = FUN_8c259be8(ar4,ar5_00,ar6,ar7);
  if (-1 < iVar1) {
    a5 = 4;
    iVar1 = FUN_8c259c48(&stack0xffffffdc,4,ar6,ar7);
    if (-1 < iVar1) {
      if (in_stack_ffffffdc != 0x4c505650) {
        FUN_8c259c40(a4,a5,ar6,ar7);
        return 0xffffffff;
      }
      a5 = 0xc;
      a4 = &iStack_1c;
      iVar1 = FUN_8c259c48(a4,0xc,ar6,ar7);
      if (-1 < iVar1) {
        FUN_8c255f88((int)sStack_16,a5,ar6,ar7);
        a5 = iStack_1c + -8;
        a4 = (int *)*ar5;
        iVar1 = FUN_8c259c48(a4,a5,ar6,ar7);
        if (-1 < iVar1) {
          *(short *)((int)ar5 + 6) = sStack_16;
          *(undefined2 *)(ar5 + 2) = uStack_14;
          *(undefined2 *)((int)ar5 + 10) = uStack_12;
          *(ushort *)(ar5 + 1) = (ushort)bStack_18;
          FUN_8c259c40(a4,a5,ar6,ar7);
          return 1;
        }
      }
    }
    FUN_8c259c40(a4,a5,ar6,ar7);
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c256164\n.set _FUN_8c256164, _FUN_8c256164_def\n");
