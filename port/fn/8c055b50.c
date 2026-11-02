#include "../decls.h"
undefined4 FUN_8c055b50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(ar4 + 0x298) = 0;
  FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x29c) = 0;
  *(undefined4 *)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(ar4 + 0x294) = 0;
  *(undefined4 *)(ar4 + 0x28c) = 0;
  *(undefined4 *)(ar4 + 0x134) = 0;
  *(undefined4 *)(ar4 + 0x284) = 0;
  *(undefined4 *)(ar4 + 0x288) = 0;
  *(undefined4 *)(ar4 + 0x280) = 0;
  *(undefined4 *)(ar4 + 700) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)extraout_fr1;
  }
  FUN_8c030eb8(ar4 + 0x1fc,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x324) == 1) {
    *(undefined4 *)(ar4 + 0x214) = 0;
    *(undefined4 *)(ar4 + 0x2e8) = 1;
  }
  *(undefined4 *)(ar4 + 0x334) = 0;
  return 0x334;
}

__asm__(".globl _FUN_8c055b50\n.set _FUN_8c055b50, _FUN_8c055b50_def\n");
