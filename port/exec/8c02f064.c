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
undefined4 * FUN_8c02f064_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f064";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  *ar4 = ((undefined1 *)(unsigned)0x8c129c70);
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eb1c(ar4 + 0x11,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7));
  ar4[1] = 0;
  ar4[0x1b] = 0;
  ar4[3] = 0;
  ar4[0xf] = 2;
  ar4[4] = 0;
  ar4[9] = 0;
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[5] = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x91) = 0;
  ar4[0x10] = 0;
  ar4[0x25] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x26) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x99) = 0;
  if (cVar1 == '\0') {
    ar4[10] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
    ar4[0x1c] = 0xc7c35000;
    ar4[0x1d] = 0xc7c35000;
    ar4[0x1e] = 0xc7c35000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xc) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = 0x88c7c35000;
    *(undefined8 *)(unsigned)(ar4 + 0x1d) = 0x88c7c35000;
    *(undefined8 *)(unsigned)(ar4 + 0x1e) = 0x88c7c35000;
  }
  ar4[0x22] = 0;
  ar4[0x23] = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x85) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x87) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x86) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  *(undefined1 *)(unsigned)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)(unsigned)((int)ar4 + 0x9b) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02f064\n.set _FUN_8c02f064, _FUN_8c02f064_def\n");
