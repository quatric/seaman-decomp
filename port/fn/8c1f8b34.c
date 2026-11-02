#include "../decls.h"
uint sh4_tmu_1f8b34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = 0xffd80004;
  if (((((ushort)ar4 != 0) && ((ushort)ar4 != 1)) && ((ushort)ar4 != 2)) &&
     (((ushort)ar4 != 3 && ((ushort)ar4 != 4)))) {
    (*(uint*)((uchar*)&ar4+0)) = 2;
  }
  cVar1 = *(undefined4 *)0xffd80004;
  cVar2 = *(undefined4 *)0xffd80004;
  *(undefined4 *)0xffd80004 = (char)((int)cVar2 & 0xfbU);
  *(undefined4 *)0xffd80028 = *(undefined4 *)0xffd80028 & 0xfff8 | (ushort)ar4;
  *pcVar3 = cVar1;
  return (int)cVar2 & 0xfbU;
}

__asm__(".globl _sh4_tmu_1f8b34\n.set _sh4_tmu_1f8b34, _sh4_tmu_1f8b34_def\n");
