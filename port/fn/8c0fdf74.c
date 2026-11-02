#include "../decls.h"
int FUN_8c0fdf74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = get_field_4_0dac48(ar4 + 0x170,ar5,ar6,ar7);
  FUN_8c0fdf08(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = list_node_next(uVar2,uVar1,ar6,ar7);
  FUN_8c0fdf10(ar5,uVar1,ar6,ar7,ain0);
  uVar2 = get_field_4_0dac48(ar5,uVar1,ar6,ar7);
  uVar1 = ar5;
  FUN_8c0fdf10(uVar2,ar5,ar6,ar7,ain0);
  uVar1 = list_node_next(ar5,uVar1,ar6,ar7);
  FUN_8c0fdf08(uVar1,ar5,ar6,ar7,ain0);
  *(int *)(ar4 + 0x300) = *(int *)(ar4 + 0x300) + 1;
  return ar4;
}

__asm__(".globl _FUN_8c0fdf74\n.set _FUN_8c0fdf74, _FUN_8c0fdf74_def\n");
