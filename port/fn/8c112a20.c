#include "../decls.h"
undefined4 FUN_8c112a20_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float extraout_fr0;
  
  FUN_8c120550(ar4,0x10,ar6,ar7);
  *(uint *)(ar4 + 0x138) = ar5;
  *(uint *)(ar4 + 0x140) = ar5;
  uVar1 = (int)extraout_fr0 & 0xffff;
  if (*(char *)(ar4 + 0xf9) == '\0') {
    if (uVar1 < ar5) {
      uVar1 = ar5;
    }
    *(uint *)(ar4 + 0x13c) = uVar1;
  }
  else {
    *(undefined4 *)(ar4 + 0x13c) = 1;
  }
  if ((ar5 < 2) && (*(char *)(ar4 + 0xf8) == '\0')) {
    if (*(code **)(ar4 + 0x130) == FUN_8c117bac) {
      return 0;
    }
    *(code **)(ar4 + 0x130) = FUN_8c117bac;
    *(undefined4 *)(ar4 + 0x134) = *(undefined4 *)(ar4 + 0x130);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(ar4 + 0xb0) != 0) {
      return 0;
    }
    uVar1 = FUN_8c115732(ar4,1,ar6,ar7);
  }
  else {
    if (*(code **)(ar4 + 0x130) == FUN_8c11617a) {
      return 0;
    }
    *(code **)(ar4 + 0x130) = FUN_8c11617a;
    *(undefined4 *)(ar4 + 0x134) = *(undefined4 *)(ar4 + 0x130);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(ar4 + 0xa8) != 0) {
      return 0;
    }
    uVar1 = FUN_8c1155a0(ar4,1,ar6,ar7);
  }
  if ((uVar1 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a20\n.set _FUN_8c112a20, _FUN_8c112a20_def\n");
