#include "../decls.h"
undefined4 FUN_8c028f60_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  int ar5_00;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
  FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  ar5_00 = ar5 + 0xd8;
  FUN_8c03539c(ar4 + 0x2dc,ar5_00,ar6,ar7);
  iVar1 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
  if (iVar1 == 2) {
    a6 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x308) + 0x30))(*(int **)(ar4 + 0x308),ar5 + 200,a6,ar7);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x28))(*(int **)(ar4 + 0x308),ar5 + 200,ar6,ar7);
  }
  *(undefined4 *)(ar5 + 0xe8) = *(undefined4 *)(ar4 + 0x460);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar5 + 0xec) = *(undefined4 *)(ar4 + 0x468);
  }
  else {
    *(undefined8 *)(ar5 + 0xec) = *(undefined8 *)(ar4 + 0x468);
  }
  return 0x468;
}

__asm__(".globl _FUN_8c028f60\n.set _FUN_8c028f60, _FUN_8c028f60_def\n");
