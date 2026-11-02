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
undefined4 FUN_8c0fdaac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdaac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)*(byte *)(unsigned)(ar4 + 0xd0);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7));
  if (((iVar2 != 0) ||
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7)), iVar2 != 0)) ||
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7)), uVar3 = 0, iVar2 != 0)) {
    uVar1 = (uint)*(byte *)(unsigned)(ar4 + 0xd0);
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x8f1,ar4 + 0x3c,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c013fb4(uVar1 * 0x880 + ar4 + 0xd1,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x3c) + 0x10,
                         0x800,ar7));
  }
  return uVar3;
}

__asm__(".globl FUN_8c0fdaac\n.set FUN_8c0fdaac, FUN_8c0fdaac_def\n");

}
