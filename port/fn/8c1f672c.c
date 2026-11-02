#include "../decls.h"
int * FUN_8c1f672c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *piVar2;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 in_PR;
  
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  piVar2 = (int *)&DAT_8c472da0;
  iVar1 = 0;
  do {
    if (*piVar2 == 0) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x35f;
  } while (iVar1 < 2);
  if (iVar1 == 2) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[0x82] = ar4;
    piVar2[0x83] = 0;
    piVar2[0x81] = 0;
    memset(piVar2 + 0x84,0,0xb68,ar7);
    ar6_00 = 0x100;
    ar5_00 = 0;
    memset(piVar2 + 0x41,0,0x100,ar7);
    FUN_8c01422c(piVar2 + 0x41,ar5_00,ar6_00,ar7,ain0,in_PR);
    *piVar2 = 1;
    _DAT_8c4748a0 = _DAT_8c4748a0 + 1;
  }
  return piVar2;
}

__asm__(".globl _FUN_8c1f672c\n.set _FUN_8c1f672c, _FUN_8c1f672c_def\n");
