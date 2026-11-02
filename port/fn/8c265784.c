#include "../decls.h"
int FUN_8c265784_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (&DATA_8c2784c0);
  iVar2 = 0xd000001;
  if (((*(int *)(&DATA_8c2784c0) != 0) && (iVar2 = 0x7000102, ar4 != (int *)0x0)) && (*ar4 == 1))
  {
    iVar2 = (int)0x184;
    *ar4 = 0;
    *(int *)(iVar2 + *(int *)puVar1) = *(int *)(iVar2 + *(int *)puVar1) + -1;
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c265784),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c265784\n.set _FUN_8c265784, _FUN_8c265784_def\n");
