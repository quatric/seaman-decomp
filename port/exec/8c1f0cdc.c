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
undefined4 FUN_8c1f0cdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0cdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  
  if (*(short *)(unsigned)(ar4 + 2) == 0) {
    puVar3 = (ushort *)(unsigned)((*(int *)(unsigned)(ar4 + 0x28) + 1) * 0x40 + *(int *)(unsigned)(ar4 + 0xc));
    func_0x8c1f0974(puVar3 + 1,*(undefined4 *)(unsigned)(ar4 + 0x30),0x3c);
    if ((*puVar3 == 0xffff) ||
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f109c(0x3e,puVar3,vr6,vr7)), puVar3[0x1f] == uVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0cdc\n.set _FUN_8c1f0cdc, _FUN_8c1f0cdc_def\n");
