#include "../decls.h"
uint sh4_tmu_1f88c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  puVar1 = 0xffd80000;
  *(undefined4 *)0xffd80000 = 0;
  pbVar2 = 0xffd80004;
  *(undefined4 *)0xffd80004 = *(undefined4 *)0xffd80004 & 0xfe;
  *(undefined4 *)0xffd80010 = 2;
  *(undefined4 *)0xffd80008 = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  uVar3 = (int)(char)*pbVar2 | 1;
  *pbVar2 = (byte)uVar3;
  return uVar3;
}

__asm__(".globl _sh4_tmu_1f88c0\n.set _sh4_tmu_1f88c0, _sh4_tmu_1f88c0_def\n");
