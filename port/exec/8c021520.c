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
undefined4
pack_open_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_open";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  *ar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0221c8(ar4 + 1,ar5,ar6,s4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                      (0x8c3eb334,ar7,(&(*(undefined1 *)(unsigned)0x8c12fc50)) + 0x34,
                       (int)ar4 + 0x9ec10); });
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                        (0x8c3eb334,s0,(&(*(undefined1 *)(unsigned)0x8c12fc50)) + 0x34,
                         (int)ar4 + 0x9ec0c); });
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *ar4 = 1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _pack_open\n.set _pack_open, _pack_open_def\n");
