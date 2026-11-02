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
undefined4 FUN_8c1f0a2a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0a2a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *unaff_r13 = 0;
  
  uVar2 = 0xff;
  pbVar6 = (byte *)(unsigned)(ar5 + 2);
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != 0xff) goto LAB_8c1f0a54;
    ar4 = ar4 + -1;
  } while (0 < ar4);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f109c(0x3e,unaff_r13,ar6,ar7));
  if ((uint)*(ushort *)(unsigned)(unaff_r13 + 0x3e) == (uVar3 & 0xffff)) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *unaff_r13 = (char)uVar2;
      unaff_r13 = unaff_r13 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f0a2a\n.set _FUN_8c1f0a2a, _FUN_8c1f0a2a_def\n");
