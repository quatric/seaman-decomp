#include "../decls.h"
undefined4 FUN_8c206162_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_20a840(ar4,ar5,ar6,ar7,in_PR);
  g2dma_205a62(ar4,ar5,ar6,ar7);
  FUN_8c25d780(ar4,ar5,ar6,ar7);
  FUN_8c2034c0(ar4,ar5,ar6,ar7);
  FUN_8c206300(ar4,ar5,ar6,ar7);
  FUN_8c205d80(ar4,ar5,ar6,ar7);
  _DAT_8c4aa004 = 0x100000;
  _DAT_8c4aa008 = 0;
  _DAT_8c4aa00c = 0;
  _DAT_8c4aa010 = 0;
  uVar1 = FUN_8c25d7c6(_DAT_8c4a9c18 >> 7,_DAT_8c4a9c1c >> 7,_DAT_8c4a9c20 >> 7,_DAT_8c4a9c24 >> 7,
                       _DAT_8c4a9c14);
  return uVar1;
}

__asm__(".globl _FUN_8c206162\n.set _FUN_8c206162, _FUN_8c206162_def\n");
