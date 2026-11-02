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
undefined4 s_GRAPHICS_ENV_0ca2d4_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0ca2d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  char *pcVar2;
  le<undefined4>* puVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  ((le<undefined4>* )(fr0_ - 0x18))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x1c)) = 0;
  iVar1 = *(le<int>* )(unsigned)(ar5 + 4);
  if (iVar1 == 0) {
    puVar3 = ((le<undefined4>* )(fr0_ - 0x18));
    pcVar2 = ((undefined1 *)(unsigned)0x8c13d1c2);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0209b0(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d1c2),puVar3));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c015ad4(0x8c437030,((le<undefined4>* )(fr0_ - 0x18))[0],pcVar2,puVar3); });
      *(le<undefined4>* )(unsigned)(ar5 + 4) = 1;
    }
    else if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d1f0),0,2));
    }
  }
  else if (iVar1 == 1) {
    puVar3 = &(*(le<undefined4>* )(fr0_ - 0x1c));
    pcVar2 = ((undefined1 *)(unsigned)0x8c13d1c2);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c020aa8(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d1c2),puVar3));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); Class_129920_m0_015248(0x8c437028,(*(le<undefined4>* )(fr0_ - 0x1c)),pcVar2,puVar3); });
      *(le<undefined4>* )(unsigned)(ar5 + 4) = 2;
    }
    else if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d219),0,2));
    }
  }
  else if (iVar1 == 2) {
    ar7_00 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(0x8c437028,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c020e80(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d242),((undefined1 *)(unsigned)0x8c13d1c2),ar7_00));
    if (iVar1 == 1) {
      *(le<undefined4>* )(unsigned)(ar5 + 4) = 3;
      uVar4 = 4;
    }
    else if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c13d242),((undefined1 *)(unsigned)0x8c13d219),0,2));
    }
  }
  return uVar4;
}

__asm__(".globl s_GRAPHICS_ENV_0ca2d4\n.set s_GRAPHICS_ENV_0ca2d4, s_GRAPHICS_ENV_0ca2d4_def\n");

}
