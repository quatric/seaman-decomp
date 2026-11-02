#include "../decls.h"
int FUN_8c268250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar4 = 0x8c4bd534;
  puVar2 = 0x8c4bd530;
  iVar7 = 0x7000103;
  if (ar4 != 0) {
    cVar1 = (char)0x80;
    *(undefined4 *)0x8c4bd530 = 0x15;
    puVar5 = 0x8c4bd536;
    *puVar4 = *(undefined1 *)(ar4 + 1);
    puVar4[1] = (char)ar5 + cVar1;
    *puVar5 = (char)ar6;
    puVar6 = (&FUN_8c267fe8);
    puVar3 = 0x8c4bd530;
    *(char *)((int)puVar2 + 7) = (char)((uint)ar6 >> 8);
    iVar7 = (*(code *)puVar6)(puVar3);
  }
  if (iVar7 != 0) {
    FUN_8c2688a0((&FUN_8c268250),iVar7);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c268250\n.set _FUN_8c268250, _FUN_8c268250_def\n");
