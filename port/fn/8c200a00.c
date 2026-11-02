#include "../decls.h"
int FUN_8c200a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  *(undefined4 *)(0x8c478e20 + ar4 * 4) = 0;
  if ((*(char *)(iVar2 + 10) != '\0') || (iVar1 = FUN_8c200642(ar4,ar5,ar6,ar7), -1 < iVar1)) {
    iVar1 = FUN_8c1ffcc2(ar4,ar5,ar6,ar7);
    if (-1 < iVar1) {
      if (((*(char *)(iVar2 + 0xb) == '\0') && (iVar1 = FUN_8c200672(ar4,ar5,ar6,ar7), iVar1 < 0))
         || ((*(char *)(iVar2 + 0xc) == '\0' && (iVar1 = FUN_8c2001b8(ar4,ar5,ar6,ar7), iVar1 < 0)))
         ) {
        if (iVar1 != 0xffff0000) {
          return iVar1;
        }
        *(undefined4 *)(0x8c478e20 + ar4 * 4) = 1;
      }
      else {
        *(undefined1 *)(iVar2 + 10) = 1;
        *(undefined1 *)(iVar2 + 0xb) = 1;
        *(undefined1 *)(iVar2 + 0xc) = 1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c200a00\n.set _FUN_8c200a00, _FUN_8c200a00_def\n");
