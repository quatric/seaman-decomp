#include "../decls.h"
uint FUN_8c1fad44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = 0x8c475ed4;
  if (*(undefined4 *)0x8c475ed8 == 0) {
    *(undefined2 *)(*(undefined4 *)0x8c475ed4 + 8) = 0;
    *(undefined2 *)(*piVar2 + 0x18) = 6;
    *(undefined2 *)*piVar2 = 0;
    *(char *)(*piVar2 + 4) = (char)0xff;
    *(undefined2 *)(*piVar2 + 8) = 0;
    *(undefined2 *)(*piVar2 + 0x10) = 0;
    *(undefined2 *)(*piVar2 + 0x18) = 0;
    *(undefined2 *)(*piVar2 + 0x20) = 0;
    *(undefined2 *)(*piVar2 + 0x24) = 0;
  }
  cVar1 = *(undefined4 *)0xffc00004;
  *(undefined4 *)0xffc00004 = (char)((int)cVar1 | 1U);
  return (int)cVar1 | 1U;
}

__asm__(".globl _FUN_8c1fad44\n.set _FUN_8c1fad44, _FUN_8c1fad44_def\n");
