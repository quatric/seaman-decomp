#include "../decls.h"
undefined4 s_JUNGLE_0309ca_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_2b [39];
  
  puVar5 = auStack_2b;
  puVar3 = &DAT_8c1329e0;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13(DAT_8c132a02,CONCAT12(DAT_8c132a01,CONCAT11(DAT_8c132a00,(char)ar5)));
  if (((*(int *)(ar4 + 0x2e8) == -1) && (*(int *)(ar4 + 0x770) == 0)) &&
     (*(int *)(ar4 + 0x778) == 0)) {
    *(undefined4 *)(ar4 + 0x60) = 0;
    if ((char)ar5 == '\x01') {
      strcpy(ar4,s_JUNGLE_8c132a24,ar6,ar7,uVar1);
    }
    else {
      strcpy(auStack_2b,ar4 + 0x2c8,ar6,ar7,uVar1);
      uVar1 = CONCAT22((short)((uint)uVar1 >> 0x10),
                       CONCAT11((char)((uint)uVar1 >> 8) + *(char *)(ar4 + 0x728),(char)uVar1));
      FUN_8c01437c(auStack_2b,&stack0xffffffd1,ar6,ar7);
      strcpy(ar4,auStack_2b,ar6,ar7,uVar1);
    }
    strcpy(ar4 + 0x20,&DAT_8c132a2b,ar6,ar7,uVar1);
    strcpy(ar4 + 0x40,s_start_8c132a30,ar6,ar7,uVar1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _s_JUNGLE_0309ca\n.set _s_JUNGLE_0309ca, _s_JUNGLE_0309ca_def\n");
