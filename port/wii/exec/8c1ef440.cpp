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
undefined4 FUN_8c1ef440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ef440");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  le<undefined4>* puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c125404));
  for (puVar4 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1253f8))); puVar3 = (&(*(undefined1 *)(unsigned)0x8c1253f4)),
      puVar4 < ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)puVar2); puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  puVar6 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1253e0)));
  for (puVar5 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1253e8))); puVar2 = (&(*(undefined1 *)(unsigned)0x8c26bea4)),
      puVar5 < ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)puVar3); puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  for (puVar5 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be98))); puVar3 = (&(*(undefined1 *)(unsigned)0x8c26be94)),
      puVar5 < ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)puVar2); puVar5 = puVar5 + 1) {
    *puVar5 = 0;
  }
  puVar6 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be80)));
  for (puVar5 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c26be88))); puVar5 < ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)puVar3);
      puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1ef440\n.set FUN_8c1ef440, FUN_8c1ef440_def\n");

}
