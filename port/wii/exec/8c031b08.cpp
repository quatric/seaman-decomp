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
int FUN_8c031b08_def(le<int>* ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c031b08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(le<int>* )(unsigned)(0x178 + (int)ar4);
  if (iVar1 == 0) {
    if (ar6 == 1) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x2c))))(ar4,ar5,1,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031b58((int)ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    iVar1 = 0x124;
    *(le<undefined4>* )(unsigned)(0x124 + (int)ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl FUN_8c031b08\n.set FUN_8c031b08, FUN_8c031b08_def\n");

}
