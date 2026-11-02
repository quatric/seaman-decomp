#include "../decls.h"
undefined4 FUN_8c035994_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_8c02d1c8(*(int *)(ar4 + 8) + 0xa8,ar5,ar6,ar7);
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = get_field_178_035734(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7)
       , iVar2 == 0)) &&
      (iVar2 = get_field_140_025f70(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7),
      iVar2 == 1)) &&
     (uVar1 = get_field_a0_035724(*(undefined4 *)(ar4 + 0x20),ar5,ar6,ar7),
     (char)uVar1 == '\x02')) {
    iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    if (iVar2 != 4) {
      return 1;
    }
    iVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x44))(*(int **)(ar4 + 0x10),ar5,ar6,ar7);
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035994\n.set _FUN_8c035994, _FUN_8c035994_def\n");
