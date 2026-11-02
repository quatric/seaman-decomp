#include "../decls.h"
int FUN_8c266892_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)ar5;
  if ((cVar1 < '\0') || ('\x10' < cVar1)) {
    iVar2 = 0x3000001;
  }
  else {
    iVar2 = FUN_8c266690(ar4,ar5,ar6,ar7);
    iVar2 = -((iVar2 == 0) - 1);
    if (iVar2 == 0) {
      return 0;
    }
    *(char *)(ar4 + 2) = cVar1;
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c266892,iVar2,ar6,ar7,ar4);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c266892\n.set _FUN_8c266892, _FUN_8c266892_def\n");
