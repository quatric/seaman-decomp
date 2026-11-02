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
undefined4 FUN_8c23782c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c23782c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  if ((ar4[4] & 2) == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a914(0,ar4 + 5,vr6,vr7));
    puVar1 = ((void *)(unsigned)0x8c25a1ee);
    if (iVar2 < 0) {
      *(le<short>* )(unsigned)((int)ar4 + 0x42) = -(short)iVar2;
      return 0xffffffff;
    }
    *(le<undefined2>* )(unsigned)((int)ar4 + 0x42) = 0;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((uint)ar4[6] >> 0x10 & 0xff00,vr5,vr6,vr7));
    puVar1 = ((void *)(unsigned)0x8c2571fe);
    if (iVar2 == 0) {
      *(le<short>* )(unsigned)(ar4 + 0x10) = *(le<short>* )(unsigned)(ar4 + 0x10) + 1;
      ar4[4] = ar4[4] | 2;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,vr5,vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a608(*ar4,2,ar4[5],vr7));
      ar4[4] = ar4[4] | 8;
    }
  }
  else {
    *(le<short>* )(unsigned)(ar4 + 0x10) = *(le<short>* )(unsigned)(ar4 + 0x10) + 1;
  }
  return 1;
}

__asm__(".globl FUN_8c23782c\n.set FUN_8c23782c, FUN_8c23782c_def\n");

}
