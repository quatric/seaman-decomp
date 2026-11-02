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
undefined4 FUN_8c112a20_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112a20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float extraout_fr0 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,0x10,ar6,ar7));
  *(uint *)(unsigned)(ar4 + 0x138) = ar5;
  *(uint *)(unsigned)(ar4 + 0x140) = ar5;
  uVar1 = (int)extraout_fr0 & 0xffff;
  if (*(char *)(unsigned)(ar4 + 0xf9) == '\0') {
    if (uVar1 < ar5) {
      uVar1 = ar5;
    }
    *(uint *)(unsigned)(ar4 + 0x13c) = uVar1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x13c) = 1;
  }
  if ((ar5 < 2) && (*(char *)(unsigned)(ar4 + 0xf8) == '\0')) {
    if (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x130) == ((void *)0x8c117bac)))) {
      return 0;
    }
    *(unsigned *)(unsigned)(ar4 + 0x130) = ((void *)0x8c117bac);
    *(undefined4 *)(unsigned)(ar4 + 0x134) = *(undefined4 *)(unsigned)(ar4 + 0x130);
    if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(ar4 + 0xb0) != 0) {
      return 0;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115732(ar4,1,ar6,ar7));
  }
  else {
    if (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x130) == ((void *)0x8c11617a)))) {
      return 0;
    }
    *(unsigned *)(unsigned)(ar4 + 0x130) = ((void *)0x8c11617a);
    *(undefined4 *)(unsigned)(ar4 + 0x134) = *(undefined4 *)(unsigned)(ar4 + 0x130);
    if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(ar4 + 0xa8) != 0) {
      return 0;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1155a0(ar4,1,ar6,ar7));
  }
  if ((uVar1 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a20\n.set _FUN_8c112a20, _FUN_8c112a20_def\n");
