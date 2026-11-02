#include "../decls.h"
int FUN_8c01dea4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffff5c;
  undefined1 auStack_88 [132];
  
  strcpy(auStack_88,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7,in_stack_ffffff5c);
  FUN_8c01437c(auStack_88,&DAT_8c12fba9,ar6,ar7);
  ar7_00 = 10;
  ar6_00 = *(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664;
  FUN_8c021338(0x8c3eb334,auStack_88,ar6_00,10);
  *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
  iVar1 = FUN_8c01dfc0(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar4 + 0x5b44,ar6_00,ar7_00);
  if (iVar1 == 0) {
    ar5_00 = ar4 + 0x5b65;
    iVar1 = FUN_8c01dfc0(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      iVar1 = FUN_8c01d984(ar4,ar5_00,ar6_00,ar7_00);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01dea4\n.set _FUN_8c01dea4, _FUN_8c01dea4_def\n");
