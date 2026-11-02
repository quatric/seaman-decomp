#include "../decls.h"
int FUN_8c0d4038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = ar5;
  FUN_8c0d4bdc(ar4,ar5,ar6,ar7);
  piVar1 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar3 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar3;
  FUN_8c01538c(ar4 + 8,ar5,ar6,ar7);
  uVar3 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,uVar4);
  FUN_8c019058(uVar3,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c256210(1,ar5,ar6,ar7);
  uVar4 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  iVar2 = *piVar1;
  *(undefined4 *)(iVar2 + 8) = uVar4;
  return iVar2;
}

__asm__(".globl _FUN_8c0d4038\n.set _FUN_8c0d4038, _FUN_8c0d4038_def\n");
