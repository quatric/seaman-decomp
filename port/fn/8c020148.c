#include "../decls.h"
uint FUN_8c020148_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_3c [36];
  
  if (*ar5 != '\0') {
    acStack_3c[0] = '\0';
    iVar3 = 0;
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      if ((ar5[iVar3] == '\\') || (ar5[iVar3] == '\0')) {
        acStack_3c[iVar2] = '\0';
        iVar1 = 0;
        while( true ) {
          if ((2 < iVar1) || (*(char *)(ar4 + iVar1 * 0x16034 + 0x38) == '\0')) {
            return 0;
          }
          iVar3 = ar4 + iVar1 * 0x16034 + 0x38;
          iVar2 = FUN_8c020258(acStack_3c,iVar3,ar6,ar7);
          if ((iVar2 == 0) &&
             (iVar2 = (*(code *)(&FUN_8c1f3952))
                                (*(undefined4 *)(ar4 + iVar1 * 0x16034 + 0x58),iVar3,ar6,ar7),
             iVar2 == 0)) break;
          iVar1 = iVar1 + 1;
        }
        return 1;
      }
      acStack_3c[iVar2] = ar5[iVar3];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  iVar1 = FUN_8c1f3952(*(undefined4 *)(ar4 + 0x58),ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c020148\n.set _FUN_8c020148, _FUN_8c020148_def\n");
