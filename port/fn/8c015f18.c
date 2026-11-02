#include "../decls.h"
undefined4 s_Error_015f22_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffdc;
  
  sVar1 = **(short **)(ar4 + 0x20);
  sVar2 = *(short *)(*(int *)(ar4 + 0x20) + 2);
  uVar3 = malloc_thunk(0x2000,ar5,ar6,ar7);
  FUN_8c257188(ar4 + 0x2c,uVar3,0xb01,(int)sVar1,(int)sVar2,in_stack_ffffffdc);
  ar7_00 = 0x40800000;
  ar6_00 = 10000;
  ar5_00 = ar4 + 0x2c;
  FUN_8c257196(**(undefined4 **)(ar4 + 0x1c),ar5_00,10000,0x40800000,in_stack_ffffffdc);
  iVar4 = FUN_8c25b3a2(*(undefined4 *)(ar4 + 0x1c),ar5_00,ar6_00,ar7_00);
  if (iVar4 == -1) {
    ar7_00 = 0xd;
    ar6_00 = 0;
    ar5_00 = 0;
    noop_102824("Error",0,0,0xd,0xffffffff);
  }
  FUN_8c25b100((int)**(short **)(ar4 + 0x20),ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c1fb57c(uVar3,ar5_00,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _s_Error_015f22\n.set _s_Error_015f22, _s_Error_015f22_def\n");
