#include "../decls.h"
uint FUN_8c120948_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (&FUN_8c120148);
  uVar5 = 1;
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *ar4) {
    do {
      cVar2 = (*(code *)puVar1)(ar5,(int)ar4 + iVar4 * 2 + 8,0,uVar5);
      iVar4 = iVar4 + 1;
      uVar3 = (uint)(cVar2 == '\0');
    } while (iVar4 < *ar4);
  }
  *ar4 = 0;
  if (ar4[1] == 0) {
    (**(code **)(ar5 + 0x18))(ar5,ar4);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c120948\n.set _FUN_8c120948, _FUN_8c120948_def\n");
