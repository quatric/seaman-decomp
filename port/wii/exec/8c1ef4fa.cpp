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
uint FUN_8c1ef4fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ef4fa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint in_r3 = 0;
  undefined1 *puVar2;
  undefined1 *a5;
  le<undefined4>* puVar3;
  le<int>* piVar4;
  undefined4 in_PR = 0;
  
  uVar1 = ain0 & in_r3 | 0xf0;
  puVar2 = ((undefined1 *)(unsigned)0x8c470e90);
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c470e90) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c470bec) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c470bec) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_1efaf4(((undefined1 *)(unsigned)0x8c470e90),ar5,ar6,ar7));
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1ef558(puVar2,ar5,ar6,ar7); });
    a5 = ((undefined1 *)(unsigned)0x8c470920);
    piVar4 = (le<int>* )(unsigned)((undefined1 *)(unsigned)0x8c470920);
    puVar2 = ((undefined1 *)(unsigned)0x8c470920);
    puVar3 = (le<undefined4>* )(unsigned)((undefined1 *)(unsigned)0x8c470920);
    do {
      if (*piVar4 != 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*puVar3)))(puVar2,a5,ar6,ar7));
      }
      piVar4 = piVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (piVar4 < ((undefined1 *)(unsigned)0x8c4709a0));
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c470e90) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c470e94) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c470e94) + 1;
  }
  return uVar1;
}

__asm__(".globl FUN_8c1ef4fa\n.set FUN_8c1ef4fa, FUN_8c1ef4fa_def\n");

}
