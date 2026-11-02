#include "../decls.h"
undefined4 FUN_8c06b054_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float extraout_fr1;
  float extraout_fr1_00;
  float extraout_fr1_01;
  float fVar2;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 1;
  if (ar4 < 7) {
    if (*(int *)(ar4 * 8 + -0x73d7f644) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_8c06b410(*(undefined4 *)(ar4 * 8 + -0x73d7f644),ar5,ar6,ar7);
      fVar2 = extraout_fr1;
      if (cVar4 == '\0') {
        fVar2 = extraout_fr0;
      }
      if (cVar3 == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (ar4 < 0xd) {
    if (*(int *)((ar4 + -7) * 8 + -0x73d7f600) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_8c06b410(*(undefined4 *)((ar4 + -7) * 8 + -0x73d7f600),ar5,ar6,ar7);
      fVar2 = extraout_fr1_00;
      if (cVar4 == '\0') {
        fVar2 = extraout_fr0_00;
      }
      if (cVar3 == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (*(int *)((ar4 + -1) * 8 + -0x73d7f5c4) == 0) {
    uVar1 = 1;
  }
  else {
    FUN_8c06b410(*(undefined4 *)((ar4 + -1) * 8 + -0x73d7f5c4),ar5,ar6,ar7);
    fVar2 = extraout_fr1_01;
    if (cVar4 == '\0') {
      fVar2 = extraout_fr0_01;
    }
    if (cVar3 == '\0' && 0.0 < fVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c06b054\n.set _FUN_8c06b054, _FUN_8c06b054_def\n");
