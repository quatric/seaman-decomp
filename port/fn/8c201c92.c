#include "../decls.h"
undefined4 FUN_8c201c92_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int a4;
  undefined4 in_PR;
  undefined1 auStackY_1c [8];
  undefined1 auStackY_14 [8];
  
  FUN_8c20202e(ar4,ar5,ar6,ar7,in_PR);
  a4 = ar4;
  iVar1 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
  FUN_8c010794(8,auStackY_14,ar4 + 8);
  FUN_8c010794(8,auStackY_1c,iVar1 + 0x3c);
  iVar2 = FUN_8c2029b4(a4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    FUN_8c010794(8,auStackY_14,ar4 + 8);
    FUN_8c010794(8,auStackY_1c,iVar1 + 0x3c);
    uVar3 = FUN_8c2028cc(a4,ar5,ar6,ar7);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c201c92\n.set _FUN_8c201c92, _FUN_8c201c92_def\n");
