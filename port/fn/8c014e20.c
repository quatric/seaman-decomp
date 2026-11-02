#include "../decls.h"
undefined4 * vec3_clear_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  return ar4 + 1;
}

__asm__(".globl _vec3_clear\n.set _vec3_clear, _vec3_clear_def\n");
