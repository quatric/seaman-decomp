#include "../decls.h"
int FUN_8c1f6d56_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r9;
  undefined4 unaff_r10;
  int iVar3;
  int unaff_r13;
  
  puVar1 = (&FUN_8c1f881c);
  iVar3 = ar5;
  if (0 < unaff_r9) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,unaff_r10,ar6,ar7);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      ar6 = 0x3c;
      iVar2 = FUN_8c013ec0(unaff_r10,unaff_r13,0x3c,ar7);
      iVar3 = iVar3 + 1;
      if (iVar2 != 0) {
        ar5 = ar5 + 1;
      }
      unaff_r13 = unaff_r13 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar3 < unaff_r9);
  }
  return ar5;
}

__asm__(".globl _FUN_8c1f6d56\n.set _FUN_8c1f6d56, _FUN_8c1f6d56_def\n");
