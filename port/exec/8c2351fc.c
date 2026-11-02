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
undefined4 FUN_8c2351fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2351fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  double in_dr2 = 0;
  undefined4 uVar3;
  undefined8 in_dr4 = 0;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fVar2 = F32HI(in_dr4);
  uVar1 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c277ab8) + ar4 * 4);
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c237124(uVar1,ar5,ar6,ar7); });
  uVar3 = (undefined4)in_dr4;
  if (ar4 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236510(uVar1,ar5,ar6,ar7)); *(unsigned *)(unsigned)0x8c4aa3e4 = (unsigned)(unsigned long)uVar1;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2365e2(uVar1,ar5,ar6,ar7)); *(unsigned *)(unsigned)0x8c4aa3e4 = (unsigned)(unsigned long)uVar1;
  }
  if (cVar5 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = CONCAT44D(0xbf800000,uVar3);
    uVar3 = 0xbf800000;
    bVar4 = fVar2 < -1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = -CONCAT44D(0x3f800000,uVar3);
    uVar3 = (undefined4)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) >> 0x20);
    bVar4 = CONCAT44D(in_fr14,fVar2) < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0);
  }
  if (bVar4) {
    if (cVar6 == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar3);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = in_xd2;
    }
    if (cVar5 == '\0') {
      fVar2 = F32LO(in_dr2) / fVar2;
    }
    else {
      fVar2 = SUB84(in_dr2 / CONCAT44D(in_fr14,fVar2),0);
    }
  }
  else {
    fVar2 = 1.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = in_xd2;
  }
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = CONCAT44D(uVar1,fVar2);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c2351fc\n.set _FUN_8c2351fc, _FUN_8c2351fc_def\n");
