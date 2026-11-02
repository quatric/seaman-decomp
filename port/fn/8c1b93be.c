#include "../decls.h"
undefined4 FUN_8c1b93be_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *unaff_r9;
  char in_S;
  undefined4 in_MACH;
  undefined4 in_MACL;
  
  if (in_S != '\0') {
    mac_lOp(CONCAT44(in_MACH,in_MACL),(longlong)*unaff_r9 * (longlong)*ar4);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b93be\n.set _FUN_8c1b93be, _FUN_8c1b93be_def\n");
