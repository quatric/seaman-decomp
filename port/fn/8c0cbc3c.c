#include "../decls.h"
undefined4 FUN_8c0cbc3c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = FUN_8c100154(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar6_00 = 1;
    iVar2 = ar6;
    FUN_8c0c4e58(ar5,ar6,1,ar7);
  }
  iVar2 = get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7);
  a4 = *(int **)(iVar2 * 4 + ar6);
  (**(code **)(*a4 + 0x6c))(a4,ar5,1,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0cbc3c\n.set _FUN_8c0cbc3c, _FUN_8c0cbc3c_def\n");
