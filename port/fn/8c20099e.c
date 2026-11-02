#include "../decls.h"
int FUN_8c20099e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  if (ar5 <= **(int **)(iVar2 + 0x1c)) {
                    
                    
    uVar1 = (**(code **)(*(undefined4 *)0x8c4783dc + 0x10))(*(undefined4 *)(iVar2 + 0x24),ar5 << 1);
    return uVar1;
  }
  return ar5;
}

__asm__(".globl _FUN_8c20099e\n.set _FUN_8c20099e, _FUN_8c20099e_def\n");
