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
undefined4 FUN_8c20a1d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20a1d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  float fVar4;
  double dVar3;
  float fVar5;
  undefined4 in_fr14 = 0;
  uint uVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar2 = 0x80;
  fVar5 = 255.0;
  fVar4 = *(float *)(unsigned)(ar4 + 0x1fc) * 255.0;
  dVar3 = CONCAT44D(fVar4,*(float *)(unsigned)(ar4 + 0x1fc));
  uVar1 = (int)fVar4 & 0xff;
  do {
    iVar2 = iVar2 + -1;
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 * 4 + ar4),SUB84(dVar3,0));
    }
    else {
      dVar3 = *(double *)(unsigned)(iVar2 * 4 + ar4);
    }
    if (cVar7 == '\0') {
      fVar4 = F32HI(dVar3) * fVar5;
      dVar3 = CONCAT44D(fVar4,SUB84(dVar3,0));
      uVar6 = (uint)fVar4;
    }
    else {
      dVar3 = dVar3 * CONCAT44D(in_fr14,fVar5);
      uVar6 = (uint)dVar3;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(iVar2 * 4 + 0x200,(uVar6 & 0xff) << 8 | uVar1,ar6,ar7));
    uVar1 = uVar6 & 0xff;
  } while (iVar2 != 0);
  return 0;
}

__asm__(".globl _FUN_8c20a1d0\n.set _FUN_8c20a1d0, _FUN_8c20a1d0_def\n");
