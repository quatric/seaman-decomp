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
int FUN_8c0d89d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d89d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_0d8a98(ar4 + 0x78,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_0d8a90(ar4 + 0x78,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8a88(ar4 + 0x78,ar5,ar6,ar7));
  if (iVar3 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_2c_0d7ca8(iVar4 * 0x38 + iVar2,ar5,ar6,ar7));
      if (iVar3 == 1) {
        ar6 = 0;
        ar5 = ar4 + 0x6e50;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7900(iVar4 * 0x38 + iVar2,ar5,0,ar7));
      }
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c0d89d8\n.set FUN_8c0d89d8, FUN_8c0d89d8_def\n");

}
