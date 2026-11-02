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
undefined4 FUN_8c25ff3e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25ff3e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)(unsigned)(ain0 + ar4) == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x50) = ar5;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar6,(int)*(char *)(unsigned)(ar4 + 0xf),vr6,vr7));
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x50) = ar5;
    iVar2 = (int)*(char *)(unsigned)(ar4 + 0xd);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar6,(iVar2 >> 3) * (int)*(char *)(unsigned)(ar4 + 0xe),vr6,vr7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x54) = uVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x84) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xa4) = 0;
  return 0xa4;
}

__asm__(".globl _FUN_8c25ff3e\n.set _FUN_8c25ff3e, _FUN_8c25ff3e_def\n");
