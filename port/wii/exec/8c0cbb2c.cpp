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
undefined4 FUN_8c0cbb2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cbb2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),0x8c3eb334,3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,3,ar7));
  ar6_00 = 3;
  ar5_00 = 0x8c3eb334;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(0x8c436a28,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf1bc(0x8c436a28,0x8c3eb334,ar6_00,ar7));
  return 0;
}

__asm__(".globl FUN_8c0cbb2c\n.set FUN_8c0cbb2c, FUN_8c0cbb2c_def\n");

}
