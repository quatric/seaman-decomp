#include "../decls.h"
undefined4 FUN_8c016504_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c234d68))
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016504\n.set _FUN_8c016504, _FUN_8c016504_def\n");
