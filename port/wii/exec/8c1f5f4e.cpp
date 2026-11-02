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
undefined4 s_no_device_1f5f4e_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_no_device_1f5f4e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c472d04) == 0) {
    ar4[2] = 0;
    ar4[3] = 0xffffffff;
    ar4[4] = 0;
    ar4[5] = 0;
  }
  else {
    ar4[2] = 0xffffffff;
    ar4[3] = 0;
    ar4[4] = 0xffffffff;
    ar4[5] = 0xffffffff;
  }
  *(le<undefined2>* )(unsigned)(ar4 + 6) = 0;
  *(le<undefined2>* )(unsigned)((int)ar4 + 0x1a) = 0;
  *(le<undefined2>* )(unsigned)((int)ar4 + 0x22) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 8) = 0;
  *(le<undefined2>* )(unsigned)((int)ar4 + 0x1e) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 7) = 0;
  ar4[10] = 0;
  ar4[9] = ((undefined1 *)(unsigned)0x8c26c7c4);
  return 0;
}

__asm__(".globl s_no_device_1f5f4e\n.set s_no_device_1f5f4e, s_no_device_1f5f4e_def\n");

}
