#include "../decls.h"
int FUN_8c267fe8_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  uint ain0;
  int iVar2;
  int iVar3;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  iVar1 = DAT_8c2784c0;
  ar5_00 = 0;
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = DAT_8c2784c0 + 0x158;
    ar7 = *(int *)(DAT_8c2784c0 + 0x168);
    if (*(int *)(DAT_8c2784c0 + 0x16c) == 0x100) {
      ar5_00 = 0xa000001;
      ar6 = 0x100;
    }
    else {
      iVar3 = *(int *)(DAT_8c2784c0 + 0x170);
      *(int *)(DAT_8c2784c0 + 0x170) = iVar3 + 1;
      ar6 = iVar3 * 0x1c + *(int *)(iVar1 + 0x164);
      if (*(int *)(iVar1 + 0x170) == ar7) {
        *(undefined4 *)(iVar1 + 0x170) = 0;
      }
      *(undefined4 *)(ar6 + 0x14) = 1;
      FUN_8c0107a0(0x14,ar6,ar4);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267fe8,ar5_00,ar6,ar7,ain0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267fe8\n.set _FUN_8c267fe8, _FUN_8c267fe8_def\n");
