#include "../decls.h"
undefined4
FUN_8c201a1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *a7;
  
  puVar1 = (&memset);
  a7 = 0x8c47e6f0 + 0x130;
  puVar2 = 0x8c47e6f0;
  puVar3 = 0x8c47e6f0;
  while( true ) {
    if (a7 <= puVar2) {
      return 0;
    }
    if (puVar2[2] == '\0') break;
    puVar2 = puVar2 + 0x4c;
    puVar3 = puVar3 + 0x4c;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 4) = s0;
  *(undefined4 *)(puVar3 + 8) = s4;
  *(undefined4 *)(puVar3 + 0xc) = s8;
  *(undefined4 *)(puVar3 + 0x10) = s12;
  if (*(int *)(puVar3 + 8) == 0) {
    *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10) >> 1;
  }
  else {
    *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10);
  }
  *(undefined4 *)(puVar3 + 0x18) = s16;
  *(undefined4 *)(puVar3 + 0x48) = s20;
  (*(code *)puVar1)(*(undefined4 *)(puVar3 + 0x48),0,
                    *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10),a7);
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 0x20) = 0;
  *(undefined4 *)(puVar3 + 0x24) = ar4;
  *(undefined4 *)(puVar3 + 0x28) = 0;
  *(undefined4 *)(puVar3 + 0x2c) = 0;
  *(undefined4 *)(puVar3 + 0x30) = 0;
  *(undefined4 *)(puVar3 + 0x34) = 1;
  *(undefined4 *)(puVar3 + 0x38) = 0;
  *(undefined4 *)(puVar3 + 0x3c) = 0;
  *(undefined4 *)(puVar3 + 0x40) = 0;
  *(undefined4 *)(puVar3 + 0x44) = 0;
  puVar3[2] = 1;
  return puVar3;
}

__asm__(".globl _FUN_8c201a1a\n.set _FUN_8c201a1a, _FUN_8c201a1a_def\n");
