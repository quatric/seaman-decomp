#include "../decls.h"
undefined4 FUN_8c0db008_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  a4 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (**(code **)(*(int *)(a4 + 8) + 100))(a4,ar5,ar6,ar7);
      a4 = list_node_next(a4,ar5,ar6,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0db008\n.set _FUN_8c0db008, _FUN_8c0db008_def\n");
