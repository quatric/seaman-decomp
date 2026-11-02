#include "../decls.h"
undefined4 Vec3_assign_wrap_063818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_assign(ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_063818\n.set _Vec3_assign_wrap_063818, _Vec3_assign_wrap_063818_def\n");
