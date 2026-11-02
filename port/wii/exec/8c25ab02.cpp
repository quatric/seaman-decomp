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
undefined4 FUN_8c25ab02_def(le<uint>* ar4,undefined4 ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c25ab02");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint ar6_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ar7 & 0xfffffffc;
  if (uVar2 != 0) {
    if ((*ar4 & 0xffff) == 3) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a9cc(ar4,ar5,ar6,ar7));
    }
    else {
      if ((*ar4 >> 0x10 & 0xff00) == (int)0x200) {
        iVar1 = 4;
      }
      else {
        iVar1 = 0;
      }
      uVar3 = (ar6 & 0xfffffffc) + iVar1;
      ar6_00 = ar4[5] - uVar3;
      if (ar4[5] <= uVar3) {
        return 7;
      }
      if (uVar2 < ar6_00) {
        ar6_00 = uVar2;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20a8e0(uVar3 + ar4[7],ar5,ar6_00,ar7));
    }
  }
  return 0;
}

__asm__(".globl FUN_8c25ab02\n.set FUN_8c25ab02, FUN_8c25ab02_def\n");

}
