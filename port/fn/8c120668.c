#include "../decls.h"
undefined4 FUN_8c120668_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((char)ar4[2] != '\0') {
    (**(code **)(*ar4 + 0x18))(*ar4,ar4[3],ar6,ar7);
  }
  if (*(char *)((int)ar4 + 9) != '\0') {
    (**(code **)(*ar4 + 0x18))(*ar4,ar4[4],ar6,ar7);
  }
                    
                    
  uVar1 = (**(code **)(*ar4 + 0x18))(*ar4,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c120668\n.set _FUN_8c120668, _FUN_8c120668_def\n");
