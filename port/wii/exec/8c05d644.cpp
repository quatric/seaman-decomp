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
le<undefined4>*  s_FROGMANLINE_05d646_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_FROGMANLINE_05d646");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12a078);
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x214] = 0;
  ar4[0x215] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21e) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x879) = 0;
  ar4[0x21b] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21c) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x871) = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x217) = 0;
  ar4[0x219] = 0;
  ar4[0x21a] = 0;
  ar4[0x21f] = 0;
  ar4[0x220] = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0xd9,((undefined1 *)(unsigned)0x8c136998),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0x27,((undefined1 *)(unsigned)0x8c1369a4),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0x2f,((undefined1 *)(unsigned)0x8c1369b1),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4 + 0x37,((undefined1 *)(unsigned)0x8c1369bf),ar6,ar7); });
  ar4[0xe2] = 4;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c05d7f8(ar4 + 0x27,1,ar6,ar7));
  *(undefined1 *)(unsigned)((int)ar4 + 0x9a) = 2;
  ar4[0x222] = 1;
  ar4[0x221] = 1;
  ar4[0x218] = 0;
  ar4[0x21d] = 0x1b;
  ar4[0x223] = 0;
  ar4[0x224] = 0;
  ar4[0x225] = 0;
  ar4[0x226] = 0;
  return ar4;
}

__asm__(".globl s_FROGMANLINE_05d646\n.set s_FROGMANLINE_05d646, s_FROGMANLINE_05d646_def\n");

}
