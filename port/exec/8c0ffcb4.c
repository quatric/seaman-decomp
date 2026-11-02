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
undefined4 s_GRAPHICS_0ffcb6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_0ffcb6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  wchar16 *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 2;
  uVar2 = 0x8c4413f4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(0x8c4413d4,0x8c4413dc,0x8c4413f4,2));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ccc(ar4 + 0x15c,0x8c4413d4,uVar2,ar7_00); });
  ar5_00 = ((undefined1 *)(unsigned)0x8c1421cc);
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),uVar2,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a0c(ar4 + 0x15c,ar5_00,uVar2,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_1c_0ffd74(ar4 + 0x15c,ar5_00,uVar2,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c142254),((undefined1 *)(unsigned)0x8c142263),uVar2));
  if (iVar1 == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c14226c),((undefined1 *)(unsigned)0x8c142292),1,2));
  }
  return 1;
}

__asm__(".globl _s_GRAPHICS_0ffcb6\n.set _s_GRAPHICS_0ffcb6, _s_GRAPHICS_0ffcb6_def\n");
