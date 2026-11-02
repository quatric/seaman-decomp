#include "../decls.h"
int FUN_8c1148c4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0x148 + (int)ar4),ar6,ar7);
  (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xc0 + (int)ar4),ar6,ar7);
  if (*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c11617a)) {
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xa8 + (int)ar4),ar6,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xac + (int)ar4),ar6,ar7);
                    
                    
    uVar1 = (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xa0 + (int)ar4));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c1148c4\n.set _FUN_8c1148c4, _FUN_8c1148c4_def\n");
