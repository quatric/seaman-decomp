#include "../decls.h"
undefined4 * Vec3_set_xyz_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}

__asm__(".globl _Vec3_set_xyz\n.set _Vec3_set_xyz, _Vec3_set_xyz_def\n");
