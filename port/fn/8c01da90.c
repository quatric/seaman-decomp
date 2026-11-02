#include "../decls.h"
undefined4 FUN_8c01da90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffff38;
  int *piStack_98;
  undefined1 auStack_94 [132];
  
  if (_DAT_8c2791b8 == 4) {
    strcpy(auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7,in_stack_ffffff38);
    FUN_8c01437c(auStack_94,&DAT_8c12fba9,ar6,ar7);
    iVar1 = FUN_8c02126c(0x8c3eb334,auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                         &piStack_98);
    if (iVar1 == 0) {
      *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 2;
    }
    else {
      iVar1 = FUN_8c01dc80(ar4,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,
                           *(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                           (int)piStack_98 + *piStack_98 + 0x20,
                           (int)piStack_98 + piStack_98[2] + 0x20,
                           (int)piStack_98 + piStack_98[1] + 0x20);
      if (iVar1 == 1) {
        *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
      }
      else {
        FUN_8c021338(0x8c3eb334,auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,10);
        *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
  }
  return 0x5638;
}

__asm__(".globl _FUN_8c01da90\n.set _FUN_8c01da90, _FUN_8c01da90_def\n");
