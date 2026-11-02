#include "../decls.h"
undefined4 s_Failed_wrap_028c18_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(0x328 + ar4) + ar6 * 0x124;
  s_Failed_s_015312(iVar2 + 0x78,ar5,ar6,ar7);
  if (*(int *)(iVar2 + 0x34) != 0) {
    s_Failed_s_015312(iVar2 + 0x80,ar5,ar6,ar7);
  }
  uVar1 = 0;
  if (*(int *)(iVar2 + 0x10) != 0) {
    s_Failed_s_015312(iVar2 + 0x88,ar5,ar6,ar7);
    uVar1 = 0;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      uVar1 = s_Failed_s_015312(iVar2 + 0x90,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_028c18\n.set _s_Failed_wrap_028c18, _s_Failed_wrap_028c18_def\n");
