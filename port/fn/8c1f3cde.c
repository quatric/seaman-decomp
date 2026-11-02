#include "../decls.h"
undefined4 FUN_8c1f3cde_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f3d28(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_8c1efeac(ar4,4,0,0);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3cde\n.set _FUN_8c1f3cde, _FUN_8c1f3cde_def\n");
