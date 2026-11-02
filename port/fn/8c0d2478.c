#include "../decls.h"
undefined4 FUN_8c0d2478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = ar5;
  uVar4 = ar7;
  uVar5 = ar6;
  piVar1 = (int *)get_field_4_0253e4(ar5,ar5,ar6,ar7);
  uVar2 = 0;
  FUN_8c256328(0,uVar3,ar6,uVar4,uVar5);
  FUN_8c019058(uVar2,uVar3,ar6,uVar4);
  uVar4 = 4;
  ar6_00 = ar4 + 0x2c;
  uVar3 = ar7;
  FUN_8c016464(ar7,uVar5,ar6_00,4);
  uVar2 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar2;
  FUN_8c019198(uVar3,uVar5,ar6_00,uVar4);
  uVar3 = 0;
  FUN_8c014a94(ar5,0,ar6_00,uVar4);
  FUN_8c016524(ar7,uVar3,ar6_00,uVar4);
  uVar5 = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar5;
  uVar3 = FUN_8c256210(1,uVar3,ar6_00,uVar4);
  return uVar3;
}

__asm__(".globl _FUN_8c0d2478\n.set _FUN_8c0d2478, _FUN_8c0d2478_def\n");
