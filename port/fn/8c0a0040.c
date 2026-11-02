#include "../decls.h"
int FUN_8c0a0040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int in_stack_ffffffe4;
  
  if (*(int *)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    FUN_8c0a0184(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    in_stack_ffffffe4 = *(int *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c13adfc + in_stack_ffffffe4 * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0xf) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0xc) = 0;
      FUN_8c02f404(ar4,0,ar6_00,ar7,in_stack_ffffffe4);
      ar6 = ar6_00;
    }
    else {
      FUN_8c02f404(ar4,3,ar6_00,ar7,in_stack_ffffffe4);
      FUN_8c0a00f8(ar4,ar5,ar6,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0a0040\n.set _FUN_8c0a0040, _FUN_8c0a0040_def\n");
