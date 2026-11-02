#include "../decls.h"
undefined4 FUN_8c2355c4_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < ar5 + 1) {
    do {
      iVar2 = iVar1 * 4;
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 6;
      *_DAT_8c4aa3e4 = *(float *)(ar4[1] + iVar2);
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = (float)(int)*(short *)(ar4[2] + iVar2 + 2) * 0.00390625;
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = (float)(int)*(short *)(iVar2 + ar4[2]) * 0.00390625;
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = *(float *)(*ar4 + iVar1 * 8 + 4);
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = *(float *)(iVar1 * 8 + *ar4);
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
      *_DAT_8c4aa3e4 = -3.689349e+19;
      iVar1 = iVar1 + 1;
      _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 8;
    } while (iVar1 < ar5 + 1);
  }
  iVar2 = iVar1 * 4;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 6;
  *_DAT_8c4aa3e4 = *(float *)(ar4[1] + iVar2);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = (float)(int)*(short *)(ar4[2] + iVar2 + 2) * 0.00390625;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = (float)(int)*(short *)(iVar2 + ar4[2]) * 0.00390625;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(*ar4 + iVar1 * 8 + 4);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(iVar1 * 8 + *ar4);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = -1.5845633e+29;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 8;
  return 4;
}

__asm__(".globl _FUN_8c2355c4\n.set _FUN_8c2355c4, _FUN_8c2355c4_def\n");
