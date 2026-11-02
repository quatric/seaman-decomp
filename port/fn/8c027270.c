#include "../decls.h"
undefined4 FUN_8c027270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  FUN_8c027388(ar4 + 0x174,1,ar6,ar7);
  uVar1 = get_field_138_02737c(ar4 + 0x174,uVar2,ar6,ar7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar2,ar6,ar7);
  ar6_00 = (int)(short)uVar2;
  uVar1 = FUN_8c02775c(ar4,uVar1,ar6_00,ar7);
  uVar1 = FUN_8c0fa388(0x8c35468c,uVar1,ar6_00,ar7);
  FUN_8c027374(ar4 + 0x21c,uVar1,ar6_00,ar7);
  uVar1 = FUN_8c027364(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7);
  FUN_8c02735c(ar4 + 0x21c,uVar1,ar6_00,ar7);
  uVar1 = 1;
  FUN_8c027354(ar4 + 0x2dc,1,ar6_00,ar7);
  uVar1 = FUN_8c027344(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027270\n.set _FUN_8c027270, _FUN_8c027270_def\n");
