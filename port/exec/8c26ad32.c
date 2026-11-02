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
undefined4 FUN_8c26ad32_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26ad32";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,ar6,ar7));
  if (ar6 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(*(undefined4 *)(unsigned)(ar4 + 0x40),*(undefined4 *)(unsigned)(ar4 + 0x10),vr6,vr7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1242_sdMemBlkSetPrm_return__26acaa(ar4,ar5,iVar2 * 8,ar7));
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26ad32\n.set _FUN_8c26ad32, _FUN_8c26ad32_def\n");
