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
int FUN_8c261058_def(ushort *ar4,int ar5,undefined2 *ar6,short *ar7)

{
  ring[rp++ & 255] = "FUN_8c261058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
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
    (*(int *)(fr0_ - 0x20)) = 0;
    ar4 = ar4 + 1;
    fVar7 = (float)((uVar2 & 0x1fff) + 1);
    do {
      uVar1 = *ar4;
      ar4 = (ushort *)(unsigned)((int)ar4 + 1);
      iVar3 = (uint)(byte)uVar1 * 4;
      fVar6 = fVar7 * *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c272730) + iVar3) + fVar8 * fVar5 + fVar9 * fVar6;
      *ar6 = (short)((uint)(int)fVar6 >> 0x10);
      fVar5 = fVar7 * *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c272b30) + iVar3) + fVar8 * fVar6 + fVar9 * fVar5;
      ar6[1] = (short)((uint)(int)fVar5 >> 0x10);
      ar6 = ar6 + 2;
      (*(int *)(fr0_ - 0x20)) = (*(int *)(fr0_ - 0x20)) + 2;
    } while ((*(int *)(fr0_ - 0x20)) < 0x20);
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c261058\n.set _FUN_8c261058, _FUN_8c261058_def\n");
