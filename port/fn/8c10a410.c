#include "../decls.h"
undefined4 FUN_8c10a410_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a6;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 extraout_fr3;
  undefined4 uVar4;
  undefined8 in_xd2;
  char cVar5;
  
  iVar1 = *(int *)(ar4 + 0x7c);
  *ar5 = *(undefined4 *)(ar4 + 0x4c);
  *(undefined1 *)(ar5 + 1) = *(undefined1 *)(ar4 + 0x50);
  *(undefined1 *)(ar5 + 2) = *(undefined1 *)(ar4 + 0x51);
  puVar2 = ar5 + 3;
  a6 = iVar1 * 4;
  memmove(puVar2,*(undefined4 *)(ar4 + 0x54),a6,ar7);
  puVar2 = puVar2 + iVar1;
  memmove(puVar2,*(undefined4 *)(ar4 + 0x58),a6,ar7);
  cVar5 = '\0';
  memmove(puVar2 + iVar1,*(undefined4 *)(ar4 + 0x5c),a6,ar7);
  if (cVar5 == '\0') {
    uVar4 = *(undefined4 *)(ar4 + 0x60);
  }
  else {
    in_xd2 = *(undefined8 *)(ar4 + 0x60);
    uVar4 = extraout_fr3;
  }
  puVar3 = (undefined8 *)(puVar2 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)puVar3 = uVar4;
    *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)(ar4 + 100);
  }
  else {
    *puVar3 = in_xd2;
    *(undefined8 *)((int)puVar3 + 4) = *(undefined8 *)(ar4 + 100);
  }
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(ar4 + 0x68);
  if (cVar5 == '\0') {
    *(undefined4 *)((int)puVar3 + 0xc) = *(undefined4 *)(ar4 + 0x6c);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(ar4 + 0x70);
  }
  else {
    *(undefined8 *)((int)puVar3 + 0xc) = *(undefined8 *)(ar4 + 0x6c);
    puVar3[2] = *(undefined8 *)(ar4 + 0x70);
  }
  *(undefined4 *)((int)puVar3 + 0x14) = *(undefined4 *)(ar4 + 0x74);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(ar4 + 0x78);
  return 0x78;
}

__asm__(".globl _FUN_8c10a410\n.set _FUN_8c10a410, _FUN_8c10a410_def\n");
