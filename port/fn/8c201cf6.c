#include "../decls.h"
undefined4 FUN_8c201cf6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined1 auStackY_1c [8];
  undefined1 auStackY_14 [8];
  int iVar3;
  
  iVar1 = ar4;
  iVar3 = ar5;
  FUN_8c20202e(ar4,ar5,ar6,ar7,ar5);
  if (iVar3 == 0) {
    FUN_8c010794(8,ar4 + 8,&stack0x00000004);
  }
  else if (iVar3 == 1) {
    FUN_8c010794(8,auStackY_14,&stack0x00000004);
    FUN_8c010794(8,auStackY_1c,ar4 + 8);
    FUN_8c20280c(iVar1,ar5,ar6,ar7);
  }
  else if (iVar3 == 2) {
    iVar1 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
    FUN_8c010794(8,ar4 + 8,iVar1 + 0x3c);
  }
  uVar2 = FUN_8c010794(8,in_stack_00000000,ar4 + 8);
  return uVar2;
}

__asm__(".globl _FUN_8c201cf6\n.set _FUN_8c201cf6, _FUN_8c201cf6_def\n");
