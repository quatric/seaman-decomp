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
undefined4 FUN_8c1235fc_def(int ar4,undefined4 ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c1235fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  fVar7 = (*(float *)(unsigned)(ar4 + 0x2c) + *(float *)(unsigned)(ar4 + 0x38) + *(float *)(unsigned)(ar4 + 0x3c)) -
          *(float *)(unsigned)(ar4 + 0x4b0);
  iVar4 = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c123594(ar4,0,ar6,ar7));
  uVar5 = uVar1 & 0xffff;
  if (uVar5 != 0) {
    fVar6 = (float)uVar5;
    *(short *)(unsigned)(ar4 + 0x4ba) = (short)uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x4cc) = 0;
    uVar1 = uVar5;
    if (0.19999999 < ABS(fVar7)) {
      iVar8 = (int)(fVar6 * (-(*(float *)(unsigned)(ar4 + 0x4c4) * fVar7 * 0.049999997) + 1.0));
      if (0xffff < iVar8) {
        iVar8 = 0xffff;
      }
      iVar4 = iVar8;
      if (*(short *)(unsigned)(ar4 + 0x4c0) != 0) {
        ar6 = (uint)*(ushort *)(unsigned)(ar4 + 0x4c0);
        ar7 = (uint)*(ushort *)(unsigned)(ar4 + 0x4c2);
        iVar3 = ar6 - ar7;
        iVar2 = iVar3;
        if (iVar3 < iVar8) {
          iVar2 = iVar8;
        }
        iVar4 = ar7 + ar6;
        if ((iVar2 < iVar4) && (iVar4 = iVar8, iVar8 <= iVar3)) {
          iVar4 = iVar3;
        }
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c123594(ar4,iVar4,ar6,ar7));
      uVar1 = uVar1 & 0xffff;
      if (uVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x4cc) = 1;
        return 0;
      }
    }
    if (*(short *)(unsigned)(ar4 + 0x4c0) == 0) {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013dec(uVar1 - uVar5,iVar4,ar6,ar7));
      if ((int)(fVar6 * 0.01) < iVar4) {
        *(undefined2 *)(unsigned)(ar4 + 0x4b4) = 0;
      }
      if (10 < *(ushort *)(unsigned)(ar4 + 0x4b4)) {
        *(short *)(unsigned)(ar4 + 0x4c0) = (short)uVar1;
        *(undefined2 *)(unsigned)(ar4 + 0x4b4) = 0;
        fVar7 = *(float *)(unsigned)(ar4 + 0x2c) + *(float *)(unsigned)(ar4 + 0x38) + *(float *)(unsigned)(ar4 + 0x3c);
        if ((((*(ushort *)(unsigned)(ar4 + 0x4c0) == 0xffff) && (fVar7 < *(float *)(unsigned)(ar4 + 0x4b0) + -2.763102))
            || ((*(ushort *)(unsigned)(ar4 + 0x4c0) < 0x199b && (*(float *)(unsigned)(ar4 + 0x4b0) + 1.381551 < fVar7)))
            ) && (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12357c(ar4,5,ar6,ar7)), (uVar1 & 0xff) != 0)) {
          return 1;
        }
      }
    }
    else {
      *(undefined2 *)(unsigned)(ar4 + 0x4b4) = 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1235fc\n.set _FUN_8c1235fc, _FUN_8c1235fc_def\n");
