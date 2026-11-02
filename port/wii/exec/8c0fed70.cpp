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
int s_CItemGLoader_RegistToLoad_0fed74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CItemGLoader_RegistToLoad_0fed74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fecb0(ar4 + 0x4c,ar5,ar6,ar7));
  if (ar5_00 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x2c9,
               (&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x2dd,1,2));
  }
  else {
    *(le<undefined4>* )(unsigned)(ar5_00 + 8) = ar5;
    *(le<undefined4>* )(unsigned)(ar5_00 + 0xc) = ar6;
    *(le<undefined4>* )(unsigned)(ar5_00 + 0x10) = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe8c4(ar4,ar5_00,ar6_00,ar7));
  }
  return ar5_00;
}

__asm__(".globl s_CItemGLoader_RegistToLoad_0fed74\n.set s_CItemGLoader_RegistToLoad_0fed74, s_CItemGLoader_RegistToLoad_0fed74_def\n");

}
