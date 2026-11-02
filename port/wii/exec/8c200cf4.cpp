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
undefined4 FUN_8c200cf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200cf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  
  piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x1c));
  if ((((((0 < *piVar2) && (*piVar2 <= (int)0x7ff)) && (*piVar2 == piVar2[2])) &&
       ((-1 < piVar2[3] && (piVar2[3] < *piVar2)))) &&
      (((-1 < piVar2[5] && ((piVar2[5] < *piVar2 && (-1 < piVar2[0xd])))) &&
       (piVar2[0xd] <= *piVar2)))) &&
     (((-1 < piVar2[0xe] && (piVar2[0xe] <= *piVar2)) &&
      ((*(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4783dc + 8) != 0 ||
       ((piVar2[4] <= (int)*(le<short>* )(unsigned)(ar4 + 0x10) && (piVar2[6] <= (int)*(le<short>* )(unsigned)(ar4 + 0x12)))))))
     )) {
    iVar1 = *piVar2;
    if (iVar1 == 0xff) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
    }
    else if (iVar1 == 0x1ff) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
    }
    else if (iVar1 == 0x3ff) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 2;
    }
    else {
      if (iVar1 != 0x7ff) {
        return 0xffffffff;
      }
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 3;
    }
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c200cf4\n.set FUN_8c200cf4, FUN_8c200cf4_def\n");

}
