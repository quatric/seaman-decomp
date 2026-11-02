#include "../decls.h"
undefined4 FUN_8c02d2e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 ain0;
  
  ar5_00 = ar5;
  FUN_8c02d944(ar4 + 0x90,ar5,ar6,ar7,in_stack_ffffffe4);
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    ar5_00 = ar5;
    FUN_8c02e3cc(iVar2 * 0x18 + ar4,ar5,ar6,ar7);
  }
  if ((6 < ar5) && ((*(int *)(ar4 + 0x13c) == 2 || (*(int *)(ar4 + 0x13c) == 6)))) {
    ar5_00 = 10000;
    FUN_8c02ce00(ar4 + 0x18,10000,ar6,ar7,in_stack_ffffffe4);
  }
  uVar1 = FUN_8c02d3e0(ar4 + 0x90,ar5_00,ar6,ar7);
  ain0 = CONCAT31((int3)((uint)in_stack_ffffffe4 >> 8),(char)uVar1);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_8c02c518(ar4,ar5_00,ar6,ar7);
    FUN_8c02c328(ar4 + 0xa8,uVar1,ar6,ar7);
    uVar1 = FUN_8c02de00(ar4 + 0xa8,ar5,*(undefined4 *)(ar4 + 0x13c),ar7);
  }
  else {
    FUN_8c02ce00(ar4 + 0x60,10000,ar6,ar7,ain0);
    uVar1 = FUN_8c02c330(ar4 + 0x60,1,ar6,ar7,ain0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02d2e0\n.set _FUN_8c02d2e0, _FUN_8c02d2e0_def\n");
