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
undefined4 game_shutdown_a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("game_shutdown_a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = 0x8c286ebc;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b37c(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23403e(ar4_00,ar5,ar6,ar7));
  if (*(le<undefined4>* )(unsigned)0x8c43b570 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b570;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b574 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b574;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b578 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b578;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b57c != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b57c;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b580 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b580;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(ar4_00,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl game_shutdown_a\n.set game_shutdown_a, game_shutdown_a_def\n");

}
