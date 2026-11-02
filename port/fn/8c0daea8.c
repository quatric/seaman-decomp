#include "../decls.h"
int FUN_8c0daea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  a4 = FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7);
  iVar2 = FUN_8c021720(0x8c2b59d0,0,ar6,ar7);
  if (iVar1 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = ar5;
      (**(code **)(*(int *)(a4 + 8) + 0x7c))(a4,ar5,ar6,ar7);
      iVar2 = list_node_next(a4,uVar3,ar6,ar7);
      a4 = iVar2;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0daea8\n.set _FUN_8c0daea8, _FUN_8c0daea8_def\n");
