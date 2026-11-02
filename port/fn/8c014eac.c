#include "../decls.h"
undefined4 FUN_8c014eac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_18,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c014eac\n.set _FUN_8c014eac, _FUN_8c014eac_def\n");
