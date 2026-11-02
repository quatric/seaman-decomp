#include "../decls.h"
int asr_lib_bind_recognizer_model_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (ar5 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *ar5;
  }
  iVar1 = FUN_8c11e534(*ar4,uVar2);
  if (iVar1 != 0) {
    iVar3 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  if (iVar3 == 0) {
    if (ar5 == (undefined4 *)0x0) {
      ar4[9] = 0;
      ar4[0xb] = 0;
      ar4[10] = 0;
    }
    else {
      iVar1 = ar5[1];
      if (iVar1 == 4) {
        ar4[10] = ar5;
      }
      else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        ar4[9] = ar5;
        ar4[0xb] = 0;
      }
      else {
        iVar3 = 0xd;
      }
    }
  }
  return iVar3;
}

__asm__(".globl _asr_lib_bind_recognizer_model\n.set _asr_lib_bind_recognizer_model, _asr_lib_bind_recognizer_model_def\n");
