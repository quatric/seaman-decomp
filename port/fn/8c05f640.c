#include "../decls.h"
undefined4 Vec3_assign_wrap_05f640_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_assign(ar4 + 0x70,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_05f640\n.set _Vec3_assign_wrap_05f640, _Vec3_assign_wrap_05f640_def\n");
