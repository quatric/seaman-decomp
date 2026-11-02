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
int FUN_8c20eec0_def(byte *ar4,byte *ar5,byte *ar6,byte *ar7)

{
  ring[rp++ & 255] = "FUN_8c20eec0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined1 * s0 = (undefined1 *)(unsigned long)*(unsigned *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  iVar19 = (s4 * 2 + -1) * 4;
  pbVar18 = ar4 + iVar19;
  pbVar17 = ar5 + iVar19;
  pbVar20 = ar6 + iVar19;
  pbVar21 = ar7 + iVar19;
  iVar10 = (uint)pbVar18[3] + (uint)pbVar17[3] * 2 + (uint)pbVar20[3] * 2 + (uint)pbVar21[3];
  iVar11 = (uint)pbVar18[2] + (uint)pbVar17[2] * 2 + (uint)pbVar20[2] * 2 + (uint)pbVar21[2];
  iVar12 = (uint)pbVar18[1] + (uint)pbVar17[1] * 2 + (uint)pbVar20[1] * 2 + (uint)pbVar21[1];
  iVar1 = (uint)*pbVar18 + (uint)*pbVar17 * 2 + (uint)*pbVar20 * 2 + (uint)*pbVar21;
  iVar13 = (uint)ar4[3] + (uint)ar5[3] * 2 + (uint)ar6[3] * 2 + (uint)ar7[3];
  iVar14 = (uint)ar4[2] + (uint)ar5[2] * 2 + (uint)ar6[2] * 2 + (uint)ar7[2];
  iVar15 = (uint)ar4[1] + (uint)ar5[1] * 2 + (uint)ar6[1] * 2 + (uint)ar7[1];
  iVar2 = (uint)*ar4 + (uint)*ar5 * 2 + (uint)*ar6 * 2 + (uint)*ar7;
  iVar19 = iVar10;
  iVar5 = iVar11;
  iVar7 = iVar12;
  iVar9 = iVar1;
  iVar4 = iVar13;
  iVar6 = iVar14;
  iVar8 = iVar15;
  iVar16 = iVar2;
  while (s4 = s4 + -1, s4 != 0) {
    iVar3 = iVar4 * 2 + iVar19;
    iVar19 = (uint)ar4[7] + (uint)ar5[7] * 2 + (uint)ar6[7] * 2 + (uint)ar7[7];
    pbVar17 = ar6 + 8;
    pbVar18 = ar7 + 8;
    iVar4 = (uint)ar4[0xb] + (uint)ar5[0xb] * 2 + (uint)ar6[0xb] * 2 + (uint)ar7[0xb];
    s0[3] = (char)((iVar3 + iVar19 * 2 + iVar4) * 0x39 >> 0xb);
    iVar3 = iVar6 * 2 + iVar5;
    iVar5 = (uint)ar4[6] + (uint)ar5[6] * 2 + (uint)ar6[6] * 2 + (uint)ar7[6];
    iVar6 = (uint)ar4[10] + (uint)ar5[10] * 2 + (uint)ar6[10] * 2 + (uint)ar7[10];
    s0[2] = (char)((iVar3 + iVar5 * 2 + iVar6) * 0x39 >> 0xb);
    iVar3 = iVar8 * 2 + iVar7;
    iVar7 = (uint)ar4[5] + (uint)ar5[5] * 2 + (uint)ar6[5] * 2 + (uint)ar7[5];
    iVar8 = (uint)ar4[9] + (uint)ar5[9] * 2 + (uint)ar6[9] * 2 + (uint)ar7[9];
    s0[1] = (char)((iVar3 + iVar7 * 2 + iVar8) * 0x39 >> 0xb);
    iVar3 = iVar16 * 2 + iVar9;
    iVar9 = (uint)ar4[4] + (uint)ar5[4] * 2 + (uint)ar6[4] * 2 + (uint)ar7[4];
    ar7 = ar7 + 8;
    ar6 = ar6 + 8;
    iVar16 = (uint)ar4[8] + (uint)ar5[8] * 2 + (uint)*pbVar17 * 2 + (uint)*pbVar18;
    ar5 = ar5 + 8;
    ar4 = ar4 + 8;
    *s0 = (char)((iVar3 + iVar9 * 2 + iVar16) * 0x39 >> 0xb);
    s0 = s0 + 4;
  }
  s0[3] = (char)((iVar4 * 2 + iVar19 + iVar10 * 2 + iVar13) * 0x39 >> 0xb);
  s0[2] = (char)((iVar6 * 2 + iVar5 + iVar11 * 2 + iVar14) * 0x39 >> 0xb);
  iVar19 = (iVar8 * 2 + iVar7 + iVar12 * 2 + iVar15) * 0x39 >> 0xb;
  s0[1] = (char)iVar19;
  *s0 = (char)((iVar16 * 2 + iVar9 + iVar1 * 2 + iVar2) * 0x39 >> 0xb);
  return iVar19;
}

__asm__(".globl _FUN_8c20eec0\n.set _FUN_8c20eec0, _FUN_8c20eec0_def\n");
