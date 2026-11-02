#include "../decls.h"
uint FUN_8c1fac58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  
  piVar2 = 0x8c475ed0;
  piVar1 = 0x8c475ed4;
  uVar3 = *(undefined4 *)0x8c475ed8;
  if (uVar3 == 0) {
    do {
    } while ((*(ushort *)(*(undefined4 *)0x8c475ed4 + 0x10) & 0x20) != 0x20);
    *(undefined1 *)(*(undefined4 *)0x8c475ed4 + 0xc) = (undefined1)ar4;
    *(ushort *)(*piVar1 + 0x10) = *(ushort *)(*piVar1 + 0x10) & (ushort)0xffdf;
    *(ushort *)(*piVar1 + 0x10) = *(ushort *)(*piVar1 + 0x10) & (ushort)0xffbf;
    do {
    } while ((*(ushort *)(*piVar1 + 0x10) & 0x40) != 0x40);
    uVar3 = 0x40;
  }
  else if (uVar3 == 1) {
    do {
    } while ((*(byte *)(*(undefined4 *)0x8c475ed0 + 0x10) & 0x80) != 0x80);
    *(undefined1 *)(*(undefined4 *)0x8c475ed0 + 0xc) = (undefined1)ar4;
    pbVar4 = (byte *)(*piVar2 + 0x10);
    *pbVar4 = *pbVar4 & 0x7f;
    do {
      uVar3 = *(byte *)(*piVar2 + 0x10) & 4;
    } while (uVar3 != 4);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1fac58\n.set _FUN_8c1fac58, _FUN_8c1fac58_def\n");
