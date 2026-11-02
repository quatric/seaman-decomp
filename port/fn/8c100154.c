#include "../decls.h"
undefined4 FUN_8c100154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c01ec20(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if ((iVar1 == 1) &&
       (uVar2 = FUN_8c1001d4(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
       (ushort)uVar2 < 0x1e)) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_8c01ec20(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100154\n.set _FUN_8c100154, _FUN_8c100154_def\n");
