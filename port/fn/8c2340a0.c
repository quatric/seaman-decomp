#include "../decls.h"
undefined4 * FUN_8c2340a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = (float)(int)(short)((ushort)ar6 & 0xf) * 0.0625 + 0.0009765625;
  fVar4 = (float)(int)(short)((ushort)ar6 >> 4 & 0xf) * 0.0625 + 0.0009765625;
  uVar1 = (uint)(fVar3 + 0.061523438) & 0xffff0000;
  _DAT_8c4aa3d0 = (float *)((int)_DAT_8c4aa3d0 + 0x1c);
  uVar2 = (uint)fVar4 >> 0x10;
  fVar6 = (float)(int)(short)ar4;
  *_DAT_8c4aa3d0 = fVar6 + _DAT_8c4aa394;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = 9.0;
  fVar5 = (float)(int)(short)ar5;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = fVar5;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = fVar6 + _DAT_8c4aa394;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = 9.0;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = fVar5;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = fVar6;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = -1.5845633e+29;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + 0xf;
  *_DAT_8c4aa3d0 = (float)((uint)(fVar4 + 0.061523438) >> 0x10 | uVar1);
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = (float)(uVar1 | uVar2);
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = (float)((uint)fVar3 & 0xffff0000 | uVar2);
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -2;
  *_DAT_8c4aa3d0 = fVar5 + _DAT_8c4aa394;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = fVar6;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = 9.0;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = fVar5 + _DAT_8c4aa394;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + 8;
  return &DAT_8c234300;
}

__asm__(".globl _FUN_8c2340a0\n.set _FUN_8c2340a0, _FUN_8c2340a0_def\n");
