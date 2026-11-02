#include "../decls.h"
uint FUN_8c2081e0_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  uint *puVar1;
  uint in_r0;
  
  puVar1 = 0x8c4a9d58;
  *(undefined4 *)0x8c4a9d58 = (ar4 & 7) << 0x18;
  if (ar6 != 0) {
    in_r0 = *puVar1 | 0x10000000;
    *puVar1 = in_r0;
  }
  if (ar5 != 0) {
    *(undefined4 *)0x8c4a9d58 = *(undefined4 *)0x8c4a9d58 | 0x8000000;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c2081e0\n.set _FUN_8c2081e0, _FUN_8c2081e0_def\n");
