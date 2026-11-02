#include "../decls.h"
undefined4 FUN_8c26145e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  if (ar4 != 0) {
    FUN_8c260ca0(ar4,ar5,ar6,ar7,ar4);
    ar5_00 = 0;
    ar6_00 = 0x30;
    uVar1 = memset(ar4,0,0x30,ar7);
    uVar1 = FUN_8c260cc8(ar4,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26145e\n.set _FUN_8c26145e, _FUN_8c26145e_def\n");
