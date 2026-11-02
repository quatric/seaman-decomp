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
undefined4 FUN_8c20b5a0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20b5a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) = 1;
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f10) & 1;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 0x10) != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(8,2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(8,0,ar6,ar7));
  }
  iVar3 = uVar2 * 0x20;
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x2c,*(undefined4 *)(unsigned)(iVar3 + -0x73b55fe4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x20,*(undefined4 *)(unsigned)(iVar3 + -0x73b55fd0),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x60,ar4[2],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x48,*ar4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x4c,ar4[1],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x68,ar4[3],ar6,ar7));
  uVar4 = ar4[4];
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x6c,uVar4,ar6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
  bVar1 = false;
  do {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) == 0) goto LAB_8c20b63e;
    (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),uVar4,ar6,ar7));
  } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd4));
  bVar1 = true;
LAB_8c20b63e:
  if (bVar1) {
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x48,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9e78),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x4c,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9e70),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x68,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60),ar6,ar7));
    uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64);
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x6c,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64),ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f24) = 0;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),uVar4,ar6,ar7));
    return uVar4;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x8c,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9d60),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x88,(*(undefined4 *)(unsigned)(unsigned)0x8c4a9d5c) & 0xfffffff0,ar6,ar7));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x14,0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c20b5a0\n.set _FUN_8c20b5a0, _FUN_8c20b5a0_def\n");
