#include "../decls.h"
undefined4 FUN_8c101510_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined4 ar6_00;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  
  aiStack_24[0] = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  bVar5 = *(char *)(0x598 + ar4) + (char)ar5 * -8;
  do {
    if (bVar5 == *(byte *)(0x598 + ar4)) {
      return 0;
    }
    cVar1 = *(char *)(0x190 + ar4 + (uint)bVar5 * 4);
    cVar2 = *(char *)(0x191 + ar4 + (uint)bVar5 * 4);
    cVar3 = *(char *)(0x190 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    cVar4 = *(char *)(0x191 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    if ((cVar1 < cVar3) && (cVar4 < cVar2)) {
      ar6_00 = 0;
LAB_8c1015f0:
      FUN_8c1013f4(ar4,aiStack_24,ar6_00,ar7);
      if (aiStack_24[0] == 4) {
        iStack_28 = iStack_28 + 1;
        aiStack_24[0] = 0;
        if (1 < iStack_28) {
          return 1;
        }
      }
      FUN_8c101480(ar4,&iStack_2c,ar6_00,ar7);
      if (iStack_2c == 4) {
        iStack_30 = iStack_30 + 1;
        iStack_2c = 0;
        if (1 < iStack_30) {
          return 1;
        }
      }
    }
    else {
      if ((cVar1 < cVar3) && (cVar2 < cVar4)) {
        ar6_00 = 1;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar2 < cVar4)) {
        ar6_00 = 2;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar4 < cVar2)) {
        ar6_00 = 3;
        goto LAB_8c1015f0;
      }
    }
    bVar5 = bVar5 + (char)ar5;
  } while( true );
}

__asm__(".globl _FUN_8c101510\n.set _FUN_8c101510, _FUN_8c101510_def\n");
