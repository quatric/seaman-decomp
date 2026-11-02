#include "../decls.h"
undefined4 FUN_8c1f884c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined1 auStack_48 [68];
  
  iVar2 = FUN_8c1f881c(ar4,auStack_48,ar6,ar7);
  if (iVar2 == 0) {
    ar6_00 = 0x3c;
    iVar2 = FUN_8c013ec0(auStack_48,ar5,0x3c,ar7);
    if (iVar2 == 0) {
      return 3;
    }
    iVar2 = FUN_8c1f0f60(ar4,ar5,ar6_00,ar7);
    puVar1 = (&FUN_8c1f0fa0);
    if (iVar2 == 0) {
      do {
        iVar2 = (*(code *)puVar1)(ar4,ar5,ar6_00,ar7);
        ar4 = (uint)(iVar2 == 2);
      } while (iVar2 == 2);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f884c\n.set _FUN_8c1f884c, _FUN_8c1f884c_def\n");
