#include "../decls.h"
uint FUN_8c2028cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint s0,int s4,uint s8
                 ,int s12)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  FUN_8c010794(8,&stack0xffffffec,&s8);
  FUN_8c010794(8,&stack0xffffffe4,&s0);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,
                       in_stack_fffffff0);
  if (iVar1 == 1) {
    if ((s8 < s0) || (uVar2 = s4 - s12, 0x7fffffff < uVar2)) {
      uVar2 = 0x7fffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c2028cc\n.set _FUN_8c2028cc, _FUN_8c2028cc_def\n");
