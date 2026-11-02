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
int s_GRAPHICS_COMMON_0dbb1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_COMMON_0dbb1a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* ar7_00;
  int iVar1;
  le<undefined*>* ar5_00;
  uint uVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 0xc,((undefined1 *)(unsigned)0x8c162770),ar6,ar7); });
  ar5_00 = (le<unsigned char*>*)(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c1622e4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 4) + 8))))((le<int>* )(unsigned)(ar4 + 4),&(*(le<undefined4>* )(unsigned)(unsigned)0x8c1622e4),ar6,ar7));
  ar7_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 4,ar5_00,ar6,ar7));
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(le<uint>* )(unsigned)(iVar1 + 4) = *(le<uint>* )(unsigned)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fd91),((undefined1 *)(unsigned)0x8c13f7c0),ar7_00));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13fd96),((undefined1 *)(unsigned)0x8c13f91d),0,2));
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_COMMON_0dbb1a\n.set s_GRAPHICS_COMMON_0dbb1a, s_GRAPHICS_COMMON_0dbb1a_def\n");

}
