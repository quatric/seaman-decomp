#include "../decls.h"
undefined4 FUN_8c202a80_def(undefined4 *ar4,int ar5,undefined4 ar6,int ar7,int s0,undefined4 s4)

{
  int iVar1;
  undefined4 *puVar2;
  int ar7_00;
  uint uVar3;
  undefined4 auStack_a30 [4];
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 auStack_a18 [640];
  undefined4 uStack_18;
  
  puVar2 = &DAT_8c273be0;
  auStack_a30[0] = DAT_8c26d250;
  auStack_a30[1] = DAT_8c26d254;
  auStack_a30[2] = DAT_8c26d258;
  auStack_a30[3] = DAT_8c26d25c;
  uStack_a20 = DAT_8c26d260;
  uStack_a1c = DAT_8c26d264;
  *(undefined4 **)(&DAT_8c4aa1bc + DAT_8c273be0 * 0x10) = ar4;
  *(int *)(&DAT_8c4aa1c0 + DAT_8c273be0 * 0x10) = ar5;
  *(undefined4 *)(&DAT_8c4aa1c4 + DAT_8c273be0 * 0x10) = ar6;
  _DAT_8c4aa1b8 = ar7;
  *(int *)(&DAT_8c4aa1c8 + DAT_8c273be0 * 0x10) = s0;
  DAT_8c273be0 = DAT_8c273be0 + 1 & 1;
  ar7_00 = ar7;
  _DAT_8c4a9be0 = ar7;
  if (_DAT_8c4aa1f4 != 0) {
    puVar2 = (undefined4 *)0xff;
    ar5 = ar7;
    sh4_dmac_202c60(0xff,ar7,ar6,ar7);
  }
  iVar1 = FUN_8c212148(puVar2,ar5,ar6,ar7_00);
  if (iVar1 == -0x80000000) {
    iVar1 = FUN_8c2036a0(_DAT_8c4aa200,ar4,ar6,ar7_00);
    if (iVar1 != 0) {
      return iVar1;
    }
    *ar4 = 1;
    ar4[1] = auStack_a30[_DAT_8c4a9bd0];
    ar4[2] = _DAT_8c4a9bd0;
    ar4[3] = _DAT_8c4aa1e8;
    ar4[4] = _DAT_8c4aa1ec;
    if (ar7 == 1) {
      ar4[6] = 1;
    }
    else {
      ar4[6] = 0;
    }
    if (s0 == 1) {
      for (puVar2 = auStack_a18; puVar2 < &uStack_18; puVar2 = puVar2 + 1) {
        *puVar2 = 0;
      }
      uVar3 = 0;
      if (ar4[5] != 0) {
        do {
          FUN_8c20a87c(ar4[7] + uVar3,auStack_a18,0xa00,ar7_00);
          uVar3 = uVar3 + 0xa00;
        } while (uVar3 < (uint)ar4[5]);
      }
    }
  }
  else {
    FUN_8c2120c0(0x200,ar5,ar6,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c202a80\n.set _FUN_8c202a80, _FUN_8c202a80_def\n");
