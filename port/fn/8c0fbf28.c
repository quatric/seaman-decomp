#include "../decls.h"
undefined4 s_SPEECH_0fbf2e_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *ar5_00;
  char *ar5_01;
  undefined *ar5_02;
  char *ar5_03;
  undefined4 in_stack_fffffe94;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [128];
  int aiStack_9c [3];
  char acStack_90 [132];
  
  if (ar4[0x2c] == 1) {
    FUN_8c01d868(ar4[2],ar5,ar6,ar7);
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    if (ar4[0x22035] == 1) {
      ar4[0x2e] = 0;
      ar4[0x22035] = 0;
    }
    if (ar4[0x33] == 1) {
      strcpy(auStack_11c,ar4 + 0x24,ar6,ar7,in_stack_fffffe94);
      FUN_8c01437c(auStack_11c,&DAT_8c141e17,ar6,ar7);
      ar7 = auStack_120;
      ar6 = s_SPEECH_8c141dd0;
      iVar2 = FUN_8c02126c(0x8c3eb334,auStack_11c,s_SPEECH_8c141dd0,ar7);
      if (iVar2 == 1) {
        ar7 = (undefined1 *)0x1;
        ar6 = s_SPEECH_8c141dd0;
        ar5_00 = ar4 + 0x24;
        FUN_8c021338(0x8c3eb334,ar5_00,s_SPEECH_8c141dd0,1);
        if (ar4[0x22035] == 0) {
          FUN_8c01bcf4(ar4[3],ar5_00,ar6,ar7);
        }
        if (ar4[0x22035] == 0) {
          FUN_8c01bd88(ar4[3],ar5_00,ar6,ar7);
        }
        FUN_8c01c964(ar4[3],&DAT_8c140bd0,ar6,ar7);
        ar4[0x33] = 0;
      }
    }
    ar5_03 = (char *)(uint)ar4[0x22];
    acStack_90[0] = '\0';
    aiStack_9c[0] = 0;
    if ((int)ar4[0x2e] < 1) {
      strcpy(acStack_90,&DAT_8c141e1c,ar6,ar7,in_stack_fffffe94);
      aiStack_9c[0] = 1;
    }
    else {
      FUN_8c01d684(ar4[2],aiStack_9c,ar6,ar7);
      if (aiStack_9c[0] != 0) {
        *(int *)(*(int *)(ar4[4] + 0x3c) + 4) = *(int *)(*(int *)(ar4[4] + 0x3c) + 4) + 1;
      }
    }
    if (aiStack_9c[0] == 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = s__NAME_8c141e20;
      iVar2 = FUN_8c0faf30(acStack_90,s__NAME_8c141e20,ar6,ar7);
      if (((iVar2 == 0) && (0 < **(int **)(ar4[4] + 0x3c))) &&
         (*(int *)(*(int *)(ar4[4] + 0x40) + 100) != **(int **)(ar4[4] + 0x3c))) {
        FUN_8c01d868(ar4[2],ar5_01,ar6,ar7);
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
          ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
          iVar3 = FUN_8c0faf30(acStack_90,ar5_01,ar6,ar7);
          if (iVar3 == 0) break;
        }
        if (*(int *)(ar5_03 + 0x6c) <= iVar2) {
          ar5_01 = &DAT_8c141e26;
          strcpy(acStack_90,&DAT_8c141e26,ar6,ar7,in_stack_fffffe94);
          for (iVar2 = 0; iVar2 < *(int *)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
            ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
            iVar3 = FUN_8c0faf30(acStack_90,ar5_01,ar6,ar7);
            if (iVar3 == 0) break;
          }
        }
        if (acStack_90[0] != '-') {
          if (acStack_90[0] == '?') {
            ar5_01 = &DAT_8c1417d0;
            FUN_8c01c978(ar4[3],&DAT_8c1417d0,ar6,ar7);
            FUN_8c0fc3e4(ar4,ar5_01,ar6,ar7);
          }
          else {
            ar5_02 = &DAT_8c1411d0;
            FUN_8c01c978(ar4[3],&DAT_8c1411d0,ar6,ar7);
            FUN_8c0fc3e4(ar4,ar5_02,ar6,ar7);
            ar5_01 = ar5_03;
            iVar3 = FUN_8c0fc4fc(ar4,ar5_03,ar6,ar7);
            if (iVar3 == 1) {
              ar5_01 = ar5_03;
              FUN_8c0fdaac(ar4,ar5_03,ar6,ar7);
            }
          }
        }
        if (iVar2 < *(int *)(ar5_03 + 0x6c)) {
          if (ar5_03[iVar2 * 0x68 + 0xb0] == '\0') {
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7);
          }
          else if (ar5_03[iVar2 * 0x68 + 0x90] == '\0') {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x70;
            FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7);
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7);
          }
          else {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x90;
            FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7);
            FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x90,ar6,ar7);
          }
          ar5_01 = *(char **)(ar5_03 + iVar2 * 0x68 + 0xd4);
          FUN_8c0fdd68(*(undefined4 *)(ar4[4] + 0x40),ar5_01,ar6,ar7);
        }
        FUN_8c01d868(ar4[2],ar5_01,ar6,ar7);
        if (acStack_90[0] == '!') {
          ar6 = s_SPEECH_8c141dd0;
          asr_register_strings(ar4[2],ar4 + 0x24,s_SPEECH_8c141dd0,ar7);
        }
        if (*(int *)(*(int *)(ar4[4] + 0x40) + 0x70) == 0x11) {
          uVar1 = 2;
          *ar4 = 2;
        }
        else {
          uVar1 = s_ERROR_0fb0de(ar4,ar5_03 + iVar2 * 0x68 + 0xb4,ar6,ar7);
        }
      }
    }
  }
  return uVar1;
}

__asm__(".globl _s_SPEECH_0fbf2e\n.set _s_SPEECH_0fbf2e, _s_SPEECH_0fbf2e_def\n");
