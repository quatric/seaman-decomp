#include "../decls.h"
undefined4 FUN_8c2005dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int a6;
  byte *a4;
  int iVar1;
  int in_MACL;
  
  a6 = in_MACL + in_r3;
  a4 = *(byte **)(a6 + 0x28);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(a6 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*a4 == (int)0xcc) break;
    a4 = a4 + 0x20;
    iVar1 = iVar1 + 1;
  }
  FUN_8c2004ea(a4,ar5,a6,(uint)*a4);
  return iVar1;
}

__asm__(".globl _FUN_8c2005dc\n.set _FUN_8c2005dc, _FUN_8c2005dc_def\n");
