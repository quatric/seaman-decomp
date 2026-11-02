#include "../decls.h"
undefined4 vec_delete_array_def(int ar4,code *ar5,int ar6,int ar7)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar6 * ar7 + ar4;
  for (; ar7 != 0; ar7 = ar7 + -1) {
    iVar1 = iVar1 - ar6;
    in_r0 = (*ar5)(iVar1,0xffffffff,uVar2);
  }
  return in_r0;
}

__asm__(".globl _vec_delete_array\n.set _vec_delete_array, _vec_delete_array_def\n");
