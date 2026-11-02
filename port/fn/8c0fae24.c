#include "../decls.h"
undefined4 s_SPEECH_0fae26_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffffb0;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [36];
  
  ar4[0x2e] = 0;
  strcpy(auStack_28,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7,in_stack_ffffffb0);
  FUN_8c01437c(auStack_28,&DAT_8c141dd9,ar6,ar7);
  strcpy(auStack_48,*(undefined4 *)(ar4[4] + 0x40),ar6,ar7,in_stack_ffffffb0);
  FUN_8c01437c(auStack_48,&DAT_8c141dde,ar6,ar7);
  iVar1 = FUN_8c0faf30(ar4 + 5,auStack_28,ar6,ar7);
  if (iVar1 != 0) {
    if (*(char *)(ar4 + 5) != '\0') {
      FUN_8c021338(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,1);
      ar7 = 1;
      ar6 = s_SPEECH_8c141dd0;
      FUN_8c021338(0x8c3eb334,ar4 + 0xf,s_SPEECH_8c141dd0,1);
    }
    strcpy(ar4 + 5,auStack_28,ar6,ar7,in_stack_ffffffb0);
    strcpy(ar4 + 0xf,auStack_48,ar6,ar7,in_stack_ffffffb0);
    iVar1 = FUN_8c02126c(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,ar4 + 0xe);
    if (iVar1 == 0) {
      *(undefined1 *)(ar4 + 5) = 0;
      return 0;
    }
  }
  *ar4 = 3;
  return 1;
}

__asm__(".globl _s_SPEECH_0fae26\n.set _s_SPEECH_0fae26, _s_SPEECH_0fae26_def\n");
