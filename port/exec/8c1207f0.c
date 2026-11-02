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
uint FUN_8c1207f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1207f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int in_r1 = (int)(unsigned long)vin1;
  uint uVar1;
  undefined4 unaff_r14 = 0;
  
  uVar1 = 1;
  if (in_r0 == in_r1) {
LAB_8c12085e:
    if (*(char *)(unsigned)(ar4 + 0x20) != '\0') {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1207c6(ar4,unaff_r14,1,1));
      uVar1 = (uint)((uVar1 & 0xff) == 0);
    }
  }
  else {
    if (in_r0 == 0xfa) {
LAB_8c120846:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120798(ar4,ar5,1,1));
    }
    else {
      if (in_r0 == 0xfb) {
        unaff_r14 = 0;
        *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
        goto LAB_8c12085e;
      }
      if (in_r0 == 0xfc) {
        *(undefined1 *)(unsigned)(ar4 + 0x20) = 0;
        goto LAB_8c120846;
      }
      if (in_r0 == 0xfd) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12071a(ar4,unaff_r14,1,1));
      }
      else {
        if (in_r0 != 0xfe) {
          return 0;
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1206ba(ar4,ar5,1,1));
      }
    }
    uVar1 = (uint)((uVar1 & 0xff) == 0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1207f0\n.set _FUN_8c1207f0, _FUN_8c1207f0_def\n");
