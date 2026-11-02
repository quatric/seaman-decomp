#include "../decls.h"
int FUN_8c0fedf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  iVar1 = get_field_48_0feea8(ar4,ar5,ar6,ar7);
  ar4_00 = 0;
  if (iVar1 != 0) {
    ar4_00 = FUN_8c0fee88(ar4,ar5_00,ar6,ar7);
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(int *)(ar4_00 + 0x10) != 2) {
        ar6 = *(undefined4 *)(ar4_00 + 0xc);
        ar5_00 = ar5;
        iVar2 = (**(code **)(0xdc + *(int *)(*(int *)(ar4_00 + 8) + 8)))
                          (*(int *)(ar4_00 + 8),ar5,ar6,ar7);
        if (iVar2 == 1) {
          *(undefined4 *)(ar4_00 + 0x10) = 2;
        }
      }
      ar4_00 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    }
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0fedf4\n.set _FUN_8c0fedf4, _FUN_8c0fedf4_def\n");
