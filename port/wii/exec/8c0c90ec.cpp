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
undefined4 FUN_8c0c90ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c90ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0c86f4(ar4,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cbf4)) != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
              (0x8c2b59d0,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cbf4)),ar6,ar7));
    *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cbf4)) = 0xffffffff;
  }
  if (2 < *(le<short>* )(unsigned)(0x2d1ac + ar4)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,1,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c0c90ec\n.set FUN_8c0c90ec, FUN_8c0c90ec_def\n");

}
