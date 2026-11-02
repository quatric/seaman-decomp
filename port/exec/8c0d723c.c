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
int FUN_8c0d723c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d723c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint in_fr1 = 0;
  uint extraout_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 0x168);
  if (0 < iVar1) {
    iVar1 = *(int *)(unsigned)(ar4 + 0x168) + -1;
    *(int *)(unsigned)(ar4 + 0x168) = iVar1;
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7288(ar4,0,ar6,ar7));
      in_fr1 = extraout_fr1;
    }
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)in_fr1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d723c\n.set _FUN_8c0d723c, _FUN_8c0d723c_def\n");
