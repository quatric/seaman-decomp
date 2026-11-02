#include "../decls.h"
undefined4
Class_129a24_m4_019e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [20];
  
  Class_1299f8_m4_019588(ar4,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_14,auStack_24,ar6,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_14,ar6,ar7);
  Vec3_dtor(auStack_14,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _Class_129a24_m4_019e40\n.set _Class_129a24_m4_019e40, _Class_129a24_m4_019e40_def\n");
