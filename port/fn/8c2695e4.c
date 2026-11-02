#include "../decls.h"
undefined4 FUN_8c2695e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *a5;
  char *pcVar2;
  int iVar3;
  char *a4;
  char *pcVar4;
  undefined1 auStack_18 [8];
  
  FUN_8c26a100(auStack_18,ar5,ar6,ar7);
  iVar3 = (int)0x90;
  pcVar2 = 0x8c4bd580 + 0x480;
  a5 = 0x8c4bd580;
  a4 = 0x8c4bd580;
  pcVar4 = 0x8c4bd580;
  do {
    if (*pcVar4 == '\x01') {
      FUN_8c2694a4(a4,a5,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar3;
    a4 = a4 + iVar3;
  } while (pcVar4 < pcVar2);
  uVar1 = FUN_8c26a118(auStack_18,a5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c2695e4\n.set _FUN_8c2695e4, _FUN_8c2695e4_def\n");
