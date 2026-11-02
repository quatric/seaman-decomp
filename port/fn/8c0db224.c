#include "../decls.h"
undefined4 FUN_8c0db224_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  int *a4;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  undefined1 auStack_58 [72];
  
  ar5_00 = ar5;
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7);
  FUN_8c0db304(auStack_58,ar5_00,ar6,ar7);
  FUN_8c018f80(auStack_58,ar5,ar6,ar7);
  iVar3 = 0;
  while( true ) {
    if (iVar1 <= iVar3) {
      Class_129974_m0_016c2c(auStack_58,0xffffffff,ar6,ar7);
      return 0;
    }
    a4 = (int *)get_field_a4_032154(ar4_00,ar5,ar6,ar7);
    ar5 = auStack_58;
    iVar2 = (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
    if (iVar2 == 1) break;
    ar4_00 = list_node_next(ar4_00,ar5,ar6,ar7);
    iVar3 = iVar3 + 1;
  }
  Class_129974_m0_016c2c(auStack_58,0xffffffff,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0db224\n.set _FUN_8c0db224, _FUN_8c0db224_def\n");
