#include "../decls.h"
int FUN_8c1f67c2_def(int ar4,int ar5,int ar6,uint ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 ar6_00;
  uint ar7_00;
  int *piVar2;
  undefined1 auStack_b0 [156];
  
  ar7_00 = ar7;
  memset(auStack_b0,0,0x98,ar7);
  if (*(int *)(ar4 + 0x20c) == *(int *)(ar4 + 0x208)) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    for (piVar2 = (int *)(ar4 + 0x210); piVar2[3] != 0; piVar2 = piVar2 + 0x49) {
      iVar1 = iVar1 + 1;
    }
    ar6_00 = 0x100;
    piVar2[2] = 0;
    piVar2[3] = 1;
    ar5_00 = ar4 + 0x104;
    piVar2[5] = *(int *)(ar4 + 0x204);
    *piVar2 = ar6;
    piVar2[1] = ar7 >> 2;
    piVar2[0x46] = 0;
    piVar2[4] = 0;
    piVar2[0x47] = 0;
    memmove(piVar2 + 6,ar5_00,0x100,ar7_00);
    FUN_8c01422c(auStack_b0,ar5_00,ar6_00,ar7_00,ar6,ar5);
    memmove(piVar2 + 6,auStack_b0,0x100,ar7_00);
    piVar2[6] = ((ar7 >> 2) - 1) * 4 + ar6;
    piVar2[8] = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f67c2\n.set _FUN_8c1f67c2, _FUN_8c1f67c2_def\n");
