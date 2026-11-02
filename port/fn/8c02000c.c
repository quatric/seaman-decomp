#include "../decls.h"
undefined4 *
FUN_8c02000c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 *puVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  puVar1 = (undefined4 *)malloc_thunk(0xd8,ar5,ar6,ar7);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = ar5;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    strcpy(puVar1 + 4,ar6,ar6_00,ar7_00,ar5);
    strcpy(puVar1 + 0xc,ar7,ar6_00,ar7_00,ar5);
    puVar1[0x14] = s0;
    puVar1[0x15] = s4;
    for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
      puVar1[iVar2 + 0x16] = 0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c02000c\n.set _FUN_8c02000c, _FUN_8c02000c_def\n");
