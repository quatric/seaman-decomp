#include "../decls.h"
undefined4 FUN_8c26b9d4_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7,int ain1)

{
  int iVar1;
  undefined4 *a4;
  
  iVar1 = 0;
  do {
    if (*(char *)(iVar1 * 0x30 + -0x73b3ff44) == '\0') break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < ain1);
  if (iVar1 == 0x40) {
    return 0;
  }
  iVar1 = iVar1 * 0x30;
  a4 = (undefined4 *)(iVar1 + -0x73b3ff48);
  *(undefined1 *)(iVar1 + -0x73b3ff44) = 1;
  *(undefined1 *)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *a4 = &DAT_8c2786d0;
  *(undefined1 *)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *(undefined **)(iVar1 + -0x73b3ff40) = &DAT_8c2739c8;
  *(undefined4 *)(iVar1 + -0x73b3ff3c) = ar5;
  *(uint *)(iVar1 + -0x73b3ff38) = ar6 >> 4;
  *(undefined **)(iVar1 + -0x73b3ff20) = &DAT_8c26b98e;
  *(undefined4 **)(iVar1 + -0x73b3ff1c) = a4;
  FUN_8c26ba62(a4,ar5,ar6 >> 4,iVar1);
  return a4;
}

__asm__(".globl _FUN_8c26b9d4\n.set _FUN_8c26b9d4, _FUN_8c26b9d4_def\n");
