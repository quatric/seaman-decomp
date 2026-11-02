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
undefined4 FUN_8c20c7e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20c7e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 1) {
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08) & 1;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6,ar7));
    iVar3 = uVar1 * 0x20;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x124,*(undefined4 *)(unsigned)(iVar3 + -0x73b55fdc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(300,*(undefined4 *)(unsigned)(iVar3 + -0x73b55fd8),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x128,*(undefined4 *)(unsigned)(iVar3 + -0x73b55fd0),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x130,*(undefined4 *)(unsigned)(iVar3 + -0x73b55fcc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x164,*(undefined4 *)(unsigned)(iVar3 + -0x73b55fd4),ar6,ar7));
    ar5 = 0x80000000;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x144,0x80000000,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a876(0x144,ar5,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f18) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f14) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014);
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c20c7e0\n.set _FUN_8c20c7e0, _FUN_8c20c7e0_def\n");
