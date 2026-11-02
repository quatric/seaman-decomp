#include "../decls.h"
undefined8 * FUN_8c08dd98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c031684(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x128) == 3) {
    *(undefined4 *)(ar4 + 0x248) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    puVar1 = &DAT_8c08de1c;
    if (cVar2 == '\0') {
      *(undefined4 *)(ar4 + 0x24) = 0x41200000;
    }
    else {
      *(undefined8 *)(ar4 + 0x24) = 0x21441200000;
    }
  }
  else {
    *(undefined4 *)(ar4 + 0x214) = 1;
    FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x240) = 0;
    puVar1 = *(undefined8 **)(ar4 + 0x2f4);
    if ((-1 < (int)puVar1) && (puVar1 = *(undefined8 **)(ar4 + 0x2f8), -1 < (int)puVar1)) {
      FUN_8c06b1d8(*(undefined4 *)(ar4 + 0x2f4),*(undefined4 *)(ar4 + 0x2f8),ar6,ar7);
      *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
      puVar1 = (undefined8 *)0x2f8;
      *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c08dd98\n.set _FUN_8c08dd98, _FUN_8c08dd98_def\n");
