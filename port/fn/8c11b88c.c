#include "../decls.h"
undefined4 FUN_8c11b88c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  puVar1 = (&FUN_8c11237a);
  FUN_8c11237a(*unaff_r13,ar5,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[1],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[3],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[4],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[5],unaff_r14,ar6,ar7);
  FUN_8c1123da(unaff_r13[6],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[2],unaff_r14,ar6,ar7);
                    
                    
  uVar2 = (**(code **)(unaff_r14 + 0x18))();
  return uVar2;
}

__asm__(".globl _FUN_8c11b88c\n.set _FUN_8c11b88c, _FUN_8c11b88c_def\n");
