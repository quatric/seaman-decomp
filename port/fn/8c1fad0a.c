#include "../decls.h"
int FUN_8c1fad0a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(undefined4 *)0x8c475ed8 == 0) {
    do {
    } while ((char)*(undefined2 *)(*(undefined4 *)0x8c475ed4 + 0x1c) == '\0');
    ar5 = (int)*(char *)(*(undefined4 *)0x8c475ed4 + 0x14);
  }
  else if ((*(undefined4 *)0x8c475ed8 == 1) && ((*(byte *)(*(undefined4 *)0x8c475ed0 + 0x1c) & 4) == 4)) {
    ar5 = 0xd;
  }
  return ar5;
}

__asm__(".globl _FUN_8c1fad0a\n.set _FUN_8c1fad0a, _FUN_8c1fad0a_def\n");
