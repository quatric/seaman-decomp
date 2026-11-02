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
le<undefined4>* 
FUN_8c02000c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02000c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  puVar1 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(0xd8,ar5,ar6,ar7)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x200c, (unsigned)puVar1, ar5, 0); }
  if (puVar1 == (le<undefined4>* )(unsigned)0x0) {
    puVar1 = (le<undefined4>* )(unsigned)0x0;
  }
  else {
    *puVar1 = ar5;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(puVar1 + 4,ar6,ar6_00,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(puVar1 + 0xc,ar7,ar6_00,ar7_00); });
    puVar1[0x14] = s0;
    puVar1[0x15] = s4;
    for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
      puVar1[iVar2 + 0x16] = 0;
    }
  }
  return puVar1;
}

__asm__(".globl FUN_8c02000c\n.set FUN_8c02000c, FUN_8c02000c_def\n");

}
