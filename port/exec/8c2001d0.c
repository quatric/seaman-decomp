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
undefined4 FUN_8c2001d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2001d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int in_r3 = 0;
  int iVar3;
  int a6;
  int iVar4;
  int iVar5;
  int unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  uint uVar6;
  
  uVar1 = 0xfffa;
  iVar4 = (int)0x200;
  iVar3 = *(int *)(unsigned)(ar4 + in_r3 + 0x1c);
  iVar5 = *(int *)(unsigned)(iVar3 + 0x18);
  uVar6 = *(uint *)(unsigned)(iVar3 + 0x14);
  iVar3 = *(int *)(unsigned)(ar4 + in_r3 + 0x28);
  if (0 < iVar5) {
    do {
      a6 = iVar3;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fbb6c(unaff_r12,uVar6 & 0xffff,iVar3,ar7));
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2009d0(unaff_r12,uVar6 & 0xffff,a6,ar7));
      if ((uVar6 & 0xffff) == uVar1) {
        return 0;
      }
      unaff_r11 = unaff_r11 + 1;
      iVar3 = iVar3 + iVar4;
    } while (unaff_r11 < iVar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c2001d0\n.set _FUN_8c2001d0, _FUN_8c2001d0_def\n");
