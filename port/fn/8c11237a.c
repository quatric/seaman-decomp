#include "../decls.h"
undefined4 FUN_8c11237a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*(char *)(ar4 + 0x14) != '\0') && (*(int *)(ar4 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(ar4 + 0xc));
  }
                    
                    
  uVar1 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c11237a\n.set _FUN_8c11237a, _FUN_8c11237a_def\n");
