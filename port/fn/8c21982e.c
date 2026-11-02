#include "../decls.h"
undefined * FUN_8c21982e_def(short *ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined *ain0)

{
  ushort uVar1;
  int iVar2;
  uint ar5_00;
  short *psVar3;
  undefined *puVar4;
  int iVar5;
  uint ar5_01;
  uint uVar6;
  
  ar5_00 = ar5;
  while( true ) {
    uVar6 = (uint)*ar4;
    if (uVar6 == 0xff) break;
    uVar1 = ar4[1];
    iVar5 = (int)ar4[3];
    psVar3 = ar4 + 4;
    if ((uVar6 & 0x8000) == 0) {
      _DAT_8c4c0fa0 = 0;
      _DAT_8c4c0fa4 = 0;
    }
    ar5_01 = uVar6 & 0xffff7fff;
    puVar4 = (undefined *)(uVar6 & 0xff);
    _DAT_8c4ab1b4 = ar4[2] * 0x20 + ar5;
    _DAT_8c4ab1b8 = _DAT_8c4ab1b4 & 0x3ffffff | 0xe0000000;
    _DAT_ff000038 = _DAT_8c4ab1b4 >> 0x18 & 0x1c;
    _DAT_8c4aa518 = _DAT_8c4aa518 + iVar5;
    _DAT_8c4ab1ac = iVar5;
    _DAT_8c4ab1b0 = psVar3;
    _DAT_ff00003c = _DAT_ff000038;
    if (puVar4 == (undefined *)0x2c) {
      iVar2 = FUN_8c232cd0(&DAT_8c4ab198,ar5_01,ar6,ar7);
    }
    else {
      iVar2 = (*(code *)(&PTR_FUN_8c2759f0)[(int)(puVar4 + -0x20) * 2])
                        (&DAT_8c4ab198,ar5_00,ar6,ar7);
      ar5_01 = ar5_00;
    }
    _DAT_8c4aa2f0 = *(undefined4 *)(&DAT_8c2759f4 + (int)(puVar4 + -0x20) * 8);
    _DAT_8c4c0fa0 = _DAT_8c4c0fa0 + iVar2;
    ain0 = &DAT_8c2759f4;
    if (((uVar6 & 0x7f00) == 0x200) || (ain0 = puVar4, puVar4 != (undefined *)0x2c)) {
      _DAT_8c4c0fa4 = _DAT_8c4c0fa4 + iVar5;
    }
    ar4 = psVar3 + (uint)uVar1 * 2 + -2;
    ar5_00 = ar5_01;
  }
  return ain0;
}

__asm__(".globl _FUN_8c21982e\n.set _FUN_8c21982e, _FUN_8c21982e_def\n");
