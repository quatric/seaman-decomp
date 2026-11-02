#include "../decls.h"
undefined4
FUN_8c20284e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,int s4,
            uint s8,int s12,uint s16)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  
  FUN_8c010794(8,auStack_28,&s12);
  FUN_8c010794(8,auStack_30,&s4);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    iStack_1c = s8 - s16;
    iStack_20 = (s4 - s12) - (uint)(s8 < s16);
  }
  else {
    iStack_1c = 0;
    iStack_20 = 0;
  }
  uVar2 = FUN_8c010794(8,s0,&iStack_20);
  return uVar2;
}

__asm__(".globl _FUN_8c20284e\n.set _FUN_8c20284e, _FUN_8c20284e_def\n");
