#include "../decls.h"
int FUN_8c0daad0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  undefined4 auStack_14 [2];
  
  auStack_14[0] = 0;
  iVar2 = ar5;
  iVar1 = get_field_24_05c284(ar5,ar5,ar6,ar7);
  ar5_00 = get_field_160_0dab80(ar5,iVar2,ar6,ar7);
  (*(code *)(&s_Item_pointer_is_NULL_CNodePt_0fe338))
            (iVar1 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7);
  auStack_14[0] = get_field_160_0dab80(ar5,ar5_00,ar6,ar7);
  FUN_8c0feb88(ar4 + 0x7a4,auStack_14,ar6,ar7);
  iVar2 = ar5;
  s_Item_pointer_is_NULL_CItemLi_0fe01c(ar4 + 0xa4,ar5,ar6,ar7);
  (**(code **)(*(int *)(ar5 + 8) + 100))(ar5,iVar2,ar6,ar7);
  return ar5;
}

__asm__(".globl _FUN_8c0daad0\n.set _FUN_8c0daad0, _FUN_8c0daad0_def\n");
