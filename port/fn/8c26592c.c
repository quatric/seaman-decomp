#include "../decls.h"
uint FUN_8c26592c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  byte in_MD;
  byte bVar3;
  byte in_RB;
  byte bVar4;
  byte in_BL;
  byte bVar5;
  byte in_FD;
  byte bVar6;
  byte in_M;
  byte extraout_M;
  byte extraout_M_00;
  byte extraout_M_01;
  byte extraout_M_02;
  byte bVar7;
  byte in_Q;
  byte extraout_Q;
  byte extraout_Q_00;
  byte extraout_Q_01;
  byte extraout_Q_02;
  byte bVar8;
  byte in_IMASK;
  byte bVar9;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_S_01;
  byte extraout_S_02;
  byte bVar10;
  byte in_T;
  byte extraout_T;
  byte extraout_T_00;
  byte bVar11;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  
  puVar1 = (&FUN_8c2659dc);
  uStack_c = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar9 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(ar4 + 4) = 1;
  (*(code *)puVar1)(ar4,ar5,ar6,ar7);
  puVar1 = (&DATA_8c2784c0);
  *(undefined4 *)((int)0x190 + *(int *)(&DATA_8c2784c0)) = 0;
  iVar2 = *(int *)puVar1;
  *(int *)(0x18c + iVar2) = *(int *)(0x18c + iVar2) + 1;
  FUN_8c265b68(&iStack_10,ar5,ar6,ar7);
  bVar11 = 0;
  bVar7 = extraout_M;
  bVar8 = extraout_Q;
  bVar10 = extraout_S;
  if (0 < iStack_10) {
    FUN_8c265c50(&uStack_18,&uStack_14,ar6,ar7);
    iVar2 = *(int *)(*(int *)puVar1 + (int)0x1a8);
    if (iVar2 == 0) {
      FUN_8c265ff4(uStack_18,uStack_14,ar6,ar7);
      bVar7 = extraout_M_01;
      bVar8 = extraout_Q_01;
      bVar10 = extraout_S_01;
      bVar11 = extraout_T;
    }
    else if (iVar2 == 1) {
      aica_ram_2657ec(uStack_18,uStack_14,ar6,ar7);
      bVar7 = extraout_M_02;
      bVar8 = extraout_Q_02;
      bVar10 = extraout_S_02;
      bVar11 = extraout_T_00;
    }
    else {
      bVar11 = 0;
      bVar7 = extraout_M_00;
      bVar8 = extraout_Q_00;
      bVar10 = extraout_S_00;
    }
  }
  return (uStack_c & 0xf) << 4 |
         ((uint)bVar11 | (uint)bVar10 << 1 | (uint)bVar9 << 4 | (uint)bVar8 << 8 | (uint)bVar7 << 9
          | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d | (uint)bVar3 << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c26592c\n.set _FUN_8c26592c, _FUN_8c26592c_def\n");
