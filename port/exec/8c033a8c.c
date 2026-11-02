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
undefined4 s_CAnimBody_SetAnimation_033a94_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_SetAnimation_033a94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  if (*(int *)(unsigned)(ar4 + 0x1c) == ar5) {
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    uVar1 = 6;
  }
  else if (ar6 == -1) {
    *(int *)(unsigned)(ar4 + 0x1c) = ar5;
    *(undefined4 *)(unsigned)(ar4 + 0x28) = ar7;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b58(ar4,ar5,0xffffffff,ar7));
    *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    uVar1 = 0;
  }
  else if ((*(int *)(unsigned)(ar4 + 0x2c) < 0) || (ar6 == 1)) {
    if (*(char *)(unsigned)(ar4 + 0x54) == '\x01') {
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      uVar1 = 3;
    }
    else if (*(int *)(unsigned)(ar4 + 0x10) + -1 < ar5) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c132cb8)),(&(*(undefined1 *)(unsigned)0x8c132cb8)) + 0x16,1,
                 2));
      uVar1 = 4;
    }
    else if (ar6 == 0) {
      if (*(int *)(unsigned)(ar4 + 0x70) == 0) {
        *(int *)(unsigned)(ar4 + 0x2c) = ar5;
        *(undefined4 *)(unsigned)(ar4 + 0x30) = ar7;
        uVar1 = 1;
      }
      else {
        *(int *)(unsigned)(ar4 + 0x1c) = ar5;
        *(undefined4 *)(unsigned)(ar4 + 0x28) = ar7;
        uVar1 = 0;
      }
    }
    else if (ar6 == 1) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetInterpolate_033f7e(ar4,ar5,1,ar7));
      *(int *)(unsigned)(ar4 + 0x1c) = ar5;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b58(ar4,ar5_00,ar6,ar7));
      uVar1 = 2;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    uVar1 = 5;
  }
  return uVar1;
}

__asm__(".globl _s_CAnimBody_SetAnimation_033a94\n.set _s_CAnimBody_SetAnimation_033a94, _s_CAnimBody_SetAnimation_033a94_def\n");
