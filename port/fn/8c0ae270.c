#include "../decls.h"
undefined4 FUN_8c0ae270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_314_0b58d0(ar4 + 0x53c,ar5,ar6,ar7);
  if (iVar1 != 0) {
    *(undefined4 *)(0x460 + ar4) = 0;
  }
  uVar2 = FUN_8c028f60(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0ae270\n.set _FUN_8c0ae270, _FUN_8c0ae270_def\n");
