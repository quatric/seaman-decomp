#include "../decls.h"
undefined4
FUN_8c202976_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,uint s4,
            uint s8)

{
  undefined4 uVar1;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = s8 << 1;
  if (s4 < 0x80000000) {
    iStack_c = s4 * 2 + (uint)(0x7fffffff < s8);
  }
  else {
    iStack_c = -1;
  }
  uVar1 = FUN_8c010794(8,s0,&iStack_c);
  return uVar1;
}

__asm__(".globl _FUN_8c202976\n.set _FUN_8c202976, _FUN_8c202976_def\n");
