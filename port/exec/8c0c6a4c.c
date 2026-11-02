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
undefined4 FUN_8c0c6a4c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c6a4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int ar5_00;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = ar5;
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09d644(ar5,ar5,ar6,ar7));
  for (iVar2 = 1; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(iVar2 * 0x80 + ar5) = 0xf;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4_00,ar5_00,ar6,ar7));
    ar4_00 = ar5 + iVar2 * 0x80;
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x47000000,(float)iVar1);
    }
    else {
      dVar4 = 512.0001354217529;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x40800000,fVar3);
    }
    else {
      dVar4 = 2.9939312000558264e-78;
    }
    if (cVar6 == '\0') {
      uVar5 = (undefined1)(int)(F32LO(dVar4) * F32HI(dVar4));
    }
    else {
      uVar5 = (undefined1)(int)(dVar4 * dVar4);
    }
    *(undefined1 *)(unsigned)(ar4_00 + 0x6c) = uVar5;
  }
  return 0xc;
}

__asm__(".globl _FUN_8c0c6a4c\n.set _FUN_8c0c6a4c, _FUN_8c0c6a4c_def\n");
