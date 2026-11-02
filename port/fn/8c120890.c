#include "../decls.h"
uint * FUN_8c120890_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *(char *)(ar4 + 1);
  iVar2 = ar4;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = *(char *)(iVar2 + 3);
    iVar2 = iVar2 + 2;
  }
  puVar3 = (uint *)(**(code **)(ar5 + 0x10))(ar5,((uVar4 & 0xffff) - 1) * 2 + 0xc,ar6,ar7);
  if (puVar3 != (uint *)0x0) {
    memmove(puVar3 + 2,ar4,(uVar4 & 0xffff) << 1,ar7);
    *puVar3 = uVar4 & 0xffff;
    puVar3[1] = 0;
  }
  return puVar3;
}

__asm__(".globl _FUN_8c120890\n.set _FUN_8c120890, _FUN_8c120890_def\n");
