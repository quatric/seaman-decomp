#include "../decls.h"
undefined4 FUN_8c207620_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint ar6_00;
  uint ar7_00;
  
  if (((*(undefined4 *)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)0x8c4a9bcc & 0x2c) == 0)) {
    ar6_00 = *(undefined4 *)0x8c4a9e9c >> 0x10;
  }
  else {
    ar6_00 = *(undefined4 *)0x8c4a9e9c >> 0x11;
  }
  ar7_00 = ar4 + *(undefined4 *)0x8c4a9c08 + *(undefined4 *)0x8c4a9c00;
  uVar1 = ar7_00;
  if (((*(undefined4 *)0x8c4a9bcc & 1) != 1) && ((*(undefined4 *)0x8c4a9bcc & 0x20) != 0)) {
    uVar1 = ((int)(ar4 + (uint)(ar4 < 0)) >> 1) + *(undefined4 *)0x8c4a9c08 + *(undefined4 *)0x8c4a9c00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + ar6_00;
  }
  if ((int)ar6_00 < (int)uVar1) {
    uVar1 = ar6_00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar1 = *(undefined4 *)0x8c4a9e90 & 0x3ff0000 | (int)0x3ff & uVar1;
  *(undefined4 *)0x8c4a9e90 = uVar1;
  pvr_20a844((int)0xc8,uVar1,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c207620\n.set _FUN_8c207620, _FUN_8c207620_def\n");
