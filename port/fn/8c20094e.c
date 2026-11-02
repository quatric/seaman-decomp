#include "../decls.h"
uint FUN_8c20094e_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  byte *a4;
  uint uVar2;
  int in_r3;
  undefined4 unaff_r12;
  int unaff_r14;
  int in_MACL;
  
  piVar1 = 0x8c4783dc;
  while( true ) {
    if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= unaff_r14) {
      return ar5 & 0xffff;
    }
    a4 = (byte *)FUN_8c200a84(unaff_r12,unaff_r14,ar6,ar7);
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
       (uVar2 = (**(code **)(*piVar1 + 0xc))(a4,2,ar6,ar7), (ar5 & 0xffff) == (uVar2 & 0xffff)))
    break;
    unaff_r14 = unaff_r14 + 1;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c20094e\n.set _FUN_8c20094e, _FUN_8c20094e_def\n");
