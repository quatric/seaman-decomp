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
int s_GRAPHICS_ENV_0d5ee6_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d5ee6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 ar7_00;
  le<int>* ar5_00;
  char *ar6_00;
  le<le<int>*>* ar7_01;
  uint uVar3;
  
  ((le<undefined4>* )(fr0_ - 0x14))[0] = 0;
  (*(le<unsigned>* )(fr0_ - 0x18) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13f8cb),((le<undefined4>* )(fr0_ - 0x14))));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), report_error_message(((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13fbaa),0,2));
  }
  ar7_01 = (le<le<int>*>*)(((le<int>*  *)(fr0_ - 0x18)));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13f8cb),ar7_01));
  if (iVar2 == 0) {
    ar7_01 = (le<le<int>*>* )(unsigned)0x2;
    ar6_00 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 48)), report_error_message(((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13fbd2),0,2));
  }
  uVar1 = 0;
  while (uVar3 = uVar1, uVar3 < (uint)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[1]) {
    *(le<uint>* )(unsigned)(uVar3 * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)) + 4) = *(le<uint>* )(unsigned)(uVar3 * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)) + 4) | 0x80000000
    ;
    (*(le<uint>* )(fr0_ - 0x30)) = uVar3;
    uVar1 = uVar3 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c015ad4(ar4 + 2,((le<undefined4>* )(fr0_ - 0x14))[0],ar6_00,ar7_01); });
  ar5_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 8))))(ar4,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),ar6_00,ar7_01));
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fbfa),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar2 == 0) {
    iVar2 = report_error_message
                      (((undefined1 *)(unsigned)0x8c13fc05),((undefined1 *)(unsigned)0x8c13fc1c),0,2);
  }
  return iVar2;
}

__asm__(".globl s_GRAPHICS_ENV_0d5ee6\n.set s_GRAPHICS_ENV_0d5ee6, s_GRAPHICS_ENV_0d5ee6_def\n");

}
