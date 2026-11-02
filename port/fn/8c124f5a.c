#include "../decls.h"
undefined4 FUN_8c124f5a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,unaff_r13[3],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[4],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0xe],ar6,ar7);
  FUN_8c124f2a(a4,unaff_r13,ar6,ar7);
                    
                    
  uVar1 = (**(code **)(a4 + 0x18))(a4);
  return uVar1;
}

__asm__(".globl _FUN_8c124f5a\n.set _FUN_8c124f5a, _FUN_8c124f5a_def\n");
