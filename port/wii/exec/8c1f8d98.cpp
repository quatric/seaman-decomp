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
undefined4 FUN_8c1f8d98_def(le<undefined4>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f8d98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = (le<int>* )(unsigned)(ar5 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 4);
  if (piVar1[10] == 1) {
    uVar2 = 0x90101;
  }
  else {
    *(le<int>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 4) = *piVar1;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x2c) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x30) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x34) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 8) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x10) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x14) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x18) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x1c) = 3;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x20) = 0;
    *(le<undefined4>* )(unsigned)(*piVar1 * 0x34 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 0x24) = 0;
    piVar1[10] = 1;
    *ar4 = piVar1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c1f8d98\n.set FUN_8c1f8d98, FUN_8c1f8d98_def\n");

}
