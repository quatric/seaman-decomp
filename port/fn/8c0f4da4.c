#include "../decls.h"
undefined4 Vec3_assign_wrap_0f4da4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_assign(ar4 + 0x40,ar4 + 0x30,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_0f4da4\n.set _Vec3_assign_wrap_0f4da4, _Vec3_assign_wrap_0f4da4_def\n");
