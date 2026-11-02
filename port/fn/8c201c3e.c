#include "../decls.h"
undefined4 FUN_8c201c3e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = 0x8c47e820;
  puVar2 = 0x8c47e820;
  while( true ) {
    if (0x8c47e820 + 0x100 <= puVar1) {
      return 0;
    }
    if (puVar1[1] == '\0') break;
    puVar1 = puVar1 + 0x10;
    puVar2 = puVar2 + 0x10;
  }
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = ar4;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[1] = 1;
  return puVar2;
}

__asm__(".globl _FUN_8c201c3e\n.set _FUN_8c201c3e, _FUN_8c201c3e_def\n");
