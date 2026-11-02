#include "../decls.h"
uint sh4_tmu_1f8b6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = 0xffd80004;
  cVar1 = *(undefined4 *)0xffd80004;
  cVar2 = *(undefined4 *)0xffd80004;
  *(undefined4 *)0xffd80004 = (char)((int)cVar2 & 0xfbU);
  *(undefined4 *)0xffd80020 = 0xffffffff;
  *(undefined4 *)0xffd80024 = -ar4;
  *pcVar3 = cVar1;
  return (int)cVar2 & 0xfbU;
}

__asm__(".globl _sh4_tmu_1f8b6e\n.set _sh4_tmu_1f8b6e, _sh4_tmu_1f8b6e_def\n");
