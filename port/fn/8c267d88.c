#include "../decls.h"
int FUN_8c267d88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0xd000001;
  if ((((*(int *)(&DATA_8c2784c0) != 0) && (iVar4 = 0x7000103, ar4 != 0)) &&
      (iVar3 = (int)(char)ar5, iVar4 = 0x3000001, 0 < iVar3)) &&
     (((iVar3 < 3 &&
       (iVar2 = (short)*(char *)(ar4 + 1) * 0x2c + (int)0xa8 + *(int *)(&DATA_8c2784c0),
       -1 < iVar3)) && (iVar3 <= *(char *)(iVar2 + 4))))) {
    *(char *)(iVar2 + 5) = (char)ar5;
    puVar1 = (&FUN_8c267b30);
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)puVar1)(ar4,iVar5,*(undefined4 *)(iVar5 * 4 + iVar2 + 0x1c),0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  if (iVar4 != 0) {
    FUN_8c2688a0((&FUN_8c267d88),iVar4);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c267d88\n.set _FUN_8c267d88, _FUN_8c267d88_def\n");
