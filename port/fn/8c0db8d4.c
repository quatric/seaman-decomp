#include "../decls.h"
undefined4 FUN_8c0db8d4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *ar5_00;
  int iVar2;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = 0;
  ar5_00 = ar5;
  for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
    while (iVar1 = (*(code *)(&get_field_38_0db5a0))
                             (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7), iVar1 != 0) {
      iVar1 = (*(code *)(&get_field_38_0db5a0))
                        (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7);
      auStack_14[0] =
           (*(code *)(&s_Invalid_Item_number_CNodePtr_0fe424))
                     (iVar2 * 0x3c + ar4 + 0x3a8,iVar1 + -1,ar6,ar7);
      (*(code *)(&s_Item_pointer_is_NULL_CNodePt_0fe338))
                (iVar2 * 0x3c + ar4 + 0x3a8,auStack_14[0],ar6,ar7);
      ar5_00 = auStack_14;
      FUN_8c0feb88(ar4 + 0x7a4,ar5_00,ar6,ar7);
    }
    FUN_8c0fe4c4(iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7);
  }
  while (iVar2 = get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7),
        iVar2 != 0) {
    iVar2 = get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7);
    uStack_18 = (*(code *)(&s_Invalid_Item_number_CItemLis_0fe110))
                          (ar4 + 0xa4,iVar2 + -1,ar6,ar7);
    (*(code *)(&s_Item_pointer_is_NULL_CItemLi_0fe01c))
              (ar4 + 0xa4,uStack_18,ar6,ar7);
    ar5_00 = ar5;
    FUN_8c0d1b90(&uStack_18,ar5,ar6,ar7);
  }
  *(undefined4 *)(0x9d4 + ar4) = 0;
  *(undefined4 *)(0x1020 + ar4) = 0;
  *(undefined4 *)(0x1024 + ar4) = 0;
  return 1;
}

__asm__(".globl _FUN_8c0db8d4\n.set _FUN_8c0db8d4, _FUN_8c0db8d4_def\n");
