#include "../decls.h"
uint FUN_8c124ba0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  unaff_r14[10] = unaff_r14[3];
  unaff_r14[0xb] = *(int *)unaff_r14[4];
  iVar1 = (**(code **)(*unaff_r14 + 0x10))
                    (*unaff_r14,(uint)*(ushort *)(*(int *)unaff_r14[10] + 0xc) << 1,ar6,ar7);
  unaff_r14[0xe] = iVar1;
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c124ba0\n.set _FUN_8c124ba0, _FUN_8c124ba0_def\n");
