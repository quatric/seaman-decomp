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
undefined4 FUN_8c0c236c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c236c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (ar5 < 0x19) {
    if (ar5 < 0x18) {
      if (0xe < ar5) {
        return ar5;
      }
      if (1 < ar5) {
                    
        switch((uint)ar5) {
        case 2:
          return 4;
        default:
          return ar5;
        case 4:
          return 8;
        case 5:
          return 10;
        case 7:
        case 9:
        case 0xb:
          goto switchD_8c0c2396_caseD_3;
        case 0xc:
          return 0xd;
        }
      }
      return ar5;
    }
  }
  else if (ar5 != 0x1a) {
    return ar5;
  }
switchD_8c0c2396_caseD_3:
  return 0xb;
}

__asm__(".globl FUN_8c0c236c\n.set FUN_8c0c236c, FUN_8c0c236c_def\n");

}
