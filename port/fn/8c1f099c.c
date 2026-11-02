#include "../decls.h"
int FUN_8c1f099c_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = ar5 << 6;
  do {
    if (iVar4 < 1) {
      return iVar3;
    }
    cVar2 = *ar4;
    ar4 = ar4 + 1;
    iVar1 = 8;
    do {
      if (((int)cVar2 & 0x80U) != 0) {
        return iVar3;
      }
      iVar1 = iVar1 + -1;
      cVar2 = cVar2 << 1;
      iVar3 = iVar3 + 1;
    } while (0 < iVar1);
    iVar4 = iVar4 + -1;
  } while( true );
}

__asm__(".globl _FUN_8c1f099c\n.set _FUN_8c1f099c, _FUN_8c1f099c_def\n");
