#include "../decls.h"
int FUN_8c1f1286_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  uint ain0;
  
  ar6_00 = ar6;
  ain0 = ar5;
  iVar1 = syscall_1f1150(ar4,&stack0xffffffe8,ar6,ar7);
  if (((iVar1 == 0) && (ar6 != 0)) && (((int)ar5 >> 0x1c & 0xfU) != 10)) {
    if ((ar5 & 0x1f) == 0) {
      FUN_8c1f9980(ar5,ar6,ar6_00,ar7,ain0);
    }
    else {
      FUN_8c1f9bde(ar5,ar6,ar6_00,ar7,ain0);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f1286\n.set _FUN_8c1f1286, _FUN_8c1f1286_def\n");
