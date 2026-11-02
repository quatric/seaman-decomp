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
uint FUN_8c2028d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2028d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);
  int s8 = *(le<int>* )(vsp + 8);
  uint s12 = *(le<uint>* )(vsp + 12);
  int s16 = *(le<int>* )(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c010794(in_r0,((undefined1 *)(fr0_ - 0x8)) + -in_r0,&s12,vr7));
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x10)) + -in_r0,&s4,vr7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c2029b4(ar4,ar5,ar6,ar7));
  if (iVar1 == 1) {
    if ((s12 < s4) || (uVar2 = s8 - s16, 0x7fffffff < uVar2)) {
      uVar2 = 0x7fffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c2028d0\n.set FUN_8c2028d0, FUN_8c2028d0_def\n");

}
