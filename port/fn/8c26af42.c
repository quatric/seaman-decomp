#include "../decls.h"
int FUN_8c26af42_def(undefined4 ar4,int ar5,int *ar6,undefined4 ar7,int ain0)

{
  int d;
  int iVar1;
  
  if (ar5 == 0) {
    *ar6 = 0;
    return ain0;
  }
  *ar6 = 1;
  iVar1 = 0x40;
  d = 2;
  while ((*ar6 <= iVar1 && (ain0 = libgcc_divide_helper_010614(ar5,d), ain0 == 0))) {
    d = d * 2;
    *ar6 = *ar6 << 1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26af42\n.set _FUN_8c26af42, _FUN_8c26af42_def\n");
