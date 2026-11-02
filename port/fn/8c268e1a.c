#include "../decls.h"
int FUN_8c268e1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  int aiStack_24 [3];
  
  if (*(int *)(ar4 + 0x5c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    aiStack_24[1] = 1;
    aiStack_24[0] = 1;
    for (a5 = 0; a5 < (int)(uint)*(byte *)(ar4 + 3); a5 = a5 + 1) {
      iVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x50))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
      if (iVar2 != 1) {
        aiStack_24[a5] = 0;
      }
    }
    if ((aiStack_24[0] == 0) || (aiStack_24[1] == 0)) {
      iVar1 = 0;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x5c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c268e1a\n.set _FUN_8c268e1a, _FUN_8c268e1a_def\n");
