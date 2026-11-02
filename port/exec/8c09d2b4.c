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
int FUN_8c09d2b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09d2b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if ((*(char *)(unsigned)(ar4 + 0x9a0) != '\x01') && (iVar1 = (int)*(char *)(unsigned)(ar4 + 0x6e0), iVar1 == 1)) {
    *(undefined1 *)(unsigned)(ar4 + 0x9a0) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x6d8) = 0x3f8ccccd;
    *(undefined4 *)(unsigned)(ar4 + 0x6dc) = 0x3e2e147b;
    iVar1 = 0x6d4;
    *(undefined4 *)(unsigned)(ar4 + 0x6d4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c09d2b4\n.set _FUN_8c09d2b4, _FUN_8c09d2b4_def\n");
