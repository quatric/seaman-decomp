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
undefined4 * FUN_8c016b64_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c016b64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  undefined4 in_fr4 = 0;
  undefined8 in_xd14 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016a7c(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c129974);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7));
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xc) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xd] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xd) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xe] = 0;
    ar4[0xf] = in_fr4;
    ar4[10] = in_fr4;
    ar4[9] = in_fr4;
    ar4[8] = in_fr4;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xe) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0xf) = in_xd14;
    *(undefined8 *)(unsigned)(ar4 + 10) = in_xd14;
    *(undefined8 *)(unsigned)(ar4 + 9) = in_xd14;
    *(undefined8 *)(unsigned)(ar4 + 8) = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fa4(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c016b64\n.set _FUN_8c016b64, _FUN_8c016b64_def\n");
