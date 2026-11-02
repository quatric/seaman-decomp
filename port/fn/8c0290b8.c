#include "../decls.h"
undefined4 FUN_8c0290b8_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124 + 0xf4);
  if (cVar3 == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)puVar2;
  }
  else {
    *ar5 = *puVar2;
  }
  return 0xf0;
}

__asm__(".globl _FUN_8c0290b8\n.set _FUN_8c0290b8, _FUN_8c0290b8_def\n");
