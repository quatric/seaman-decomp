#include "../decls.h"
undefined4 FUN_8c1f518e_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uVar1 = *ar5;
  uStack_4 = (undefined1)uVar1;
  uStack_3 = (undefined1)((uint)uVar1 >> 8);
  uStack_2 = (undefined1)((uint)uVar1 >> 0x10);
  uStack_1 = (undefined1)((uint)uVar1 >> 0x18);
  if (*(int *)(*(undefined4 *)0x8c4727b4 + (int)0x10c4) == 1) {
    *(undefined1 *)(ar4 + 0xb) = uStack_4;
    *(undefined1 *)(ar4 + 10) = uStack_3;
    *(undefined1 *)(ar4 + 9) = uStack_2;
    *(undefined1 *)(ar4 + 8) = uStack_1;
  }
  else {
    *(undefined1 *)(ar4 + 8) = uStack_4;
    *(undefined1 *)(ar4 + 9) = uStack_3;
    *(undefined1 *)(ar4 + 10) = uStack_2;
    *(undefined1 *)(ar4 + 0xb) = uStack_1;
  }
  if (*(byte *)(ar4 + 8) == 0xff) {
    *(undefined4 *)(ar4 + 0x14) = 0xffffffff;
  }
  else if ((short)(ushort)*(byte *)(ar4 + 8) < 0xe0) {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = ar5[1];
  }
  return 0;
}

__asm__(".globl _FUN_8c1f518e\n.set _FUN_8c1f518e, _FUN_8c1f518e_def\n");
