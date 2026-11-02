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
undefined4 FUN_8c0d2f14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d2f14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x18,ar5,ar6,ar7));
  uVar2 = CONCAT44(0x3f800000,in_fr1);
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = uVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x28,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    uVar1 = (uint)uVar2;
    *(undefined4 *)(unsigned)(ar4 + 0x10) = 0x40800000;
  }
  else {
    uVar1 = 0x40800000;
    *(undefined8 *)(unsigned)(ar4 + 0x10) = 0x430c000040800000;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x430c0000;
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x3ee66666;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3c) = (ulonglong)uVar1;
    *(undefined8 *)(unsigned)(ar4 + 0x40) = 0x3ee66666430c0000;
    uVar1 = 0x3ee66666;
    *(undefined8 *)(unsigned)(ar4 + 0x38) = 0x803ee66666;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x80) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x84) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x84) = CONCAT44(0x3f800000,uVar1);
  }
  return 0x84;
}

__asm__(".globl _FUN_8c0d2f14\n.set _FUN_8c0d2f14, _FUN_8c0d2f14_def\n");
