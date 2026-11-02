#include "../decls.h"
int FUN_8c261058_def(ushort *ar4,int ar5,undefined2 *ar6,short *ar7,undefined4 s0,undefined4 s4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iStack_20;
  
  fVar5 = (float)((int)*ar7 << 0x10);
  fVar6 = (float)((int)ar7[1] << 0x10);
  fVar8 = (float)((int)(short)s0 << 4) / 65536.0;
  fVar9 = (float)((int)(short)s4 << 4) / 65536.0;
  iVar4 = 0;
  while( true ) {
    if (ar5 <= iVar4) {
      *ar7 = (short)((uint)(int)fVar5 >> 0x10);
      ar7[1] = (short)((uint)(int)fVar6 >> 0x10);
      return ar5;
    }
    uVar2 = (uint)(short)(*ar4 >> 8 | *ar4 << 8);
    if ((uVar2 & 0x8000) != 0) break;
    iStack_20 = 0;
    ar4 = ar4 + 1;
    fVar7 = (float)((uVar2 & 0x1fff) + 1);
    do {
      uVar1 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      iVar3 = (uint)(byte)uVar1 * 4;
      fVar6 = fVar7 * *(float *)(&DAT_8c272730 + iVar3) + fVar8 * fVar5 + fVar9 * fVar6;
      *ar6 = (short)((uint)(int)fVar6 >> 0x10);
      fVar5 = fVar7 * *(float *)(&DAT_8c272b30 + iVar3) + fVar8 * fVar6 + fVar9 * fVar5;
      ar6[1] = (short)((uint)(int)fVar5 >> 0x10);
      ar6 = ar6 + 2;
      iStack_20 = iStack_20 + 2;
    } while (iStack_20 < 0x20);
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c261058\n.set _FUN_8c261058, _FUN_8c261058_def\n");
