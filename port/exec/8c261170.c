#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c261170_def(ushort *ar4,int ar5,undefined2 *ar6,short *ar7)

{
  ring[rp++ & 255] = "FUN_8c261170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined2 * s0 = (undefined2 *)(unsigned long)*(unsigned *)(vsp + 0);
  short * s4 = (short *)(unsigned long)*(unsigned *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
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
  
  fVar7 = (float)((int)*ar7 << 0x10);
  fVar8 = (float)((int)ar7[1] << 0x10);
  fVar9 = (float)((int)*s4 << 0x10);
  fVar10 = (float)((int)s4[1] << 0x10);
  (*(int *)(fr0_ - 0x30)) = 0;
  (*(int *)(fr0_ - 0x28)) = 1;
  (*(int *)(fr0_ - 0x2c)) = 0;
  fVar12 = (float)((int)(short)s8 << 4) / 65536.0;
  fVar13 = (float)((int)(short)s12 << 4) / 65536.0;
  while( true ) {
    if ((int)(ar5 + (uint)(ar5 < 0)) >> 1 <= (*(int *)(fr0_ - 0x30))) {
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
      fVar8 = fVar11 * *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c272730) + iVar4) + fVar12 * fVar7 + fVar13 * fVar8;
      *ar6 = (short)((uint)(int)fVar8 >> 0x10);
      fVar7 = fVar11 * *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c272b30) + iVar4) + fVar12 * fVar8 + fVar13 * fVar7;
      iVar2 = iVar2 + 2;
      ar6[1] = (short)((uint)(int)fVar7 >> 0x10);
      ar6 = ar6 + 2;
      puVar1 = (ushort *)(unsigned)((int)puVar6 + 1);
    } while (iVar2 < 0x20);
    uVar3 = *(ushort *)(unsigned)((int)puVar6 + 1);
    uVar5 = (uint)(short)(uVar3 >> 8 | uVar3 << 8);
    if ((uVar5 & 0x8000) != 0) {
      return (*(int *)(fr0_ - 0x28));
    }
    iVar2 = 0;
    ar4 = (ushort *)(unsigned)((int)puVar6 + 3);
    fVar11 = (float)((uVar5 & 0x1fff) + 1);
    do {
      uVar3 = *ar4;
      ar4 = (ushort *)(unsigned)((int)ar4 + 1);
      iVar4 = (uint)(byte)uVar3 * 4;
      fVar10 = fVar11 * *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c272730) + iVar4) + fVar12 * fVar9 + fVar13 * fVar10;
      *s0 = (short)((uint)(int)fVar10 >> 0x10);
      fVar9 = fVar11 * *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c272b30) + iVar4) + fVar12 * fVar10 + fVar13 * fVar9;
      iVar2 = iVar2 + 2;
      s0[1] = (short)((uint)(int)fVar9 >> 0x10);
      s0 = s0 + 2;
    } while (iVar2 < 0x20);
    (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1;
    (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + 2;
    (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 2;
  }
  return (*(int *)(fr0_ - 0x2c));
}

__asm__(".globl _FUN_8c261170\n.set _FUN_8c261170, _FUN_8c261170_def\n");
