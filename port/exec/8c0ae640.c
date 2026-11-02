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
undefined4 s_GRAPHICS_SQUIDLINE_0ae646_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_SQUIDLINE_0ae646";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar4,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar5));
  ar6_00 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4));
  ar5_00 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(ar4,ar5_00,ar6_00,ar5));
  if (ar6 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256670(ar6,ar5_00,ar6_00,ar5));
  }
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ae646\n.set _s_GRAPHICS_SQUIDLINE_0ae646, _s_GRAPHICS_SQUIDLINE_0ae646_def\n");
