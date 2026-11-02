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
int FUN_8c26813c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26813c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    iVar1 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar1 = 0x7000103;
  }
  else {
    iVar1 = (int)(char)ar7;
    if ((iVar1 < 0) || (0x1f < iVar1)) {
      iVar1 = 0x3000001;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4bd500) = 0x11;
      (*(undefined1 *)(unsigned)0x8c4bd504) = *(undefined1 *)(unsigned)(ar4 + 1);
      (*(undefined1 *)(unsigned)0x8c4bd505) = (undefined1)ar5;
      (*(undefined1 *)(unsigned)0x8c4bd506) = (undefined1)ar6;
      (*(undefined1 *)(unsigned)0x8c4bd507) = (undefined1)(iVar1 << 3);
      in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267fe8(((undefined1 *)(unsigned)0x8c4bd500),ar5,ar6,ar7));
      iVar1 = in_r0;
    }
  }
  if (iVar1 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c26813c),iVar1,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26813c\n.set _FUN_8c26813c, _FUN_8c26813c_def\n");
