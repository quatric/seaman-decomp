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
undefined4 FUN_8c1f222c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f222c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int ar5_00;
  int iVar1;
  undefined4 ar6_00;
  le<int>* piVar2;
  int ar4_00;
  int iVar3;
  
  ar6_00 = 0;
  if (ar5 == 0) {
    ar5 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[4];
  }
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f2cce(ar4,ar5,0,ar7));
  if (ar5_00 == 0) {
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f175c(0xfffffff8,0,ar6_00,ar7));
  }
  else {
    iVar3 = (ar5_00 + -1) * 0x2c;
    ar4_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0)[6];
    for (iVar1 = 0; iVar1 < *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0); iVar1 = iVar1 + 1) {
      if (*(le<short>* )(unsigned)(ar4_00 + 0x4c) == 0) {
        piVar2 = (le<int>* )(unsigned)(ar5 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f21bc(ar4_00,ar5_00,iVar1,iVar3));
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f175c(0,ar5_00,iVar1,iVar3));
        return ar4_00;
      }
      ar4_00 = ar4_00 + 0x54;
    }
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f175c(0xfffffff7,ar5_00,((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2739e0),iVar3));
  }
  return 0;
}

__asm__(".globl FUN_8c1f222c\n.set FUN_8c1f222c, FUN_8c1f222c_def\n");

}
