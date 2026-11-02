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
undefined4 FUN_8c0d7100_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7100");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a5;
  undefined1 *ar6_00;
  int a7;
  
  ar6_00 = ((undefined1 *)(fr0_ - 0x14));
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  a7 = ar4 + 0x30;
  a5 = ar4 + 4;
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0xc4) + 0xc))))((le<int>* )(unsigned)(ar4 + 0xc4),a5,((undefined1 *)(fr0_ - 0x14)),a7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d7154(ar4,a5,ar6_00,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6_00,a7));
  return uVar1;
}

__asm__(".globl FUN_8c0d7100\n.set FUN_8c0d7100, FUN_8c0d7100_def\n");

}
