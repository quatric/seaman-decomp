#include "../decls.h"
undefined4 s_SPEECH_0fbe00_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  char *ar6_00;
  int ar5_01;
  undefined4 in_stack_ffffffe4;
  
  ar5_01 = ar4[0x22];
  iVar1 = FUN_8c0faf30(ar5_01 + 0x2c,ar4 + 0x24,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(ar4 + 0x24) != '\0') {
      ar6 = s_SPEECH_8c141dd0;
      FUN_8c01d658(ar4[2],ar4 + 0x24,s_SPEECH_8c141dd0,ar7);
    }
    strcpy(ar4 + 0x24,ar5_01 + 0x2c,ar6,ar7,in_stack_ffffffe4);
  }
  ar6_00 = s_SPEECH_8c141dd0;
  ar5_00 = ar4 + 0x24;
  iVar1 = asr_register_strings(ar4[2],ar5_00,s_SPEECH_8c141dd0,ar7);
  if (iVar1 == 0) {
    FUN_8c01d868(ar4[2],ar5_00,ar6_00,ar7);
    uVar2 = 2;
    *ar4 = 2;
  }
  else {
    iVar1 = FUN_8c01d71c(ar4[2],ar5_00,ar6_00,ar7);
    if (iVar1 == 0) {
      uVar2 = 2;
      *ar4 = 2;
    }
    else {
      ar4[0x2e] = 0x96;
      ar4[0x33] = 0;
      iVar1 = FUN_8c0fc4fc(ar4,ar5_01,ar6_00,ar7);
      if ((iVar1 == 1) || (*(int *)(ar5_01 + 0x28) == 4)) {
        ar4[0x2e] = 300;
        ar4[0x33] = 1;
      }
      else if (*(int *)(ar5_01 + 0x28) == 1) {
        ar4[0x2e] = 0x96;
      }
      else if (*(int *)(ar5_01 + 0x28) == 2) {
        ar4[0x2e] = 0x5a;
      }
      uVar2 = 8;
      *ar4 = 8;
    }
  }
  return uVar2;
}

__asm__(".globl _s_SPEECH_0fbe00\n.set _s_SPEECH_0fbe00, _s_SPEECH_0fbe00_def\n");
