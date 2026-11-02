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
int FUN_8c120e12_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120e12";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  short *psVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  
  piVar12 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x284 + ar4));
  uVar11 = (uint)*(ushort *)(unsigned)(0x284 + 4 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0x108 + ar4) + 8))))(*(int *)(unsigned)(0x108 + ar4),ar5,ar6,ar7));
  (*(ushort *)(fr0_ - 0x28)) = 0;
  iVar2 = *(int *)(unsigned)(0x2b0 + ar4);
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + (ar6 * 3 + ar5) * 4));
  for (; piVar12 != (int *)(unsigned)0x0; piVar12 = (int *)(unsigned)piVar12[4]) {
    iVar5 = *piVar12;
    uVar10 = 0;
    iVar7 = 0;
    iVar2 = piVar12[2];
    iVar8 = *puVar4 - 1;
    pbVar9 = (byte *)(unsigned)(*(int *)(unsigned)(0x118 + ar4 + ar5 * 4) + (uVar1 & 0xffff) * iVar8 +
                     (uint)(*(ushort *)(fr0_ - 0x28)));
    puVar6 = puVar4;
    if (uVar11 != 0) {
      do {
        puVar6 = puVar6 + 1;
        if ((int)(uint)*puVar6 <= iVar8) {
          do {
            iVar8 = iVar8 + -1;
            psVar3 = (short *)(unsigned)(*pbVar9 * uVar11 * 2 + iVar7 + iVar5);
            *psVar3 = *psVar3 + 0x32;
            *(short *)(unsigned)(iVar2 + iVar7) = *(short *)(unsigned)(iVar2 + iVar7) + 0x32;
            pbVar9 = pbVar9 + -(uVar1 & 0xffff);
          } while ((int)(uint)*puVar6 <= iVar8);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 2;
      } while (uVar10 < uVar11);
    }
    iVar2 = (short)(*(ushort *)(fr0_ - 0x28)) + 1;
    (*(ushort *)(fr0_ - 0x28)) = (ushort)iVar2;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c120e12\n.set _FUN_8c120e12, _FUN_8c120e12_def\n");
