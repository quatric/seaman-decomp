#include "../decls.h"
uint FUN_8c1206ba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (&FUN_8c1113d0);
  uVar4 = 0;
  uVar5 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      puVar3 = (undefined4 *)(uVar5 * 8 + *(int *)(ar4 + 0xc));
      cVar2 = (*(code *)puVar1)(*puVar3,6,puVar3[1],0);
      uVar4 = uVar4 | cVar2 == '\0';
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(ar4 + 8));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1206ba\n.set _FUN_8c1206ba, _FUN_8c1206ba_def\n");
