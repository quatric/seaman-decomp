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
undefined4 FUN_8c0d1b90_def(le<int>* ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1b90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a5;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    a5 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(*ar4,ar5,ar6,ar7));
    if (ar5 == 1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(*ar4 + 8)))))(*ar4,a5,ar6,ar7));
      ar6 = (int)(short)uVar1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xec + *(le<int>* )(unsigned)(*ar4 + 8)))))(*ar4,0x8c3eb334,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar4 + 8) + 0x58))))(*ar4,0x8c3eb324,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(0x8c3eb324,ar4,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0d1b90\n.set FUN_8c0d1b90, FUN_8c0d1b90_def\n");

}
