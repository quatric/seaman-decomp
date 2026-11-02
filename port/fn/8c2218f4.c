#include "../decls.h"
int FUN_8c2218f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined1 auStack_20 [32];
  
  puVar1 = auStack_20;
  FUN_8c0107a0(0x1c,auStack_20,&DAT_8c26d7e8);
  _DAT_8c4c0ed0 = *(undefined4 *)(puVar1 + ar4 * 4);
  return ar4 * 4;
}

__asm__(".globl _FUN_8c2218f4\n.set _FUN_8c2218f4, _FUN_8c2218f4_def\n");
