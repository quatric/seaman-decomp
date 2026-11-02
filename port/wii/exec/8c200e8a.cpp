#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c200e8a_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c200e8a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  le<undefined4>* ar6_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  ar6_00 = &(*(le<undefined4>* )(fr0_ - 0x24));
  uVar5 = ar7;
  (*(le<undefined4>* )(fr0_ - 0x20)) = ar5;
  (*(le<int>* )(fr0_ - 0x1c)) = ar6;
  if (((ar7 != 0) ||
      (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1ffb70(ar4,ar5,ar6,0)), uVar5 = uVar1, -1 < (int)uVar1)) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1fe534(ar4,(*(le<undefined4>* )(fr0_ - 0x20)),&(*(le<undefined4>* )(fr0_ - 0x24)),ar7)), -1 < (int)uVar1)) {
    uVar4 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x30) = 1;
    *(le<uint>* )(unsigned)(iVar2 + 0x34) = uVar5;
    if (uVar5 != 0) {
      iVar3 = (int)0x200;
      iVar2 = (*(le<int>* )(fr0_ - 0x1c));
      do {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1fee6c((*(le<undefined4>* )(fr0_ - 0x24)),iVar2,ar6_00,ar7));
        if ((int)uVar1 < 0) goto LAB_8c200f12;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + iVar3;
      } while (uVar4 < uVar5);
    }
    uVar1 = 0;
LAB_8c200f12:
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1fe9ae((*(le<undefined4>* )(fr0_ - 0x24)),0,ar6_00,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c200e8a\n.set FUN_8c200e8a, FUN_8c200e8a_def\n");

}
