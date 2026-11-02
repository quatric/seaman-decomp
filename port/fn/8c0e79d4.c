#include "../decls.h"
undefined4 Class_12b3b8_m1_0e79d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  int iVar2;
  
  if (*(int *)(0x410 + ar4) != 0) {
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        if (*(int *)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
          a4 = *(int *)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20);
          (**(code **)(*(int *)(a4 + 8) + 0x20))(a4,ar5,ar6,ar7);
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12b3b8_m1_0e79d4\n.set _Class_12b3b8_m1_0e79d4, _Class_12b3b8_m1_0e79d4_def\n");
