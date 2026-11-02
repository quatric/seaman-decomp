#include "../decls.h"
undefined4 FUN_8c1b9994_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int ar7_00;
  int in_GBR;
  
  ar7_00 = (int)DAT_8c1b9a52;
  *(undefined2 *)(in_GBR + 0xc) = (undefined2)ain0;
  FUN_8c1b9702(ar4,ar5,ar6,ar7_00);
  uVar1 = FUN_8c1b982c(ar4,ar5,ar6,ar7_00);
  *(char *)(in_GBR + 0xeb) = (char)uVar1;
  *(char *)(in_GBR + 0x93) = (char)uVar1;
  *(short *)(in_GBR + 0x108) = (short)uVar1;
  *(BADSPACEBASE **)(ar5 + 0x38) = register0x0000003c;
  uVar1 = FUN_8c1b9802(ar4,ar5,ar6,ar7_00);
  *(char *)(in_GBR + 0x98) = (char)uVar1;
  uVar1 = FUN_8c1ba442(ar4,ar5,ar6,ar7_00);
  *(short *)(in_GBR + 0x116) = (short)uVar1;
  *(char *)(in_GBR + 0xf) = (char)uVar1;
  FUN_8c1b9834(ar4,ar5,ar6,ar7_00);
  uVar1 = FUN_8c1b95f2(ar4,ar5,ar6,ar7_00);
  uVar1 = FUN_8c1b9994(ar4,ar5,ar6,ar7_00,uVar1);
  *(short *)(in_GBR + 0x12a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9994\n.set _FUN_8c1b9994, _FUN_8c1b9994_def\n");
