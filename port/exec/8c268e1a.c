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
int FUN_8c268e1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268e1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int a5;
  
  if (*(int *)(unsigned)(ar4 + 0x5c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    ((int *)(fr0_ - 0x24))[1] = 1;
    ((int *)(fr0_ - 0x24))[0] = 1;
    for (a5 = 0; a5 < (int)(uint)*(byte *)(unsigned)(ar4 + 3); a5 = a5 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)) + 0x50))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38)),a5,ar6,ar7));
      if (iVar2 != 1) {
        ((int *)(fr0_ - 0x24))[a5] = 0;
      }
    }
    if ((((int *)(fr0_ - 0x24))[0] == 0) || (((int *)(fr0_ - 0x24))[1] == 0)) {
      iVar1 = 0;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c268e1a\n.set _FUN_8c268e1a, _FUN_8c268e1a_def\n");
