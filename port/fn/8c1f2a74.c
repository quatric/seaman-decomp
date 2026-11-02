#include "../decls.h"
undefined4 FUN_8c1f2a74_def(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (ar6 < 1) {
      return 1;
    }
    if (*ar4 == '\0') break;
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7);
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7);
    if ((char)uVar2 != (char)uVar3) {
      return 0;
    }
    ar6 = ar6 + -1;
  }
  if (*ar5 == '\0') {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2a74\n.set _FUN_8c1f2a74, _FUN_8c1f2a74_def\n");
