#include "../decls.h"
undefined4 FUN_8c0fc4c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0fc4c4\n.set _FUN_8c0fc4c4, _FUN_8c0fc4c4_def\n");
