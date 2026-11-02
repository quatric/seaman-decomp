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
int s_GRAPHICS_ENV_0d0006_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d0006");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar7_00;
  undefined4 ar5_00;
  char *ar6_00;
  le<undefined4>* ar7_01;
  uint uVar2;
  
  ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x28)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d47d),((le<undefined4>* )(fr0_ - 0x24))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d48a),1,2);
  }
  ar7_01 = &(*(le<undefined4>* )(fr0_ - 0x28));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13d47d);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d47d),ar7_01));
  if (iVar1 == 0) {
    ar7_01 = (le<undefined4>* )(unsigned)0x2;
    ar6_00 = (char *)(unsigned)0x1;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d4ad),1,2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c015ad4(ar4 + 2,((le<undefined4>* )(fr0_ - 0x24))[0],ar6_00,ar7_01); });
  ar5_00 = (*(le<undefined4>* )(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 8))))(ar4,(*(le<undefined4>* )(fr0_ - 0x28)),ar6_00,ar7_01));
  ar7_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 72)), get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c015bb8(ar4 + 2,ar5_00,ar6_00,ar7_01));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), thunk_FUN_8c0151e8(*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar1 + 4) + 4),0x17,ar6_00,ar7_01));
  ar4[8] = iVar1 + 4;
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(le<uint>* )(unsigned)(iVar1 + 4) = *(le<uint>* )(unsigned)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13d4d0),((undefined1 *)(unsigned)0x8c13d47d),ar7_00));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), report_error_message(((undefined1 *)(unsigned)0x8c13d4d7),((undefined1 *)(unsigned)0x8c13d4fb),1,2));
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_ENV_0d0006\n.set s_GRAPHICS_ENV_0d0006, s_GRAPHICS_ENV_0d0006_def\n");

}
