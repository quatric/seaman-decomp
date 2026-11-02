#include "../decls.h"
uint FUN_8c12071a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (&FUN_8c1113d0);
  if (ar5 == 0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 7;
  }
  uVar5 = 0;
  uVar6 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      puVar4 = (undefined4 *)(uVar6 * 8 + *(int *)(ar4 + 0xc));
      cVar2 = (*(code *)puVar1)(*puVar4,uVar3,puVar4[1],ar5);
      uVar5 = uVar5 | cVar2 == '\0';
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(ar4 + 8));
  }
  return uVar5;
}

__asm__(".globl _FUN_8c12071a\n.set _FUN_8c12071a, _FUN_8c12071a_def\n");
