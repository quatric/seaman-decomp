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
int FUN_8c01c560_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01c560";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c1fc258((*(undefined4 *)(unsigned)(unsigned)0x8c2791b4),((char *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 == -0xfb) {
    iVar1 = 0x2450;
    ar4[*ar4 * 10 + 0x914] = 4;
  }
  else if (iVar1 != -1) {
    if (iVar1 == 0) {
      if (((char *)(fr0_ - 0x28))[0] == '\0') {
        iVar1 = 0x2450;
        ar4[*ar4 * 10 + 0x914] = 4;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01c68c(((char *)(fr0_ - 0x28)),ar4 + *ar4 * 10 + 0x917,ar6,ar7));
        if (iVar1 == 0) {
          iVar1 = 0x2450;
          ar4[*ar4 * 10 + 0x914] = 1;
        }
        else {
          ar4[*ar4 * 10 + 0x914] = 5;
          iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); strcpy(ar4 + *ar4 * 10 + 0x917,((char *)(fr0_ - 0x28)),ar6,ar7); });
        }
      }
    }
    else {
      iVar1 = 0x2450;
      ar4[*ar4 * 10 + 0x914] = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01c560\n.set _FUN_8c01c560, _FUN_8c01c560_def\n");
