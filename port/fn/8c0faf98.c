#include "../decls.h"
undefined4 s_SPEECH_0faf9e_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_ffffffb8;
  undefined1 auStack_30 [36];
  
  if (*(int *)(ar4 + 0x38) == 0) {
    return 0;
  }
  if (*ar5 == '\0') {
    strcpy(auStack_30,*(undefined4 *)(ar4 + 0x38),ar6,ar7,in_stack_ffffffb8);
    iVar2 = 0;
  }
  else {
    strcpy(auStack_30,ar5,ar6,ar7,in_stack_ffffffb8);
    iVar2 = 0;
    while ((iVar2 < *(int *)(ar4 + 0x34) &&
           (iVar1 = FUN_8c0faf30(iVar2 * 0x28 + *(int *)(ar4 + 0x38),auStack_30,ar6,ar7), iVar1 != 0
           ))) {
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(ar4 + 0x34) <= iVar2) {
      return 0;
    }
  }
  if ((*(char *)(ar4 + 0x5c) != '\0') &&
     ((*(int *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20) != *(int *)(ar4 + 0x7c) ||
      (iVar1 = FUN_8c0faf30(auStack_30,ar4 + 0x5c,ar6,ar7), iVar1 != 0)))) {
    ar7 = 1;
    ar6 = s_SPEECH_8c141dd0;
    FUN_8c021338(0x8c3eb334,ar4 + 0x3c,s_SPEECH_8c141dd0,1);
    *(undefined1 *)(ar4 + 0x5c) = 0;
  }
  strcpy(ar4 + 0x5c,auStack_30,ar6,ar7,in_stack_ffffffb8);
  *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x20);
  *(undefined4 *)(ar4 + 0x80) = *(undefined4 *)(iVar2 * 0x28 + *(int *)(ar4 + 0x38) + 0x24);
  return 1;
}

__asm__(".globl _s_SPEECH_0faf9e\n.set _s_SPEECH_0faf9e, _s_SPEECH_0faf9e_def\n");
