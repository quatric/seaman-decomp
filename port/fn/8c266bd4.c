#include "../decls.h"
int FUN_8c266bd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = (&memset);
  puVar2 = 0x8c4bd420;
  puVar1 = (&DATA_8c2784c0);
  iVar4 = 0xd000001;
  if (*(int *)(&DATA_8c2784c0) != 0) {
    iVar4 = (int)0x200;
    *(undefined4 *)((int)0x158 + *(int *)(&DATA_8c2784c0)) = ar4;
    *puVar2 = ar4;
    (*(code *)puVar3)(0,iVar4);
    *(undefined4 *)((int)0x160 + *(int *)puVar1) = 0;
    iVar4 = FUN_8c265704(*(int *)puVar1 + (int)0x178);
  }
  if (iVar4 != 0) {
    FUN_8c2688a0((&FUN_8c266bd4),iVar4);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c266bd4\n.set _FUN_8c266bd4, _FUN_8c266bd4_def\n");
