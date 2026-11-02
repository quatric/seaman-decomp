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
uint FUN_8c25b4ea_def(le<uint>* ar4,le<uint>* ar5,le<uint>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b4ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar7_00;
  le<uint>* puVar2;
  le<uint>* ar5_00;
  le<uint>* puVar3;
  le<uint>* puVar4;
  le<uint>* puVar5;
  le<uint>* ar4_00;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20d114(ar4,ar5,ar6,ar7));
  puVar4 = ar4;
  puVar5 = ar4;
  ar4_00 = ar4;
  for (puVar3 = (le<uint>* )(unsigned)0x0; puVar3 < ar5; puVar3 = (le<uint>* )(unsigned)((int)puVar3 + 1)) {
    ar7_00 = ar4[(int)puVar3 * 0x11];
    uVar1 = ar7_00;
    if ((ar7_00 != 0xffffffff) && (uVar1 = (ar4 + (int)puVar3 * 0x11)[4], (uVar1 & 2) != 0)) {
      if ((puVar5[4] & 8) != 0) {
        uVar1 = puVar4[0xd];
        ar6 = (le<uint>* )(unsigned)0x0;
        puVar2 = ar4;
        ar5_00 = ar4;
        if (ar5 != (le<uint>* )(unsigned)0x0) {
          do {
            ar6 = (le<uint>* )(unsigned)((int)ar6 + 1);
            if (ar7_00 == *ar5_00) {
              puVar2[0xd] = uVar1;
            }
            puVar2 = puVar2 + 0x11;
            ar5_00 = ar5_00 + 0x11;
          } while (ar6 < ar5);
        }
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2571fe(ar4_00,ar5_00,ar6,ar7_00));
    }
    puVar4 = puVar4 + 0x11;
    puVar5 = puVar5 + 0x11;
    ar4_00 = ar4_00 + 0x11;
  }
  return uVar1;
}

__asm__(".globl FUN_8c25b4ea\n.set FUN_8c25b4ea, FUN_8c25b4ea_def\n");

}
