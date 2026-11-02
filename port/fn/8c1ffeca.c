#include "../decls.h"
undefined4 FUN_8c1ffeca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int in_r3;
  int iVar3;
  int in_MACL;
  
  piVar1 = 0x8c4783dc;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(in_MACL + in_r3 + 0x24),iVar3 << 1,ar6,ar7)
    ;
    if (((uVar2 & 0xffff) != 0xfffc) && ((uVar2 & 0xffff) != 0xffff)) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c1ffeca\n.set _FUN_8c1ffeca, _FUN_8c1ffeca_def\n");
