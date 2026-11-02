#include "../decls.h"
undefined4 FUN_8c0a61f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_14 [16];
  
  *(undefined ***)(ar4 + 0x1c8) = &PTR_s_Moveto_8c13b27c;
  *(undefined4 *)(ar4 + 0x1cc) = 6;
  *(undefined4 *)(ar4 + 0x230) = 0;
  *(undefined4 *)(ar4 + 0x220) = 2;
  *(undefined4 *)(ar4 + 0x224) = 2;
  *(undefined4 *)(ar4 + 0x2194) = 0;
  *(undefined4 *)(ar4 + 0x219c) = 0;
  *(undefined4 *)(ar4 + 0x2198) = 0;
  Vec3_set_xyz(auStack_14,ar5,ar6,ar7);
  vec3_copy_8c023d8c(ar4 + 0x21a8,auStack_14,ar6,ar7);
  object_dtor_delete(auStack_14,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x21a4) = 0;
  *(undefined4 *)(ar4 + 0x21b8) = 0;
  *(undefined4 *)(ar4 + 0x21bc) = 0;
  *(undefined4 *)(ar4 + 0x21b4) = 0;
  *(undefined4 *)(ar4 + 0x1d0) = 1;
  return 0x1d0;
}

__asm__(".globl _FUN_8c0a61f8\n.set _FUN_8c0a61f8, _FUN_8c0a61f8_def\n");
