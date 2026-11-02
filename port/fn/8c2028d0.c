#include "../decls.h"
uint FUN_8c2028d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,uint s4,
                 int s8,uint s12,int s16)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [4];
  
  FUN_8c010794(in_r0,auStack_8 + -in_r0,&s12);
  FUN_8c010794(8,auStack_10 + -in_r0,&s4);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    if ((s12 < s4) || (uVar2 = s8 - s16, 0x7fffffff < uVar2)) {
      uVar2 = 0x7fffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c2028d0\n.set _FUN_8c2028d0, _FUN_8c2028d0_def\n");
