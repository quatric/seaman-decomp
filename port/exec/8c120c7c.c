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
undefined4 * FUN_8c120c7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120c7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint d;
  ushort *ar4_00;
  uint ar5_00;
  float *ar6_00;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  d = (uint)*(ushort *)(unsigned)(ar4 + 0x288);
  fVar12 = *(float *)(unsigned)(ar4 + 0x2a4);
  puVar2 = (undefined4 *)(unsigned)0x2a0;
  fVar13 = *(float *)(unsigned)(ar4 + 0x2a0);
  for (piVar8 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x284)); piVar8 != (int *)(unsigned)0x0; piVar8 = (int *)(unsigned)piVar8[4]) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_01051c(piVar8[1],d,vr6,vr7));
    fVar10 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    puVar2 = ((undefined4 *)(unsigned)0x8c120dd8);
    (*(uint *)(fr0_ - 0x38)) = 0;
    fVar11 = fVar13 * fVar10 + 1.0;
    puVar4 = (undefined2 *)(unsigned)*piVar8;
    iVar7 = 0;
    fVar10 = fVar13;
    if (d != 0) {
      do {
        uVar1 = *(ushort *)(unsigned)(piVar8[2] + iVar7);
        ar4_00 = (ushort *)(unsigned)(*piVar8 + iVar7);
        ar6_00 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2a8));
        ar5_00 = 0;
        if (uVar3 != 0) {
          do {
            ar5_00 = ar5_00 + 1;
            *ar6_00 = ((float)*ar4_00 / (float)uVar1 + fVar13) / fVar11;
            ar4_00 = ar4_00 + d;
            ar6_00 = ar6_00 + 1;
          } while (ar5_00 < uVar3);
        }
        puVar2 = (undefined4 *)(unsigned)0x2a8;
        uVar6 = 0;
        puVar5 = puVar4;
        fVar9 = fVar10;
        if (uVar3 != 0) {
          do {
            (vsp = ((unsigned long)(fr0_ - 56)), thunk_FUN_8c013dfc(ar4_00,ar5_00,ar6_00,ar7));
            uVar6 = uVar6 + 1;
            fVar9 = -fVar10;
            puVar2 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c120ddc);
            fVar10 = 1.75;
            *puVar5 = (short)(int)((fVar9 * 255.0) / fVar12 + 0.5);
            puVar5 = puVar5 + d;
            fVar9 = 1.75;
          } while (uVar6 < uVar3);
        }
        fVar10 = fVar9;
        puVar4 = puVar4 + 1;
        (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
        iVar7 = iVar7 + 2;
      } while ((*(uint *)(fr0_ - 0x38)) < d);
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c120c7c\n.set _FUN_8c120c7c, _FUN_8c120c7c_def\n");
