#include "../decls.h"
undefined4
s_E8101201_not_enough_data_adx_26461e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 uVar1;
  int s4;
  int *ar4_00;
  undefined4 ar5_01;
  undefined4 a6;
  undefined1 *a6_00;
  undefined1 *puVar2;
  undefined4 ar4_01;
  int *a4;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  a4 = *(int **)(ar4 + 0x14);
  ar4_01 = *(undefined4 *)(ar4 + 4);
  ar5_00 = FUN_8c2631b6(ar4_01,ar5,ar6,ar7);
  uVar1 = FUN_8c2631c2(ar4_01,ar5,ar6,ar7);
  s4 = FUN_8c2631ce(ar4_01,ar5,ar6,ar7);
  FUN_8c2631da(ar4_01,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 8) == 0) && (*(char *)(ar4 + 0x6c) == '\0')) {
    uVar1 = FUN_8c26311e(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7,s4);
  }
  else {
    a6 = *(undefined4 *)(ar4 + 0x50);
    ar5_01 = 1;
    puVar2 = auStack_20;
    ar4_00 = a4;
    (**(code **)(*a4 + 0x18))(a4,1,a6,puVar2);
    if (iStack_1c < *(int *)(ar4 + 0x50)) {
      FUN_8c25ece6(ar4_00,ar5_01,a6,puVar2,"E8101201: not enough data (adxt_trap_entry)\n",s4);
    }
    a6_00 = auStack_20;
    (**(code **)(*a4 + 0x20))(a4,0,a6_00,puVar2);
    FUN_8c263126(ar4_01,0,a6_00,puVar2);
    *(int *)(ar4 + 0x90) = s4 - ar5_00;
    FUN_8c26311e(ar4_01,s4 - ar5_00,a6_00,puVar2,s4);
    FUN_8c263132(ar4_01,uVar1,a6_00,puVar2);
    FUN_8c263102(ar4_01,ar5_00,a6_00,puVar2,s4);
    if (*(char *)(ar4 + 2) == '\x02') {
      (**(code **)(*a4 + 0x14))(a4,ar5_00,a6_00,puVar2);
      puVar2 = auStack_20;
      (**(code **)(*a4 + 0x18))(a4,1,uVar1,puVar2);
      (**(code **)(*a4 + 0x20))(a4,0,auStack_20,puVar2);
    }
    uVar1 = 0x4c;
    *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + 1;
  }
  return uVar1;
}

__asm__(".globl _s_E8101201_not_enough_data_adx_26461e\n.set _s_E8101201_not_enough_data_adx_26461e, _s_E8101201_not_enough_data_adx_26461e_def\n");
