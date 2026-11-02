#include "../decls.h"
undefined4 FUN_8c255a2e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *in_r2;
  
  (*(code *)*in_r2)(ar4,ar5,ar6,ar7);
  (*(code *)*(undefined4 *)0x8c4aad38)(ar4,ar5,ar6,ar7);
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c4aad3c)(ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c255a2e\n.set _FUN_8c255a2e, _FUN_8c255a2e_def\n");
