#include "../decls.h"
undefined4 deref_u32_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _deref_u32\n.set _deref_u32, _deref_u32_def\n");
