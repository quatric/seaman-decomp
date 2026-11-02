#include "../decls.h"
int FUN_8c01c560_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffffb4;
  char acStack_28 [36];
  
  iVar1 = FUN_8c1fc258(_DAT_8c2791b4,acStack_28,ar6,ar7);
  if (iVar1 == -0xfb) {
    iVar1 = 0x2450;
    ar4[*ar4 * 10 + 0x914] = 4;
  }
  else if (iVar1 != -1) {
    if (iVar1 == 0) {
      if (acStack_28[0] == '\0') {
        iVar1 = 0x2450;
        ar4[*ar4 * 10 + 0x914] = 4;
      }
      else {
        iVar1 = FUN_8c01c68c(acStack_28,ar4 + *ar4 * 10 + 0x917,ar6,ar7);
        if (iVar1 == 0) {
          iVar1 = 0x2450;
          ar4[*ar4 * 10 + 0x914] = 1;
        }
        else {
          ar4[*ar4 * 10 + 0x914] = 5;
          iVar1 = strcpy(ar4 + *ar4 * 10 + 0x917,acStack_28,ar6,ar7,in_stack_ffffffb4);
        }
      }
    }
    else {
      iVar1 = 0x2450;
      ar4[*ar4 * 10 + 0x914] = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01c560\n.set _FUN_8c01c560, _FUN_8c01c560_def\n");
