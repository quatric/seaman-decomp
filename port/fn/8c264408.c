#include "../decls.h"
undefined4
s_E8101202_can_t_open_d_d_ADXT_26440a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *ar7_00;
  int in_stack_ffffffe8;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar2 = ar4;
  uStack_10 = ar5;
  uStack_c = ar6;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,ar6,ar7,in_stack_ffffffe8);
  ar7_00 = &uStack_14;
  FUN_8c26270c(uStack_10,uStack_c,&stack0xffffffe8,ar7_00);
  uVar3 = *(undefined4 *)(ar4 + 0x10);
  iVar2 = in_stack_ffffffe8;
  iVar1 = s_E8101212_can_t_open_fad_d_ns_26338a(in_stack_ffffffe8,uStack_14,uVar3,ar7_00);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_8c260cc8(in_stack_ffffffe8,uStack_14,uVar3,ar7_00,iVar2);
    FUN_8c25ece6(in_stack_ffffffe8,uStack_14,uVar3,ar7_00,
                 "E8101202: can\'t open %d, %d (ADXT_StartAfs)\n",uStack_10);
    ar4 = in_stack_ffffffe8;
  }
  else {
    FUN_8c263bc0(ar4,uStack_14,uVar3,ar7_00);
  }
  uVar3 = FUN_8c260cc8(ar4,uStack_14,uVar3,ar7_00,iVar2);
  return uVar3;
}

__asm__(".globl _s_E8101202_can_t_open_d_d_ADXT_26440a\n.set _s_E8101202_can_t_open_d_d_ADXT_26440a, _s_E8101202_can_t_open_d_d_ADXT_26440a_def\n");
