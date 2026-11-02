#include "../decls.h"
undefined4 s_FROGMANLINE2_0f970c_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}

__asm__(".globl _s_FROGMANLINE2_0f970c\n.set _s_FROGMANLINE2_0f970c, _s_FROGMANLINE2_0f970c_def\n");
