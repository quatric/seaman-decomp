#include "../decls.h"
undefined4 FUN_8c25603a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = 0x8c4ab138;
  *(undefined4 *)0x8c4ab13c = ar4;
  if (ar4 == 0) {
    uVar2 = 0;
  }
  else if (ar4 == 1) {
    uVar2 = 1;
  }
  else if (ar4 == 2) {
    uVar2 = 2;
  }
  else {
    if (ar4 == 6) {
      uVar2 = 3;
      *puVar1 = 0x20;
      goto LAB_8c256072;
    }
    uVar2 = 0;
  }
  *puVar1 = 0x10;
LAB_8c256072:
  uVar2 = FUN_8c20a280(uVar2);
  return uVar2;
}

__asm__(".globl _FUN_8c25603a\n.set _FUN_8c25603a, _FUN_8c25603a_def\n");
