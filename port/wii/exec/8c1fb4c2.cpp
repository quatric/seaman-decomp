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
le<undefined4>*  FUN_8c1fb4c2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fb4c2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  int iVar2;
  le<undefined4>* puVar3;
  uint uVar4;
  le<undefined4>* puVar5;
  
  uVar4 = (ar4 + 0x1fU >> 5) + 1;
  puVar1 = (le<undefined4>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475f04);
  puVar5 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475f04);
  while( true ) {
    puVar3 = puVar1;
    if (uVar4 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar4) {
        *puVar5 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar4;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
        puVar3[1] = uVar4;
      }
      *(le<unsigned>* )0x8c475f04 = (unsigned)(unsigned long)(puVar5);
      return puVar3 + 8;
    }
    if (puVar3 == ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475f04)) break;
    puVar1 = (le<undefined4>* )(unsigned)*puVar3;
    puVar5 = puVar3;
  }
  return (le<undefined4>* )(unsigned)0;
}

__asm__(".globl FUN_8c1fb4c2\n.set FUN_8c1fb4c2, FUN_8c1fb4c2_def\n");

}
