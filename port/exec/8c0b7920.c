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
undefined4 FUN_8c0b7920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b7920";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar4 != 2) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) = ar4;
  }
  if (ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
    return 1;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
    return 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) != 3) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) == 4) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,uVar1,((undefined1 *)(unsigned)0x8c13c025)));
      return 0;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) != 5) {
      return 0;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a524_01f514(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,uVar1,((undefined1 *)(unsigned)0x8c13c025)));
  return 0;
}

__asm__(".globl _FUN_8c0b7920\n.set _FUN_8c0b7920, _FUN_8c0b7920_def\n");
