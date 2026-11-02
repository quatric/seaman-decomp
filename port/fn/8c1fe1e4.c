#include "../decls.h"
undefined4 FUN_8c1fe1e4_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int *piVar1;
  uint uVar2;
  int a6;
  int a7;
  int iVar3;
  
  piVar1 = 0x8c4783dc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  a6 = ar6;
  a7 = ar7;
  while( true ) {
    if (ar7 < ar6) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar3 + 0x24),ar7 << 1,a6,a7);
    if ((uVar2 & 0xffff) == (uint)(ushort)ar5) break;
    ar7 = ar7 + -1;
  }
  return ar7;
}

__asm__(".globl _FUN_8c1fe1e4\n.set _FUN_8c1fe1e4, _FUN_8c1fe1e4_def\n");
