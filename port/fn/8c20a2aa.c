#include "../decls.h"
undefined4 FUN_8c20a2aa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 ar5_00;
  int iVar2;
  int unaff_r12;
  undefined4 *unaff_r13;
  int ar4_00;
  
  puVar1 = (&pvr_20a844);
  ar4_00 = (int)0x1000;
  iVar2 = (int)0x400;
  do {
    ar5_00 = *unaff_r13;
    unaff_r13 = unaff_r13 + 1;
    (*(code *)puVar1)(ar4_00,ar5_00,ar6,ar7);
    unaff_r12 = unaff_r12 + 1;
    ar4_00 = ar4_00 + 4;
  } while (unaff_r12 < iVar2);
  return 0;
}

__asm__(".globl _FUN_8c20a2aa\n.set _FUN_8c20a2aa, _FUN_8c20a2aa_def\n");
