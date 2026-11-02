#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e78c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e78c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 uVar3;
  char *ar6_00;
  undefined4 ar7_00;
  int iVar4;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x488,ar5,ar6,ar7));
  ar7_00 = 2;
  uVar3 = 0x8c4312a8;
  iVar2 = ar4 + 0x498;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(uVar1,iVar2,0x8c4312a8,2));
  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
    *(undefined4 *)(unsigned)(iVar4 * 0xc + ar4 + 0x49c) = 0x80000000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x488,iVar2,uVar3,ar7_00));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  ar5_00 = ((undefined1 *)(unsigned)0x8c1400cd);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c1400cd),((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    ar5_00 = ((undefined1 *)(unsigned)0x8c1400ff);
    report_error_message
              (((undefined1 *)(unsigned)0x8c1400db),((undefined1 *)(unsigned)0x8c1400ff),0,2);
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x488,ar5_00,ar6_00,uVar1));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ccc(ar4 + 0x414,uVar3,ar6_00,uVar1); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x414,((undefined1 *)(unsigned)0x8c13f750),ar6_00,uVar1); });
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e78c4\n.set _s_GRAPHICS_ENV_0e78c4, _s_GRAPHICS_ENV_0e78c4_def\n");
