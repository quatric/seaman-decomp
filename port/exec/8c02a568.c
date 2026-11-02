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
undefined4 FUN_8c02a568_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a568";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = '\0';
  (*(undefined4 *)(fr0_ - 0x58)) = *ar5;
  (*(undefined4 *)(fr0_ - 0x54)) = ar5[1];
  (*(undefined4 *)(fr0_ - 0x50)) = ar5[2];
  (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c024340(((undefined1 *)(fr0_ - 0x4c)),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 200)); FUN_8c212740(((undefined1 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x58)),(fr0_ + (int)0xffffff9c),ar7); });
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
  return 8;
}

__asm__(".globl _FUN_8c02a568\n.set _FUN_8c02a568, _FUN_8c02a568_def\n");
