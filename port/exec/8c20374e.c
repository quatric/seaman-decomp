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
int FUN_8c20374e_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20374e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  int iVar5;
  int ar4_00;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  ar5_00 = ar4 << 1;
  iVar5 = ar5;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 4) == 0) {
    uVar4 = 8;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2(0,ar5_00,ar5,8));
  }
  else {
    uVar4 = 8;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2((uint)((*(undefined4 *)(unsigned)(unsigned)0x8c275410) <= (*(undefined4 *)(unsigned)(unsigned)0x8c275424)),ar5_00,ar5,8));
  }
  if (iVar2 == 0) {
    ar4_00 = *(int *)(unsigned)(ar5 + 0x1c);
    *(uint *)(unsigned)(ar5 + 0x14) = ar4;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(ar4_00,ar5_00,iVar5,uVar4));
    *(undefined4 *)(unsigned)(ar5 + 0x1c) = uVar3;
    *(uint *)(unsigned)(ar6 + 0x14) = ar4;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(ar4_00 + 4,ar5_00,iVar5,uVar4));
    *(undefined4 *)(unsigned)(ar6 + 0x1c) = uVar4;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c20374e\n.set _FUN_8c20374e, _FUN_8c20374e_def\n");
