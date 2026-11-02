#include "../decls.h"
int FUN_8c261170_def(ushort *ar4,int ar5,undefined2 *ar6,short *ar7,undefined2 *s0,short *s4,
                undefined4 s8,undefined4 s12)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  fVar7 = (float)((int)*ar7 << 0x10);
  fVar8 = (float)((int)ar7[1] << 0x10);
  fVar9 = (float)((int)*s4 << 0x10);
  fVar10 = (float)((int)s4[1] << 0x10);
  iStack_30 = 0;
  iStack_28 = 1;
  iStack_2c = 0;
  fVar12 = (float)((int)(short)s8 << 4) / 65536.0;
  fVar13 = (float)((int)(short)s12 << 4) / 65536.0;
  while( true ) {
    if ((int)(ar5 + (uint)(ar5 < 0)) >> 1 <= iStack_30) {
      *ar7 = (short)((uint)(int)fVar7 >> 0x10);
      ar7[1] = (short)((uint)(int)fVar8 >> 0x10);
      *s4 = (short)((uint)(int)fVar9 >> 0x10);
      s4[1] = (short)((uint)(int)fVar10 >> 0x10);
      return ar5;
    }
    uVar3 = *ar4 >> 8 | *ar4 << 8;
    if (((int)(short)uVar3 & 0x8000U) != 0) break;
    iVar2 = 0;
    fVar11 = (float)(((int)(short)uVar3 & 0x1fffU) + 1);
    puVar1 = ar4 + 1;
    do {
      puVar6 = puVar1;
      iVar4 = (uint)(byte)*puVar6 * 4;
      fVar8 = fVar11 * *(float *)(&DAT_8c272730 + iVar4) + fVar12 * fVar7 + fVar13 * fVar8;
      *ar6 = (short)((uint)(int)fVar8 >> 0x10);
      fVar7 = fVar11 * *(float *)(&DAT_8c272b30 + iVar4) + fVar12 * fVar8 + fVar13 * fVar7;
      iVar2 = iVar2 + 2;
      ar6[1] = (short)((uint)(int)fVar7 >> 0x10);
      ar6 = ar6 + 2;
      puVar1 = (ushort *)((int)puVar6 + 1);
    } while (iVar2 < 0x20);
    uVar3 = *(ushort *)((int)puVar6 + 1);
    uVar5 = (uint)(short)(uVar3 >> 8 | uVar3 << 8);
    if ((uVar5 & 0x8000) != 0) {
      return iStack_28;
    }
    iVar2 = 0;
    ar4 = (ushort *)((int)puVar6 + 3);
    fVar11 = (float)((uVar5 & 0x1fff) + 1);
    do {
      uVar3 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      iVar4 = (uint)(byte)uVar3 * 4;
      fVar10 = fVar11 * *(float *)(&DAT_8c272730 + iVar4) + fVar12 * fVar9 + fVar13 * fVar10;
      *s0 = (short)((uint)(int)fVar10 >> 0x10);
      fVar9 = fVar11 * *(float *)(&DAT_8c272b30 + iVar4) + fVar12 * fVar10 + fVar13 * fVar9;
      iVar2 = iVar2 + 2;
      s0[1] = (short)((uint)(int)fVar9 >> 0x10);
      s0 = s0 + 2;
    } while (iVar2 < 0x20);
    iStack_30 = iStack_30 + 1;
    iStack_28 = iStack_28 + 2;
    iStack_2c = iStack_2c + 2;
  }
  return iStack_2c;
}

__asm__(".globl _FUN_8c261170\n.set _FUN_8c261170, _FUN_8c261170_def\n");
