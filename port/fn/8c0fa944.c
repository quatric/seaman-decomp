#include "../decls.h"
undefined4 FUN_8c0fa944_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*ar4 == 1) {
    ar4[4] = ar5;
    uVar1 = ar6;
    iVar2 = s_SPEECH_0fae26(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(ar4[4] + 4) = ar6;
      *(undefined4 *)(ar4[4] + 8) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x3c) + 4) = 0;
      *(undefined1 *)(*(int *)(ar4[4] + 0x3c) + 0x28) = 0;
      *(undefined1 *)(*(int *)(ar4[4] + 0x3c) + 0x2c) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x70) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x74) = 0;
      *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0x78) = 0;
      *(undefined4 *)(0x880d4 + (int)ar4) = 0;
      *(undefined4 *)(0x880d8 + (int)ar4) = 0;
      FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,uVar1,ar7);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fa944\n.set _FUN_8c0fa944, _FUN_8c0fa944_def\n");
