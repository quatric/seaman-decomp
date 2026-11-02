#include "../decls.h"
undefined4 FUN_8c028ccc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  iVar1 = ar5 + 0xd8;
  FUN_8c035338(ar4 + 0x2dc,iVar1,ar6,ar7);
  iVar1 = get_field_13c_028d9c(ar4 + 0x174,iVar1,ar6,ar7);
  if (iVar1 == 2) {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x2c))(*(int **)(ar4 + 0x308),ar5 + 200,2,ar7);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x24))(*(int **)(ar4 + 0x308),ar5 + 200,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x460) = *(undefined4 *)(ar5 + 0xe8);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = *(undefined4 *)(ar5 + 0xec);
  }
  else {
    *(undefined8 *)(ar4 + 0x468) = *(undefined8 *)(ar5 + 0xec);
  }
  return 0xec;
}

__asm__(".globl _FUN_8c028ccc\n.set _FUN_8c028ccc, _FUN_8c028ccc_def\n");
