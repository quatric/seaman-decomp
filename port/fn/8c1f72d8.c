#include "../decls.h"
undefined4 FUN_8c1f72d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 ar6_00;
  int iVar5;
  int iStack_20;
  
  puVar2 = 0x8c4748b0;
  ar6_00 = 0x3c;
  memset(*(undefined4 *)0x8c4748b0,(int)0xff,0x3c,ar7);
  puVar3 = 0x8c4748a8;
  puVar1 = (&FUN_8c1f6e5e);
  iVar5 = 0;
  iStack_20 = ar4;
  do {
    iVar4 = (*(code *)puVar1)(iStack_20,*puVar2,ar6_00,ar7);
    if (iVar4 == 0) {
      *puVar3 = 8;
      return 0;
    }
    iVar5 = iVar5 + 1;
    iStack_20 = iStack_20 + 1;
  } while (iVar5 < 4);
  return 1;
}

__asm__(".globl _FUN_8c1f72d8\n.set _FUN_8c1f72d8, _FUN_8c1f72d8_def\n");
