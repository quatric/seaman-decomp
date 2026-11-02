#include "../decls.h"
undefined4 FUN_8c1f9194_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_ffffffe4;
  
  uVar2 = 0;
  piVar3 = (int *)(*DAT_8c273a28 + *ar4 * 0x20);
  FUN_8c1f8d48(ar4,&stack0xffffffe4,ar6,ar7);
  if (in_stack_ffffffe4 == 1) {
    uVar2 = 0x90180;
  }
  else {
    FUN_8c1f9e32(ar4[2] & 0x1fffffffU | 0xa0000000,ar4[3] & 0x7fffffe0,ar6,ar7,in_stack_ffffffe4);
    piVar3[5] = 0;
    *piVar3 = ar4[1];
    piVar3[1] = ar4[2];
    piVar3[2] = ar4[3];
    piVar3[3] = ar4[4];
    if (ar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    piVar3[4] = uVar1 | ar4[5];
    piVar3[5] = 1;
    ar4[0xb] = 1;
    DAT_8c273a28[*ar4 + 0x37] = DAT_8c273a28[*ar4 + 0x37] + 1;
    piVar3[6] = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f9194\n.set _FUN_8c1f9194, _FUN_8c1f9194_def\n");
