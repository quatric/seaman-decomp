#include "../decls.h"
undefined4
FUN_8c2027c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,int s4,uint s8)

{
  undefined4 uVar1;
  int iStack_c;
  uint uStack_8;
  
  if (ar4 < 1) {
    uVar1 = FUN_8c010794(8,s0,&s4);
    return uVar1;
  }
  uStack_8 = ar4 + s8;
  iStack_c = s4;
  if (uStack_8 < s8) {
    iStack_c = s4 + 1;
  }
  uVar1 = FUN_8c010794(8,s0,&iStack_c);
  return uVar1;
}

__asm__(".globl _FUN_8c2027c0\n.set _FUN_8c2027c0, _FUN_8c2027c0_def\n");
