#include "../decls.h"
undefined4 FUN_8c0dab8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    if ((*(int *)(0x9d4 + ar4) == 0) ||
       (iVar1 = FUN_8c0dac20(ar4 + 0xa4,ar5,ar6,ar7),
       *(int *)(0x9d4 + ar4) == iVar1)) {
      uVar2 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
      *(undefined4 *)(0x9d4 + ar4) = uVar2;
    }
    else {
      uVar2 = (*(code *)(&list_node_next))
                        (*(undefined4 *)(0x9d4 + ar4),ar5,ar6,ar7);
      *(undefined4 *)(0x9d4 + ar4) = uVar2;
    }
    return *(undefined4 *)(0x9d4 + ar4);
  }
  return 0;
}

__asm__(".globl _FUN_8c0dab8c\n.set _FUN_8c0dab8c, _FUN_8c0dab8c_def\n");
