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
int FUN_8c2036a0_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2036a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int ar5_00;
  int iVar4;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c275430) == ar4) {
    *(uint *)(unsigned)(ar5 + 0x14) = ar4;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be((*(undefined4 *)(unsigned)(unsigned)0x8c27542c) + 4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar5 + 0x1c) = uVar3;
    iVar2 = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c275430) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27542c) = 0;
  }
  else {
    ar5_00 = ar4 << 1;
    iVar4 = ar5;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 4) == 0) {
      uVar3 = 8;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2(0,ar5_00,ar5,8));
    }
    else {
      uVar3 = 8;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2((uint)((*(undefined4 *)(unsigned)(unsigned)0x8c275410) < (*(undefined4 *)(unsigned)(unsigned)0x8c275424)),ar5_00,ar5,8));
    }
    if (iVar2 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c27542c) = *(int *)(unsigned)(ar5 + 0x1c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c275430) = ar4;
      *(uint *)(unsigned)(ar5 + 0x14) = ar4;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(*(undefined4 *)(unsigned)(ar5 + 0x1c),ar5_00,iVar4,uVar3));
      *(undefined4 *)(unsigned)(ar5 + 0x1c) = uVar3;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2036a0\n.set _FUN_8c2036a0, _FUN_8c2036a0_def\n");
