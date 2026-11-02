#include "../decls.h"
undefined4 Class_12a990_m8_09d3f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  CAnimal_m8_0f511c(ar4,ar5,ar6,ar7);
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(int *)(0x524 + ar4 + iVar1 * 4) != 0) {
      ar5 = get_field_74_09d474(ar4,ar5,ar6,ar7);
      FUN_8c09d46c(*(undefined4 *)(0x524 + ar4 + iVar1 * 4),ar5,ar6,ar7);
    }
  }
  return 8;
}

__asm__(".globl _Class_12a990_m8_09d3f8\n.set _Class_12a990_m8_09d3f8, _Class_12a990_m8_09d3f8_def\n");
