#include "../decls.h"
undefined4 FUN_8c0d1060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *a4;
  int iVar2;
  
  if (*(int *)(ar4 + 0xeb44) == 1) {
    *(float *)(ar4 + 0xeb40) = *(float *)(ar4 + 0xeb40) + 0.05;
    if (100.0 < *(float *)(ar4 + 0xeb40)) {
      *(undefined4 *)(ar4 + 0xeb40) = 0x42c80000;
    }
  }
  else {
    *(float *)(ar4 + 0xeb40) = *(float *)(ar4 + 0xeb40) - 0.00027777778;
    if (*(float *)(ar4 + 0xeb40) < 0.0) {
      *(undefined4 *)(ar4 + 0xeb40) = 0;
    }
  }
  for (iVar2 = 0; iVar2 < 0x15e; iVar2 = iVar2 + 1) {
    iVar1 = get_field_100_0d1058(ar4 + iVar2 * 0xac + 0xc,ar5,ar6,ar7);
    if (iVar1 == 1) {
      a4 = (int *)(ar4 + iVar2 * 0xac + 0xc);
      (**(code **)(*a4 + 8))(a4,ar5,ar6,ar7);
    }
  }
  *(short *)(ar4 + 0xeb64) = *(short *)(ar4 + 0xeb64) + 1;
  return 0xeb64;
}

__asm__(".globl _FUN_8c0d1060\n.set _FUN_8c0d1060, _FUN_8c0d1060_def\n");
