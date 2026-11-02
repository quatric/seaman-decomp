#include "../decls.h"
undefined4 FUN_8c112380_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  if ((*(char *)(in_r0 + unaff_r14) != '\0') && (*(int *)(unaff_r14 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(unaff_r14 + 0xc),ar6,ar7);
  }
                    
                    
  uVar1 = (**(code **)(ar5 + 0x18))(ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c112380\n.set _FUN_8c112380, _FUN_8c112380_def\n");
