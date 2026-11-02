#include "../decls.h"
int s_CItemGLoadRequestList_TakeOu_0fe960_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  if (*(int *)(ar4 + 0x48) != 0) {
    if (ar5 == 0) {
      report_error_message
                (s_GLoad_Unit_pointer_is_NULL___8c142084,s_CItemGLoadRequestList__TakeOut___8c1420a1
                 ,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = list_node_next(ar5,ar5,ar6,ar7);
      uVar2 = get_field_4_0dac48(ar5,ar5_00,ar6,ar7);
      FUN_8c0fdf08(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      uVar1 = get_field_4_0dac48(ar5,uVar2,ar6,ar7);
      uVar2 = list_node_next(ar5,uVar2,ar6,ar7);
      FUN_8c0fdf10(uVar1,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf08(ar5,0,ar6,ar7,in_stack_ffffffe0);
      FUN_8c0fdf10(ar5,0,ar6,ar7,in_stack_ffffffe0);
      *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + -1;
    }
  }
  return ar4;
}

__asm__(".globl _s_CItemGLoadRequestList_TakeOu_0fe960\n.set _s_CItemGLoadRequestList_TakeOu_0fe960, _s_CItemGLoadRequestList_TakeOu_0fe960_def\n");
