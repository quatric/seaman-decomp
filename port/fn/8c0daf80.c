#include "../decls.h"
int FUN_8c0daf80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  int iVar3;
  
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  a4 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  iVar2 = 0x1024;
  *(undefined4 *)(0x1024 + ar4) = 0;
  if (iVar1 != 0) {
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 0x60))(a4,ar5,ar6,ar7);
      iVar2 = list_node_next(a4,ar5,ar6,ar7);
      a4 = iVar2;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0daf80\n.set _FUN_8c0daf80, _FUN_8c0daf80_def\n");
