#include "../decls.h"
int FUN_8c25a838_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int ain0;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  int in_stack_ffffffd8;
  
  ar6_00 = &stack0xffffffd8;
  ar5_00 = *(undefined4 *)(ar4 + 4);
  iVar1 = FUN_8c25afc0(ar5,ar5_00,&stack0xffffffd8,ar7);
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    in_stack_ffffffd8 = in_stack_ffffffd8 + -8;
    if (iVar1 < in_stack_ffffffd8) {
      ain0 = in_stack_ffffffd8 - iVar1;
      in_stack_ffffffd8 = iVar1;
    }
    else {
      ain0 = 0;
    }
    ar4_00 = FUN_8c236278(in_stack_ffffffd8,ar5_00,ar6_00,ar7);
    if (ar4_00 == 0) {
      _DAT_8c4aa6b4 = 7;
      iVar1 = -7;
    }
    else {
      iVar1 = FUN_8c259c48(ar4_00,in_stack_ffffffd8,ar6_00,ar7);
      if (iVar1 < 0) {
        iVar1 = -5;
      }
      else {
        FUN_8c1f9e32(ar4_00,in_stack_ffffffd8,ar6_00,ar7,ain0);
        if (0 < ain0) {
          FUN_8c25a122(ain0,1,ar6_00,ar7);
        }
        iVar1 = 1;
        *ar5 = ar4_00;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25a838\n.set _FUN_8c25a838, _FUN_8c25a838_def\n");
