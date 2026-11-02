#include "../decls.h"
int FUN_8c1fff20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int in_r3;
  int unaff_r11;
  int unaff_r13;
  int iVar4;
  
  uVar2 = 0xfffc;
  piVar1 = 0x8c4783dc;
  iVar4 = *(int *)(*(int *)(unaff_r13 + in_r3 + 0x1c) + 0x30);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < unaff_r11) {
      return 0xffffffff;
    }
    uVar3 = (**(code **)(*piVar1 + 0xc))
                      (*(undefined4 *)(unaff_r13 + in_r3 + 0x24),iVar4 * 2,ar6,ar7);
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar4;
}

__asm__(".globl _FUN_8c1fff20\n.set _FUN_8c1fff20, _FUN_8c1fff20_def\n");
