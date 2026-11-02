#include "../decls.h"
undefined4 FUN_8c10a4bc_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a6;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  
  iVar1 = *(int *)(ar4 + 0x7c);
  *(undefined4 *)(ar4 + 0x4c) = *ar5;
  *(undefined1 *)(ar4 + 0x50) = *(undefined1 *)(ar5 + 1);
  puVar4 = ar5 + 3;
  *(undefined1 *)(ar4 + 0x51) = *(undefined1 *)(ar5 + 2);
  a6 = iVar1 * 4;
  memmove(*(undefined4 *)(ar4 + 0x54),puVar4,a6,ar7);
  puVar4 = puVar4 + iVar1;
  memmove(*(undefined4 *)(ar4 + 0x58),puVar4,a6,ar7);
  cVar5 = '\0';
  memmove(*(undefined4 *)(ar4 + 0x5c),puVar4 + iVar1,a6,ar7);
  puVar2 = (undefined8 *)(puVar4 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)puVar2;
    puVar3 = puVar2 + 1;
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)((int)puVar2 + 4);
  }
  else {
    *(undefined8 *)(ar4 + 0x60) = *puVar2;
    puVar3 = puVar2 + 2;
    *(undefined8 *)(ar4 + 100) = puVar2[1];
  }
  *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)puVar3;
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)((int)puVar3 + 4);
    puVar4 = (undefined4 *)((int)puVar3 + 0xc);
    *(undefined4 *)(ar4 + 0x70) = *(undefined4 *)(puVar3 + 1);
  }
  else {
    *(undefined8 *)(ar4 + 0x6c) = *(undefined8 *)((int)puVar3 + 4);
    puVar4 = (undefined4 *)((int)puVar3 + 0x14);
    *(undefined8 *)(ar4 + 0x70) = *(undefined8 *)((int)puVar3 + 0xc);
  }
  *(undefined4 *)(ar4 + 0x74) = *puVar4;
  *(undefined4 *)(ar4 + 0x78) = puVar4[1];
  return 0x78;
}

__asm__(".globl _FUN_8c10a4bc\n.set _FUN_8c10a4bc, _FUN_8c10a4bc_def\n");
