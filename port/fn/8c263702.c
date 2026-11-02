#include "../decls.h"
undefined4 FUN_8c263702_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  int a4;
  
  a4 = ar4;
  FUN_8c260ca0(ar4,ar5,ar6,ar7,ar4);
  ain0 = (int)*(char *)(a4 + 1);
  if (ain0 == 2) {
    ain0 = s_E8101214_GDFS_error_adxstmf__2635aa(a4,ar5,ar6,ar7);
    ar4 = a4;
  }
  uVar1 = FUN_8c260cc8(ar4,ar5,ar6,ar7,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c263702\n.set _FUN_8c263702, _FUN_8c263702_def\n");
