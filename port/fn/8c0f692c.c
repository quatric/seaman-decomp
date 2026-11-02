#include "../decls.h"
undefined4 FUN_8c0f692c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x5c) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x58) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x54) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + iVar1 * 4 + 0x48) = 0;
  }
  vec3_clear(ar4,ar5,ar6,ar7);
  FUN_8c02a1fc(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c08a9b8(ar4 + 0x1c,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 100) = 0;
  return 100;
}

__asm__(".globl _FUN_8c0f692c\n.set _FUN_8c0f692c, _FUN_8c0f692c_def\n");
