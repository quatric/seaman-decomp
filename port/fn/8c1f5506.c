#include "../decls.h"
undefined4 FUN_8c1f5506_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  FUN_8c1f59dc(ar4,0,0x1e,ar7);
  *(undefined1 *)(ar4 + 0x14) = 0x28;
  *(undefined1 *)(ar4 + 0x15) = 0x6e;
  *(undefined1 *)(ar4 + 0x16) = 0x6f;
  *(undefined1 *)(ar4 + 0x17) = 0x6e;
  *(undefined1 *)(ar4 + 0x18) = 0x65;
  puVar1 = (undefined1 *)(ar4 + 0x1a);
  *(undefined1 *)(ar4 + 0x19) = 0x29;
  do {
    *puVar1 = 0x20;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined1 *)(ar4 + 0x33));
  *(undefined1 *)(ar4 + 0x33) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f5506\n.set _FUN_8c1f5506, _FUN_8c1f5506_def\n");
