#include "../decls.h"
undefined4 FUN_8c120078_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar3 = 0;
  if (*ar4 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(ar4 + 2) + iVar3 * 4);
      if ((*(int *)(iVar4 + 0x14) != 0) &&
         (cVar2 = (**(code **)(iVar4 + 0x14))(iVar4,uVar5), cVar2 != '\0')) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*ar4);
  }
  puVar1 = (&FUN_8c11194c);
  iVar3 = 0;
  if (ar4[4] != 0) {
    do {
      iVar4 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 6) + iVar3 * 4));
      if (iVar4 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)ar4[4]);
  }
  return 0;
}

__asm__(".globl _FUN_8c120078\n.set _FUN_8c120078, _FUN_8c120078_def\n");
