#include "../decls.h"
int FUN_8c0dc8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  int iVar3;
  
  ar5_00 = ar5;
  ar4_00 = FUN_8c0db580(ar4 + 0x4d4,ar5,ar6,ar7);
  iVar1 = get_field_38_0db5a0(ar4 + 0x4d4,ar5_00,ar6,ar7);
  iVar2 = iVar1;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    ar5_00 = get_field_b0_10113c(ar5,ar5_00,ar6,ar7);
    (**(code **)(0x90 + *(int *)(*(int *)(ar4_00 + 8) + 8)))
              (*(int *)(ar4_00 + 8),ar5_00,ar6,ar7);
    iVar2 = list_node_next(ar4_00,ar5_00,ar6,ar7);
    ar4_00 = iVar2;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0dc8fc\n.set _FUN_8c0dc8fc, _FUN_8c0dc8fc_def\n");
