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
uint FUN_8c012328_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c012328";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  uint ain0;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  double in_dr0 = 0;
  float extraout_fr3 = 0;
  float fVar1;
  undefined4 extraout_fr2 = 0;
  undefined4 uVar2;
  undefined8 in_dr4 = 0;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar4_00 = (fr0_ + (int)0xffffffec);
  ain0 = 4;
  fVar1 = F32HI(in_dr4);
  ar6_00 = 0;
  ar5_00 = 8;
  bVar3 = false;
  if (fVar1 == 0.0) {
    bVar3 = false;
  }
  else if (ABS(fVar1) == INFINITY) {
    ain0 = 2;
    bVar3 = true;
  }
  if (!bVar3) {
    uVar2 = 0x3f490fdb;
    ain0 = ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x14))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c011c5c((fr0_ + (int)0xffffffec),8,0,ar7); });
    fVar1 = extraout_fr3;
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),uVar2);
      fVar1 = 0.7853982;
    }
    if (cVar4 == '\0') {
      bVar3 = fVar1 < F32HI(in_dr0);
    }
    else {
      bVar3 = CONCAT44D(extraout_fr2,fVar1) < in_dr0;
    }
    if (!bVar3) {
      ain0 = (*(uint *)(fr0_ - 0x14)) & 7;
      if ((ain0 == 0) || (ain0 == 7)) {
        ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7); });
      }
      else if ((ain0 == 1) || (ain0 == 2)) {
        ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7); });
      }
      else if ((ain0 == 3) || (ain0 == 4)) {
        ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7); });
      }
      else if ((ain0 == 5) || (ain0 == 6)) {
        ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7); });
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c012328\n.set _FUN_8c012328, _FUN_8c012328_def\n");
