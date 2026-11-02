#include "../decls.h"
undefined4 FUN_8c0d2264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 uVar3;
  
  uVar2 = ar6;
  uVar3 = ar5;
  piVar1 = (int *)get_field_4_0253e4(ar5,ar5,ar6,ar7);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,uVar2,ar7,uVar3);
  FUN_8c019058(ar4_00,ar5,uVar2,ar7);
  uVar3 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(*piVar1 + 0xf8);
  *(undefined4 *)(*piVar1 + 0xf8) =
       *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)(*piVar1 + 0x1e8);
  ar4_01 = *piVar1;
  *(undefined4 *)(ar4_01 + 0x1e8) =
       *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) = uVar3;
  FUN_8c019198(ar4_01,ar5,uVar2,ar7);
  FUN_8c015adc(ar6,ar5,uVar2,ar7);
  uVar3 = *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 0x24) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar3;
  uVar3 = *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x14) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(*piVar1 + 0xf8);
  *(undefined4 *)(*piVar1 + 0xf8) = uVar3;
  uVar3 = *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8);
  *(undefined4 *)((*(short *)(ar4 + 0x24) + 0x28) * 0xc + *piVar1 + 8) =
       *(undefined4 *)(*piVar1 + 0x1e8);
  *(undefined4 *)(*piVar1 + 0x1e8) = uVar3;
  uVar2 = FUN_8c256210(1,ar5,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d2264\n.set _FUN_8c0d2264, _FUN_8c0d2264_def\n");
