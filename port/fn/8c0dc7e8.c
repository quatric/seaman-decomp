#include "../decls.h"
int FUN_8c0dc7e8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 *ar5_00;
  int iVar3;
  undefined4 uStack_20;
  undefined4 auStack_1c [2];
  
  auStack_1c[0] = 0;
  uStack_20 = 0;
  ar5_00 = ar5;
  iVar1 = FUN_8c100d5c(ar5,ar5,ar6,ar7);
  if ((iVar1 == 1) && (iVar1 = *(int *)(ar4 + 0x9d8), iVar1 == 0)) {
    ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7);
    iVar2 = get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7);
    iVar1 = iVar2;
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar1 = get_field_24_05c284(ar4_00,ar5_00,ar6,ar7);
      if ((iVar1 == 3) || (iVar1 = get_field_24_05c284(ar4_00,ar5_00,ar6,ar7), iVar1 == 5)) {
        ar6 = &uStack_20;
        ar5_00 = auStack_1c;
        FUN_8c101210(ar5,ar5_00,ar6,ar7);
        (**(code **)(*(int *)(ar4_00 + 8) + 0x8c))(ar4_00,ar5_00,ar6,ar7);
      }
      iVar1 = list_node_next(ar4_00,ar5_00,ar6,ar7);
      ar4_00 = iVar1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc7e8\n.set _FUN_8c0dc7e8, _FUN_8c0dc7e8_def\n");
