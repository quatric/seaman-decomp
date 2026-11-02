#include "../decls.h"
undefined4 FUN_8c02781c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&Vec3_assign_wrap_027844))
                    (*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02781c\n.set _FUN_8c02781c, _FUN_8c02781c_def\n");
