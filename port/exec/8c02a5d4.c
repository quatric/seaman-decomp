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
undefined4 FUN_8c02a5d4_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a5d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (*(undefined4 *)(fr0_ - 0x58)) = *ar5;
  (*(undefined4 *)(fr0_ - 0x54)) = ar5[1];
  (*(undefined4 *)(fr0_ - 0x50)) = ar5[2];
  (*(undefined4 *)(fr0_ - 0x1c)) = in_fr1;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c024340(((undefined1 *)(fr0_ - 0x4c)),ar5,ar6,ar7));
  if (cVar1 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x64)) = 0;
    (*(undefined4 *)(fr0_ - 0x10)) = 0;
  }
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  (*(undefined4 *)(fr0_ - 0x18)) = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c212740(((undefined1 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x58)),&(*(undefined4 *)(fr0_ - 0x64)),ar7); });
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)ar6 = (*(undefined4 *)(fr0_ - 0x64));
    *(undefined4 *)(unsigned)((int)ar6 + 4) = (*(undefined4 *)(fr0_ - 0x60));
  }
  else {
    *ar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x60)),(*(undefined4 *)(fr0_ - 0x64)));
    *(ulonglong *)(unsigned)((int)ar6 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x5c)),(*(undefined4 *)(fr0_ - 0x60)));
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar6 + 1) = (*(undefined4 *)(fr0_ - 0x5c));
  }
  else {
    ar6[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x58)),(*(undefined4 *)(fr0_ - 0x5c)));
  }
  return 0x10;
}

__asm__(".globl _FUN_8c02a5d4\n.set _FUN_8c02a5d4, _FUN_8c02a5d4_def\n");
