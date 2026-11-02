#include "../decls.h"
undefined4 FUN_8c115fec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 uVar2;
  int extraout_r3;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint d;
  
  iVar4 = 0;
  if (*(char *)(ar4 + 0x15c) == '\0') {
    if ((10 < *(uint *)(ar4 + 300)) || (*(uint *)(ar4 + 0x158) >> 2 < (uint)*(ushort *)(ar4 + 0x50))
       ) {
      *(undefined1 *)(ar4 + 0x15c) = 1;
    }
  }
  else {
    d = 1;
    iVar3 = 0;
    uVar5 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 + *(int *)(ar4 + 0x170 + iVar3);
      d = d + *(int *)(ar4 + 0x184 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar6 < 5);
    if (uVar5 < 0x2000000) {
      uVar2 = libgcc_divide_helper_01051c(uVar5 * 0x80,d);
    }
    else {
      uVar2 = libgcc_divide_helper_01051c(uVar5,d >> 7);
    }
    *(undefined4 *)(ar4 + 0x168) = uVar2;
    iVar3 = *(int *)(ar4 + 0x158) - (uint)*(ushort *)(ar4 + 0x50);
    iVar6 = iVar3 * *(int *)(ar4 + 0x16c) * *(int *)(ar4 + 0x168);
    if (iVar3 < 1) {
      iVar3 = -0x1fffc000;
      if ((iVar6 < 1) && (iVar3 = iVar6, iVar6 < -0x1fffc000)) {
        iVar3 = -0x1fffc000;
      }
    }
    else {
      iVar3 = 0x1fffc000;
      if ((-1 < iVar6) && (iVar3 = iVar6, 0x1fffc000 < iVar6)) {
        iVar3 = 0x1fffc000;
      }
    }
    uVar1 = *(ushort *)(ar4 + 0x15e);
    iVar3 = (iVar3 >> 0xe) + (uint)uVar1;
    if ((int)(uint)*(ushort *)(ar4 + 0x160) < iVar3) {
      *(undefined2 *)(ar4 + 0x15e) = *(undefined2 *)(ar4 + 0x160);
    }
    else {
      *(short *)(ar4 + 0x15e) = (short)iVar3;
    }
    uVar2 = 3;
    uVar5 = libgcc_divide_helper_010468((uint)uVar1,3);
    if (extraout_r3 < (int)(uVar5 & 0xffff)) {
      uVar2 = libgcc_divide_helper_010468((uint)uVar1,uVar2);
      *(short *)(ar4 + 0x15e) = (short)uVar2;
    }
  }
  uVar2 = 0x15c;
  if (*(char *)(ar4 + 0x15c) != '\0') {
    iVar6 = (uint)*(byte *)(ar4 + 0x198) * 4;
    iVar3 = *(byte *)(ar4 + 0x198) + 1;
    *(uint *)(ar4 + 0x170 + iVar6) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(ar4 + 0x15e) >> 3;
    *(uint *)(iVar6 + ar4 + 0x184) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(ar4 + 0x50) >> 3;
    if (iVar3 == 5) {
      iVar3 = iVar4;
    }
    uVar2 = 0x198;
    *(char *)(ar4 + 0x198) = (char)iVar3;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c115fec\n.set _FUN_8c115fec, _FUN_8c115fec_def\n");
