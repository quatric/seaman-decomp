#include "../decls.h"
undefined4 FUN_8c2122ea_def(int *ar4,uint ar5,undefined4 ar6,undefined4 *ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *ar7_00;
  int iVar3;
  int iStack_4c;
  undefined4 auStack_40 [4];
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  
  iVar3 = ar5 * 4;
  ar7_00 = ar7;
  iVar1 = FUN_8c2110b2(ar5,ar5,ar6,ar7);
  if (iVar1 != 8) {
    ar7_00 = &DAT_8c2758f0;
    if ((ar5 & 1) == 0) {
      uVar2 = 0xa0000000;
    }
    else {
      uVar2 = 0x81000040;
    }
    DAT_8c2758f0 = *(uint *)(uint)ar4[1] & 0x830000 | uVar2;
    _DAT_ff000038 = *(uint *)(*ar4 + iVar3) >> 0x18;
    _DAT_ff00003c = _DAT_ff000038;
    FUN_8c207300(*(uint *)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,&DAT_8c2758f0,0x20,&DAT_8c2758f0);
    *(int *)(*ar4 + iVar3) = *(int *)(*ar4 + iVar3) + 0x20;
    for (iStack_4c = 2; iStack_4c != 0; iStack_4c = iStack_4c + -1) {
      _DAT_ff000038 = *(uint *)(*ar4 + iVar3) >> 0x18;
      _DAT_ff00003c = _DAT_ff000038;
      FUN_8c207300(*(uint *)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,&DAT_8c275910,0x40,ar7_00);
      *(int *)(*ar4 + iVar3) = *(int *)(*ar4 + iVar3) + 0x40;
    }
  }
  auStack_40[0] = 0x20000000;
  _DAT_ff000038 = *(uint *)(*ar4 + iVar3) >> 0x18;
  _DAT_ff00003c = _DAT_ff000038;
  uStack_30 = ar6;
  puStack_2c = ar7;
  FUN_8c207300(*(uint *)(*ar4 + iVar3) & 0x3ffffff | 0xe0000000,auStack_40,0x20,ar7_00);
  *(int *)(*ar4 + iVar3) = *(int *)(*ar4 + iVar3) + 0x20;
  return 0;
}

__asm__(".globl _FUN_8c2122ea\n.set _FUN_8c2122ea, _FUN_8c2122ea_def\n");
