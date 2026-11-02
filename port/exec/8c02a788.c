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
undefined4 FUN_8c02a788_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a788";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar2;
  if (*(short *)(unsigned)(ar4 + 0x3f8) < *(short *)(unsigned)(ar4 + 0x3fa)) {
    *(undefined2 *)(unsigned)(ar4 + 0x3fa) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x3f8) = 1;
    if (*(int *)(unsigned)(ar4 + 0x3f4) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x3dc) = *(undefined4 *)(unsigned)(ar4 + 0x3d8);
    }
    else if (*(int *)(unsigned)(ar4 + 0x3f4) == 1) {
      *(short *)(unsigned)(ar4 + 0x3f0) = *(short *)(unsigned)(ar4 + 0x3f0) + 1;
      if (*(int *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec))) == 0x50) {
        ar5 = *(undefined4 *)(unsigned)(ar4 + 0x3e4);
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02aab0(*(undefined4 *)(unsigned)(ar4 + 0x308),ar5,ar6,ar7));
        *(undefined2 *)(unsigned)(ar4 + 0x3f0) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x3f4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x3ec) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x3e0) = 0;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x3e4) =
             *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec)));
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x3e0) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_94_02aaa4(*(undefined4 *)(unsigned)(ar4 + 0x308),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x3e4) = uVar2;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c02a544(*(undefined4 *)(unsigned)(ar4 + 0x308),ar5,ar6,ar7); });
    ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02b208(ar4 + 0x310,*(undefined4 *)(unsigned)(ar4 + 0x3e4),ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x3e4) = uVar2;
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x3e4) =
         *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec)));
  }
  if (*(int *)(unsigned)(ar4 + 0x3e4) != *(int *)(unsigned)(ar4 + 1000)) {
    *(undefined2 *)(unsigned)(ar4 + 0x3fa) = 0;
    if ((*(int *)(unsigned)(ar4 + 0x3e4) < 0x4f) && (0x46 < *(int *)(unsigned)(ar4 + 0x3e4))) {
                    
      *(int *)(unsigned)(ar4 + 0x3ec) =
           *(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + (*(int *)(unsigned)(ar4 + 0x3e4) + -0x47) * 8;
      *(undefined4 *)(unsigned)(ar4 + 0x3e4) =
           *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec)));
      *(undefined4 *)(unsigned)(ar4 + 0x3f4) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x3e0) = 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x3d8) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + *(int *)(unsigned)(ar4 + 0x3e4) * 4 + 0x40);
    *(undefined4 *)(unsigned)(ar4 + 0x3dc) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + *(int *)(unsigned)(ar4 + 1000) * 4 + 0x40);
    *(undefined2 *)(unsigned)(ar4 + 0x3f8) =
         *(undefined2 *)(unsigned)
          (*(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + *(int *)(unsigned)(ar4 + 0x3e4) * 2 + 0x158);
  }
  if (*(int *)(unsigned)(ar4 + 0x3dc) != *(int *)(unsigned)(ar4 + 0x3d8)) {
    *(short *)(unsigned)(ar4 + 0x3fa) = *(short *)(unsigned)(ar4 + 0x3fa) + 1;
  }
  if (((*(int *)(unsigned)(ar4 + 0x3dc) == *(int *)(unsigned)(ar4 + 0x3d8)) &&
      (*(short *)(unsigned)(ar4 + 0x3fa) < *(short *)(unsigned)(ar4 + 0x3f8))) && (*(int *)(unsigned)(ar4 + 0x3e0) == 1)) {
    *(short *)(unsigned)(ar4 + 0x3fa) = *(short *)(unsigned)(ar4 + 0x3f8) + 1;
  }
  *(undefined4 *)(unsigned)(ar4 + 1000) = *(undefined4 *)(unsigned)(ar4 + 0x3e4);
  return 1000;
}

__asm__(".globl _FUN_8c02a788\n.set _FUN_8c02a788, _FUN_8c02a788_def\n");
