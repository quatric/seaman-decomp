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
le<undefined4>*  FUN_8c11a09e_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11a09e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = ar4[3];
  puVar3 = (le<undefined4>* )(unsigned)(uint)ar4[2];
  puVar2 = ar4;
  while (puVar1 = puVar3, puVar1 != (le<undefined4>* )(unsigned)0x0) {
    if ((uint)puVar1[3] < uVar4) {
      uVar5 = *ar4;
      puVar2[2] = puVar1[2];
      puVar1[2] = ar4;
      *ar4 = 1;
      *puVar1 = uVar5;
      uVar4 = puVar1[3];
      puVar3 = (le<undefined4>* )(unsigned)puVar2[2];
      ar4 = puVar1;
    }
    else {
      puVar3 = (le<undefined4>* )(unsigned)puVar1[2];
      puVar2 = puVar1;
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c11a09e\n.set FUN_8c11a09e, FUN_8c11a09e_def\n");

}
