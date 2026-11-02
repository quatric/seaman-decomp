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
undefined4
FUN_8c201a1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c201a1a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *a7;
  
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  a7 = 0x8c47e6f0 + 0x130;
  puVar2 = 0x8c47e6f0;
  puVar3 = 0x8c47e6f0;
  while( true ) {
    if (a7 <= puVar2) {
      return 0;
    }
    if (puVar2[2] == '\0') break;
    puVar2 = puVar2 + 0x4c;
    puVar3 = puVar3 + 0x4c;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 4) = s0;
  *(le<undefined4>* )(unsigned)(puVar3 + 8) = s4;
  *(le<undefined4>* )(unsigned)(puVar3 + 0xc) = s8;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x10) = s12;
  if (*(le<int>* )(unsigned)(puVar3 + 8) == 0) {
    *(le<int>* )(unsigned)(puVar3 + 0x14) = *(le<int>* )(unsigned)(puVar3 + 0xc) * *(le<int>* )(unsigned)(puVar3 + 0x10) >> 1;
  }
  else {
    *(le<int>* )(unsigned)(puVar3 + 0x14) = *(le<int>* )(unsigned)(puVar3 + 0xc) * *(le<int>* )(unsigned)(puVar3 + 0x10);
  }
  *(le<undefined4>* )(unsigned)(puVar3 + 0x18) = s16;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x48) = s20;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(le<undefined4>* )(unsigned)(puVar3 + 0x48),0,
                    *(le<int>* )(unsigned)(puVar3 + 0xc) * *(le<int>* )(unsigned)(puVar3 + 0x10),a7));
  *(le<undefined4>* )(unsigned)(puVar3 + 0x1c) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x20) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x24) = ar4;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x28) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x2c) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x30) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x34) = 1;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x38) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x3c) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x40) = 0;
  *(le<undefined4>* )(unsigned)(puVar3 + 0x44) = 0;
  puVar3[2] = 1;
  return puVar3;
}

__asm__(".globl FUN_8c201a1a\n.set FUN_8c201a1a, FUN_8c201a1a_def\n");

}
