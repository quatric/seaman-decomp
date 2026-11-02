#include "../decls.h"
undefined4 FUN_8c06d838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_10 [16];
  
  Vec3_set_zero(auStack_10,ar5,ar6,ar7);
  vec3_copy_8c02b5fc(s0,auStack_10,ar6,ar7);
  object_dtor_delete(auStack_10,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c06d838\n.set _FUN_8c06d838, _FUN_8c06d838_def\n");
