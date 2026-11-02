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
undefined4 FUN_8c0d6c9c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6c9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  float in_fr1 = 0;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined8 in_xd0 = 0;
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  cVar1 = '\0';
  *ar4 = (int)((ulonglong)in_dr4 >> 0x20);
  ar4[1] = (int)in_dr4;
  ar4[2] = (int)((ulonglong)in_dr6 >> 0x20);
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0xc,ar4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 8,ar5_00,ar6,ar7));
  if (cVar2 == '\0') {
    in_fr1 = (float)ar4[10];
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 10);
  }
  if (cVar1 == '\0') {
    in_fr1 = in_fr1 - 1.0;
  }
  else {
    in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) - CONCAT44D(0x3f800000,in_fr1),0);
  }
  if (cVar2 == '\0') {
    ar4[10] = in_fr1;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 10) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4 + 4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4 + 0x10,ar5_00,ar6,ar7));
  ar4[0x18] = 0;
  if (cVar2 == '\0') {
    ar4[0x14] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x14) = (ulonglong)(uint)in_fr1;
  }
  ar4[0x19] = 0;
  return 100;
}

__asm__(".globl _FUN_8c0d6c9c\n.set _FUN_8c0d6c9c, _FUN_8c0d6c9c_def\n");
