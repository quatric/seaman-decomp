#include "../decls.h"
undefined4 s_Invalid_Item_number_CNodePtr_0fe424_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x38) < ar5)) {
    noop_102824(s_Invalid_Item_number__CNodePtrLis_8c141fcf,0,0,0xd,0xffffffff);
    report_error_message(s_Invalid_Item_number_8c141f18,s_CNodePtrList__DeleteItem___8c141fff,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}

__asm__(".globl _s_Invalid_Item_number_CNodePtr_0fe424\n.set _s_Invalid_Item_number_CNodePtr_0fe424, _s_Invalid_Item_number_CNodePtr_0fe424_def\n");
