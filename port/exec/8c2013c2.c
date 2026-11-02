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
int FUN_8c2013c2_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2013c2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(uint *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  int iVar3;
  uint uVar4;
  
  (*(int *)(fr0_ - 0x24)) = ar7;
  (*(undefined4 *)(fr0_ - 0x20)) = ar5;
  (*(int *)(fr0_ - 0x1c)) = ar6;
  if (s0 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1ffb70(ar4,ar5,ar6,ar7));
    if (iVar1 < 0) {
      return iVar1;
    }
    s0 = iVar1 - (*(int *)(fr0_ - 0x24));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fe534(ar4,(*(undefined4 *)(fr0_ - 0x20)),&(*(undefined4 *)(fr0_ - 0x28)),ar7));
  iVar1 = (*(int *)(fr0_ - 0x1c));
  if (-1 < iVar2) {
    ar6_00 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(undefined4 *)(unsigned)(iVar2 + 0x30) = 1;
    *(uint *)(unsigned)(iVar2 + 0x34) = s0;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20135c((*(undefined4 *)(fr0_ - 0x28)),(*(int *)(fr0_ - 0x24)),0,ar7));
    uVar4 = 0;
    if (s0 != 0) {
      iVar3 = (int)0x200;
      do {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fee6c((*(undefined4 *)(fr0_ - 0x28)),iVar1,ar6_00,ar7));
        if (iVar2 < 0) goto LAB_8c201442;
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + iVar3;
      } while (uVar4 < s0);
    }
    iVar2 = 0;
LAB_8c201442:
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fe9ae((*(undefined4 *)(fr0_ - 0x28)),0,ar6_00,ar7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2013c2\n.set _FUN_8c2013c2, _FUN_8c2013c2_def\n");
