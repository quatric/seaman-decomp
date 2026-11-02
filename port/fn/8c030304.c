#include "../decls.h"
undefined4 s_STATUS_FORMAT_030306_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_28 [36];
  
  puVar5 = auStack_28;
  puVar3 = &DAT_8c13292c;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13(DAT_8c13294f,CONCAT12(DAT_8c13294e,CONCAT11(DAT_8c13294d,DAT_8c13294c)));
  strcpy(auStack_28,ar4 + 0x2c8,ar6,ar7,uVar1);
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar1 + *(char *)(ar4 + 0x728));
  FUN_8c01437c(auStack_28,&stack0xffffffd4,ar6,ar7);
  strcpy(ar4,auStack_28,ar6,ar7,uVar1);
  *(undefined4 *)(ar4 + 0x2ec) = 4;
  strcpy(ar4 + 0x20,s_STATUS_FORMAT_8c132a14,ar6,ar7,uVar1);
  uVar1 = strcpy(ar4 + 0x40,&DAT_8c132a22,ar6,ar7,uVar1);
  return uVar1;
}

__asm__(".globl _s_STATUS_FORMAT_030306\n.set _s_STATUS_FORMAT_030306, _s_STATUS_FORMAT_030306_def\n");
