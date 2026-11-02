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
uint FUN_8c1fa54c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fa54c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 512; for (int i_ = 0; i_ < 512; i_++) z_[i_] = 0; }
  uint *puVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  int *ar6_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int in_VBR = (void *)0x8cf80000;
  byte in_MD = 0;
  byte bVar10;
  byte in_RB = 0;
  byte bVar11;
  byte in_BL = 0;
  byte bVar12;
  byte in_FD = 0;
  byte bVar13;
  byte in_M = 0;
  byte extraout_M = 0;
  byte extraout_M_00 = 0;
  byte bVar14;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte extraout_Q_00 = 0;
  byte bVar15;
  byte in_IMASK = 0;
  byte bVar16;
  byte in_S = 0;
  byte extraout_S = 0;
  byte extraout_S_00 = 0;
  byte bVar17;
  byte in_T = 0;
  bool bVar18;
  
  puVar2 = 0xa05f6920;
  puVar1 = 0xa05f6924;
  uVar4 = (uint)in_T | (uint)in_S << 1;
  uVar6 = uVar4 | (uint)in_IMASK << 4;
  uVar9 = uVar6 | (uint)in_Q << 8;
  uVar7 = uVar9 | (uint)in_M << 9;
  bVar12 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar10 = bVar12 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar17 = (byte)((uVar4 & 2) >> 1);
  bVar16 = (byte)((uVar6 & 0xf0) >> 4);
  bVar15 = (byte)(uVar9 >> 8) & 1;
  bVar14 = (byte)((uVar7 & 0x200) >> 9);
  bVar13 = (byte)(((uVar7 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar12 = (bVar12 & 0x10) >> 4;
  bVar11 = (bVar10 & 0x20) >> 5;
  bVar10 = ((bVar10 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  iVar5 = ar4 * 0x10;
  uVar4 = 1;
  do {
    iVar8 = uVar4 * 0x10 + 0x8c474bc8;
    if ((*(int *)(unsigned)(iVar8 + 4) == iVar5 + 0x8c474bc8) &&
       ((*(uint *)(unsigned)(iVar8 + 0xc) & 0x80000000) != 0)) break;
    uVar4 = uVar4 + 1;
  } while (uVar4 < (uint)(int)0x100);
  if (uVar4 == (int)0x100) {
    iVar5 = iVar5 + 0x8c474bc8;
    uVar4 = (uint)0x90;
    uVar9 = 1;
    uVar6 = (uint)0xc0;
    iVar8 = (int)0x200;
    do {
      if (*(int *)(unsigned)(uVar9 * 4 + 0x8c475bc8) == iVar5) {
        ar6_00 = (int *)(unsigned)(uVar9 * 4 + 0x8c475bc8);
        *ar6_00 = *(int *)(unsigned)(iVar5 + 4);
        *(undefined4 *)(unsigned)(iVar5 + 0xc) = 0;
        if (*ar6_00 == 0) {
          if (uVar9 == uVar4) {
            (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c20759a(0,0,ar6_00,uVar4));
            bVar14 = extraout_M;
            bVar15 = extraout_Q;
            bVar17 = extraout_S;
          }
          else if (uVar9 == (int)0x92) {
            (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c2075bc(0,0,ar6_00,uVar4));
            bVar14 = extraout_M_00;
            bVar15 = extraout_Q_00;
            bVar17 = extraout_S_00;
          }
          else {
            uVar7 = uVar9 * 0x10;
            sVar3 = (short)uVar7 >> 8;
            uVar4 = (uVar7 & 0xff) >> 5;
            if (sVar3 == 10) {
              *puVar2 = *puVar2 & ~(1 << uVar4 + 0xc);
            }
            else if (sVar3 == 0xb) {
              *puVar1 = *puVar1 & ~(1 << uVar4);
            }
            *(unsigned *)(unsigned)(in_VBR + (uVar7 + (int)(int)0xfffffe00 >> 3) + iVar8) = (&(*(undefined1 *)(unsigned)0x8c1faa94));
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
    bVar18 = uVar9 == uVar6;
  }
  else {
    iVar5 = iVar5 + 0x8c474bc8;
    *(undefined4 *)(unsigned)(uVar4 * 0x10 + 0x8c474bc8 + 4) = *(undefined4 *)(unsigned)(iVar5 + 4);
    *(undefined4 *)(unsigned)(iVar5 + 0xc) = 0;
    bVar18 = false;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar18 | (uint)bVar17 << 1 | (uint)bVar16 << 4 | (uint)bVar15 << 8 |
          (uint)bVar14 << 9 | (uint)bVar13 << 0xf | (uint)bVar12 << 0x1c | (uint)bVar11 << 0x1d |
         (uint)bVar10 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa54c\n.set _FUN_8c1fa54c, _FUN_8c1fa54c_def\n");
