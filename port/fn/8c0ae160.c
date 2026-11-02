#include "../decls.h"
int FUN_8c0ae160_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7);
  iVar1 = *(int *)(0x460 + ar4);
  if (iVar1 == 1) {
    iVar1 = (*(code *)(&s_GRAPHICS_SQUIDLINE_0ae54a))
                      (ar5,0x2ee0,ar4 + 0x88c,ar4 + 0x890);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0ae160\n.set _FUN_8c0ae160, _FUN_8c0ae160_def\n");
