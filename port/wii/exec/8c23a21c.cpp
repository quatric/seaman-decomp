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
undefined4 FUN_8c23a21c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c23a21c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c238e98(&(*(le<int>* )(fr0_ - 0x14)),4,ar6,ar7));
  if ((*(le<int>* )(fr0_ - 0x14)) != 0x54525650) {
    return 0xfffffffc;
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c238e98(((undefined1 *)(fr0_ - 0x10)),0xc,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c238eba(0xfffffff0,1,ar6,ar7));
  (*(le<uint>* )(fr0_ - 0xc)) = 0xff00 & (*(le<uint>* )(fr0_ - 0xc));
  if (((((*(le<uint>* )(fr0_ - 0xc)) != (int)0x500) && ((*(le<uint>* )(fr0_ - 0xc)) != (int)0x600)) &&
      ((*(le<uint>* )(fr0_ - 0xc)) != (int)0x700)) && ((*(le<uint>* )(fr0_ - 0xc)) != (int)0x800)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c23a21c\n.set FUN_8c23a21c, FUN_8c23a21c_def\n");

}
