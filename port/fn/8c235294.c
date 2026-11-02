#include "../decls.h"
undefined4 FUN_8c235294_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(ar5 + 4) - *(float *)(ar4 + 4);
  fVar2 = *(float *)(ar5 + 8) - *(float *)(ar4 + 8);
  _DAT_8c4aa3e4 = (float *)((int)_DAT_8c4aa3e4 + 0x18);
  *_DAT_8c4aa3e4 = (float)*(undefined4 *)(ar4 + 0x18);
  fVar3 = 1.0 / SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  fVar2 = fVar2 * fVar3 * 0.525;
  fVar1 = -(fVar1 * fVar3 * 0.525);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -3;
  *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar4 + 8) + fVar1;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar4 + 4) + fVar2;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = -3.689349e+19;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 0xe;
  *_DAT_8c4aa3e4 = *(float *)(ar4 + 0x18);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -3;
  *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar4 + 8) - fVar1;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar4 + 4) - fVar2;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = -3.689349e+19;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 0xe;
  *_DAT_8c4aa3e4 = *(float *)(ar5 + 0x18);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -3;
  *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar5 + 8) + fVar1;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar5 + 4) + fVar2;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = -3.689349e+19;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 0xe;
  *_DAT_8c4aa3e4 = *(float *)(ar5 + 0x18);
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -3;
  *_DAT_8c4aa3e4 = _DAT_8c4aa3e0;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar5 + 8) - fVar1;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = *(float *)(ar5 + 4) - fVar2;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + -1;
  *_DAT_8c4aa3e4 = -1.5845633e+29;
  _DAT_8c4aa3e4 = _DAT_8c4aa3e4 + 8;
  return 4;
}

__asm__(".globl _FUN_8c235294\n.set _FUN_8c235294, _FUN_8c235294_def\n");
