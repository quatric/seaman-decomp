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
uint FUN_8c011e10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c011e10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  double in_dr0 = 0;
  float extraout_fr3 = 0;
  float fVar3;
  undefined4 extraout_fr2 = 0;
  undefined4 uVar4;
  longlong in_dr4 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = (fr0_ + (int)0xfffffff4);
  fVar3 = F32HI(in_dr4);
  uVar2 = 0;
  ar5_00 = 8;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar3 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar3) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 3) != 0) {
    return uVar2;
  }
  uVar4 = 0x3f490fdb;
  uVar1 = ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c011c5c((fr0_ + (int)0xfffffff4),8,ar6,ar7); });
  fVar3 = extraout_fr3;
  if (cVar7 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),uVar4);
    fVar3 = 0.7853982;
  }
  if (cVar6 == '\0') {
    bVar5 = fVar3 < F32HI(in_dr0);
  }
  else {
    bVar5 = CONCAT44D(extraout_fr2,fVar3) < in_dr0;
  }
  if (bVar5) {
    return uVar1;
  }
  uVar2 = (*(uint *)(fr0_ - 0xc)) & 7;
  if ((uVar2 == 0) || (uVar2 == 7)) {
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7); });
  }
  else if ((uVar2 == 1) || (uVar2 == 2)) {
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7); });
  }
  else if ((uVar2 == 3) || (uVar2 == 4)) {
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7); });
  }
  else if ((uVar2 == 5) || (uVar2 == 6)) {
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7); });
  }
  return uVar2;
}

__asm__(".globl _FUN_8c011e10\n.set _FUN_8c011e10, _FUN_8c011e10_def\n");
