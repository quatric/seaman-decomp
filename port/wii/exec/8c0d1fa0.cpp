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
int s_GRAPHICS_ENV_0d1fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d1fa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar7_00;
  int iVar1;
  le<undefined*>* ar5_00;
  
  ar5_00 = (le<unsigned char*>*)(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13f33c));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); Class_129920_m0_015248(0x8c4377f4,&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13f33c),ar6,ar7); });
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(0x8c4377f4,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar4,((undefined1 *)(unsigned)0x8c13f8be),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    iVar1 = report_error_message
                      (((undefined1 *)(unsigned)0x8c13f8d8),
                       ((undefined1 *)(unsigned)0x8c13f8fe),0,2);
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_ENV_0d1fa0\n.set s_GRAPHICS_ENV_0d1fa0, s_GRAPHICS_ENV_0d1fa0_def\n");

}
