#include "../decls.h"
undefined * s_SPEECH_0faa98_def(int *ar4,undefined4 ar5,char *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  char *ar6_00;
  int *ar7_00;
  int in_stack_ffffffb4;
  char acStack_2c [36];
  
  if (0 < ar4[0x2e]) {
    ar4[0x2e] = ar4[0x2e] + -1;
  }
  if (0 < ar4[0x2f]) {
    ar4[0x2f] = ar4[0x2f] + -1;
  }
  if ((ar4[0x22035] == 0) && (0 < ar4[0x22036])) {
    ar4[0x22036] = ar4[0x22036] + -1;
  }
  iVar2 = *ar4;
  if (8 < iVar2) {
    return (undefined *)8;
  }
  if (iVar2 < 1) {
    return (undefined *)1;
  }
  puVar1 = (&switchdata_8c0fab12_8c0fab28)[iVar2 + -1];
                    
  switch(iVar2) {
  case 1:
    break;
  case 2:
    *ar4 = 1;
    ar4[0x2c] = 0;
    FUN_8c0fda5c(ar4,ar5,ar6,ar7);
    puVar1 = (undefined *)0x0;
    if (ar4[4] != 0) {
      *(undefined4 *)(ar4[4] + 4) = 0;
      puVar1 = (undefined *)FUN_8c0fb7d0(ar4,ar5,ar6,ar7);
    }
    break;
  case 3:
    if (ar4[0x2c] == 1) {
      *ar4 = 2;
      return (undefined *)2;
    }
    ar7 = ar4 + 0xe;
    ar6 = s_SPEECH_8c141dd0;
    iVar2 = FUN_8c02126c(0x8c3eb334,ar4 + 5,s_SPEECH_8c141dd0,ar7);
    if (iVar2 == 2) {
      return (undefined *)2;
    }
    if (iVar2 == 0) {
      *(undefined1 *)(ar4 + 5) = 0;
      *ar4 = 2;
      return (undefined *)2;
    }
    ar4[0xd] = 0;
    while (in_stack_ffffffb4 = ar4[0xd], *(char *)(ar4[0xe] + in_stack_ffffffb4 * 0x28) != '\0') {
      ar4[0xd] = ar4[0xd] + 1;
    }
    *ar4 = 4;
  case 4:
    if (ar4[0x2c] == 1) {
      puVar1 = (undefined *)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = s_SPEECH_0faf9e(ar4,*(int *)(ar4[4] + 0x40) + 0x20,ar6,ar7);
      if (iVar2 == 0) {
        puVar1 = (undefined *)0x2;
        *ar4 = 2;
      }
      else {
        *ar4 = 5;
switchD_8c0fab12_caseD_5:
        if (ar4[0x2c] == 1) {
          puVar1 = (undefined *)0x2;
          *ar4 = 2;
        }
        else {
          ar7_00 = ar4 + 0x21;
          ar6_00 = s_SPEECH_8c141dd0;
          iVar2 = FUN_8c02126c(0x8c3eb334,ar4 + 0xf,s_SPEECH_8c141dd0,ar7_00);
          if (iVar2 == 2) {
            puVar1 = (undefined *)0x2;
          }
          else if (iVar2 == 0) {
            *(undefined1 *)(ar4 + 0x17) = 0;
            puVar1 = (undefined *)0x2;
            *ar4 = 2;
          }
          else {
            *ar4 = 6;
            strcpy(acStack_2c,*(int *)(ar4[4] + 0x40) + 0x40,ar6_00,ar7_00,in_stack_ffffffb4);
            if (acStack_2c[0] == '\0') {
              strcpy(acStack_2c,&DAT_8c141dd7,ar6_00,ar7_00,in_stack_ffffffb4);
            }
            puVar1 = (undefined *)s_ERROR_0fb0de(ar4,acStack_2c,ar6_00,ar7_00);
          }
        }
      }
    }
    break;
  case 5:
    goto switchD_8c0fab12_caseD_5;
  case 6:
    if (ar4[0x2c] == 1) {
      puVar1 = (undefined *)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = *(int *)(ar4[0x22] + 0x20);
      if ((iVar2 < 9) && (0 < iVar2)) {
                    
        switch(iVar2) {
        case 1:
          puVar1 = (undefined *)s_ERR_wrap_0fb1d4(ar4,ar5,ar6,ar7);
          break;
        case 2:
          puVar1 = (undefined *)FUN_8c0fb20c(ar4,ar5,ar6,ar7);
          break;
        case 3:
          FUN_8c0fda5c(ar4,ar5,ar6,ar7);
          puVar1 = (undefined *)FUN_8c0fb268(ar4,ar5,ar6,ar7);
          break;
        case 4:
          puVar1 = (undefined *)s_SPEECH_0fbe00(ar4,ar5,ar6,ar7);
          break;
        case 5:
          puVar1 = (undefined *)FUN_8c0fc5ac(ar4,ar5,ar6,ar7);
          break;
        case 6:
          puVar1 = (undefined *)FUN_8c0fc608(ar4,ar5,ar6,ar7);
          break;
        case 7:
          puVar1 = (undefined *)FUN_8c0fc69c(ar4,ar5,ar6,ar7);
          break;
        case 8:
          puVar1 = (undefined *)FUN_8c0fc7c4(ar4,ar5,ar6,ar7);
        }
      }
      else {
        puVar1 = (undefined *)0x2;
        *ar4 = 2;
      }
    }
    break;
  case 7:
    puVar1 = (undefined *)FUN_8c0fb494(ar4,ar5,ar6,ar7);
    break;
  case 8:
    puVar1 = (undefined *)s_SPEECH_0fbf2e(ar4,ar5,ar6,ar7);
  }
  return puVar1;
}

__asm__(".globl _s_SPEECH_0faa98\n.set _s_SPEECH_0faa98, _s_SPEECH_0faa98_def\n");
