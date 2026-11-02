#include "../decls.h"
undefined4 Class_129938_m6_01733c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  
  cVar6 = '\0';
  iVar1 = FUN_8c015bb8(ar4 + 0x90,ar5,ar6,ar7);
  iVar1 = **(int **)(iVar1 + 4) + 8;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x30);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 4);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x34);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 8);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x38);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
  }
  uVar2 = FUN_8c015af8(ar4 + 0x90,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _Class_129938_m6_01733c\n.set _Class_129938_m6_01733c, _Class_129938_m6_01733c_def\n");
