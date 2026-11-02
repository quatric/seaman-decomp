#include "../decls.h"
undefined4 FUN_8c1f6e0c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 ar5_00;
  
  puVar1 = 0x8c4748b0;
  ar5_00 = *(undefined4 *)0x8c4748b0;
  iVar2 = FUN_8c1f881c(ar4,ar5_00,ar6,ar7);
  if (iVar2 != 0) {
    FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6,ar7);
    iVar2 = FUN_8c1f881c(ar4,*puVar1,ar6,ar7);
    if (iVar2 != 0) {
      *(undefined4 *)0x8c4748a8 = 7;
    }
    return 0;
  }
  if (ar5 != 0) {
    memmove(ar5,*puVar1,0x3c,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c1f6e0c\n.set _FUN_8c1f6e0c, _FUN_8c1f6e0c_def\n");
