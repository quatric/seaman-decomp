#include "../decls.h"
undefined4 FUN_8c0c8f64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (*(code *)(&get_field_d0_0c51fc))
                    (*(undefined4 *)(0x7cc + ar5),ar5,ar6,ar7);
  if (iVar1 == 1) {
    (**(code **)(**(int **)(ar4 + 0xc) + 0x28))(*(int **)(ar4 + 0xc),ar5_00,ar6,ar7);
  }
  else {
    iVar1 = (*(code *)(&get_field_d0_0c51fc))
                      (*(undefined4 *)(0x7cc + ar5),ar5_00,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0c8f64\n.set _FUN_8c0c8f64, _FUN_8c0c8f64_def\n");
