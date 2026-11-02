#include "../decls.h"
uint FUN_8c1f8176_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  undefined4 uVar2;
  int a6;
  int a5;
  
  if ((*(undefined4 *)0x8c474a14 & 1) == 1) {
    uVar2 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
    FUN_8c1f8300(uVar2,ar4,ar6,ar7);
    *(undefined4 *)0x8c474a10 = uVar2;
  }
  else {
    FUN_8c1f8300(*(undefined4 *)0x8c474a10,ar4,ar6,ar7);
  }
  a6 = (int)*(char *)((int)ar4 + 3);
  a5 = (int)(char)ar4[1];
  uVar2 = FUN_8c1f8614((int)*ar4,a5,a6,ar7);
  *(char *)((int)ar4 + 7) = (char)uVar2;
  uVar2 = FUN_8c1f8650(ar4,a5,a6,ar7);
  puVar1 = 0x8c474a14;
  *(char *)(ar4 + 4) = (char)uVar2;
  return *puVar1;
}

__asm__(".globl _FUN_8c1f8176\n.set _FUN_8c1f8176, _FUN_8c1f8176_def\n");
