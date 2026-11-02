#include "../decls.h"
undefined4 FUN_8c12359a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int unaff_r14;
  
  if (*(char *)(in_r0 + unaff_r14) == '\0') {
    if (((ushort)ar5 == 0) || (*(ushort *)(0x4b8 + unaff_r14) == (ushort)ar5)) {
      return (int)*(short *)(0x4b8 + unaff_r14);
    }
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + unaff_r14) = 1;
    *(undefined2 *)(iVar1 + 2 + unaff_r14) = 0x32;
    *(undefined2 *)(iVar1 + -4 + unaff_r14) = 0;
    FUN_8c120348(unaff_r14,0xb,(uint)(ushort)ar5,0);
  }
  return 0;
}

__asm__(".globl _FUN_8c12359a\n.set _FUN_8c12359a, _FUN_8c12359a_def\n");
