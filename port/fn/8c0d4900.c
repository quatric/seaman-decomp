#include "../decls.h"
undefined4 FUN_8c0d4900_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  FUN_8c01538c(ar4 + 8,ar5,ar6,ar7);
  FUN_8c015af8(ar4 + 0x1c,ar5,ar6,ar7);
  uVar2 = *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(*(short *)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = uVar2;
  FUN_8c0d49cc(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c0d4a90(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0d4900\n.set _FUN_8c0d4900, _FUN_8c0d4900_def\n");
