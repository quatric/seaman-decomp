#include "../decls.h"
undefined4
FUN_8c20280c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,int s4,int s8
            ,int s12,uint s16)

{
  undefined4 uVar1;
  bool bVar2;
  int iStack_c;
  int iStack_8;
  
  bVar2 = s16 <= 0xffffffffU - s8;
  if (bVar2) {
    iStack_8 = s8 + s16;
  }
  else {
    iStack_8 = s16 + s8 + 1;
  }
  iStack_c = s4 + s12 + (uint)!bVar2;
  uVar1 = FUN_8c010794(8,s0,&iStack_c);
  return uVar1;
}

__asm__(".globl _FUN_8c20280c\n.set _FUN_8c20280c, _FUN_8c20280c_def\n");
