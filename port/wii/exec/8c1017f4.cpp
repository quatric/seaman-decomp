#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1017f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1017f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int ar4_00;
  undefined4 ar5_00;
  
  *(char *)(unsigned)(ar4 + 0x28) = *(char *)(unsigned)(ar4 + 0x28) + '\x01';
  ar5_00 = 5;
  ar4_00 = (int)*(char *)(unsigned)(ar4 + 0x28);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(ar4_00,5,ar6,ar7));
  *(char *)(unsigned)(ar4 + 0x28) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4_00,ar5_00,ar6,ar7));
  *(le<undefined4>* )(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4) = uVar1;
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = *(le<undefined4>* )(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4);
  if (*(char *)(unsigned)(ar4 + 0x28) == '\0') {
    *(le<undefined4>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) = 0;
  }
  else {
    ar6 = *(le<undefined4>* )(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4);
    ar5_00 = *(le<undefined4>* )(unsigned)((*(char *)(unsigned)(ar4 + 0x28) + -1) * 8 + ar4);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101de0(ar4,ar5_00,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) = uVar1;
  }
  uVar2 = 0;
  if (*(le<int>* )(unsigned)(0xb0 + ar4) != 0) {
    if (*(le<uint>* )(unsigned)(0xbc + ar4) < *(le<uint>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4)) {
      if (0x124f80 <
          (uint)(*(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) - *(le<int>* )(unsigned)(0xbc + ar4))) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6,ar7));
      }
      else {
        uVar2 = 0xc3500;
        if (0xc3500 <
            (uint)(*(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) - *(le<int>* )(unsigned)(0xbc + ar4))) {
          *(undefined1 *)(unsigned)(0xb8 + ar4) = 2;
          uVar2 = 0xc4;
          *(le<undefined4>* )(unsigned)(0xc4 + ar4) = 0;
        }
      }
    }
    else {
      uVar2 = *(le<uint>* )(unsigned)(0xbc + ar4);
      if (*(le<uint>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) < *(le<uint>* )(unsigned)(0xbc + ar4)) {
        if (0x124f80 <
            (uint)(*(le<int>* )(unsigned)(0xbc + ar4) - *(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4))) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6,ar7));
        }
        else {
          uVar2 = 0xc3500;
          if (0xc3500 <
              (uint)(*(le<int>* )(unsigned)(0xbc + ar4) - *(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4)))
          {
            *(undefined1 *)(unsigned)(0xb8 + ar4) = 2;
            uVar2 = 0xc4;
            *(le<undefined4>* )(unsigned)(0xc4 + ar4) = 0;
          }
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c1017f4\n.set FUN_8c1017f4, FUN_8c1017f4_def\n");

}
