#include "../decls.h"
undefined4 FUN_8c1f68ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r12;
  int unaff_r13;
  int *a4;
  
  a4 = 0x8c472da0;
  do {
    if (*a4 != 0) {
      in_r0 = FUN_8c1f68ec(a4,ar5,ar6,ar7);
    }
    unaff_r13 = unaff_r13 + 1;
    a4 = (int *)((int)a4 + (int)0xd7c);
  } while (unaff_r13 < unaff_r12);
  return in_r0;
}

__asm__(".globl _FUN_8c1f68ca\n.set _FUN_8c1f68ca, _FUN_8c1f68ca_def\n");
