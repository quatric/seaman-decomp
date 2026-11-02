#include "../decls.h"
undefined4 FUN_8c263c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar4_00;
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_stack_fffffff0);
  s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  ar4_00 = *(int **)(ar4 + 4);
  FUN_8c262c66(ar4_00,uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    FUN_8c263498(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    FUN_8c263446(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7,in_stack_fffffff0);
    ar4_00 = *(int **)(ar4 + 0x14);
    (**(code **)(*ar4_00 + 0x14))(ar4_00,uVar1,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  if ((*(char *)(ar4 + 2) == '\x02') && (*(int *)(ar4 + 0x14) != 0)) {
    ar4_00 = *(int **)(ar4 + 0x14);
    (**(code **)(*ar4_00 + 0xc))(ar4_00,uVar1,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  uVar1 = FUN_8c260cc8(ar4_00,uVar1,ar6,ar7,0);
  return uVar1;
}

__asm__(".globl _FUN_8c263c64\n.set _FUN_8c263c64, _FUN_8c263c64_def\n");
