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
uint FUN_8c1207e8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1207e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  
  uVar1 = ar5 & 0xff;
  uVar2 = 1;
  if (uVar1 == (int)0xf9) {
LAB_8c12085e:
    if (*(char *)(unsigned)(ar4 + 0x20) != '\0') {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1207c6(ar4,ar6,1,1));
      uVar2 = (uint)((uVar1 & 0xff) == 0);
    }
  }
  else {
    if (uVar1 == (int)0xfa) {
LAB_8c120846:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120798(ar4,ar5,1,1));
    }
    else {
      if (uVar1 == (int)0xfb) {
        ar6 = 0;
        *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
        goto LAB_8c12085e;
      }
      if (uVar1 == (int)0xfc) {
        *(undefined1 *)(unsigned)(ar4 + 0x20) = 0;
        goto LAB_8c120846;
      }
      if (uVar1 == (int)0xfd) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12071a(ar4,ar6,1,1));
      }
      else {
        if (uVar1 != (int)0xfe) {
          return 0;
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1206ba(ar4,ar5,1,1));
      }
    }
    uVar2 = (uint)((uVar1 & 0xff) == 0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1207e8\n.set _FUN_8c1207e8, _FUN_8c1207e8_def\n");
