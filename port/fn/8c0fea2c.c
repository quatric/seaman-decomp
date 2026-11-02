#include "../decls.h"
undefined4 s_CItemGLoadRequestList_GetPtr_0fea34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = list_node_next(ar4,ar5,ar6,ar7);
  if ((ar5 < 0) || (*(int *)(ar4 + 0x48) < ar5)) {
    (*(code *)(&report_error_message))
              ((&DATA_8c141e34) + 0x28e,
               (&DATA_8c141e34) + 0x2a2,1,2);
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}

__asm__(".globl _s_CItemGLoadRequestList_GetPtr_0fea34\n.set _s_CItemGLoadRequestList_GetPtr_0fea34, _s_CItemGLoadRequestList_GetPtr_0fea34_def\n");
