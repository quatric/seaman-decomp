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
FUN_8c20284e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20284e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);
  uint s8 = *(le<uint>* )(vsp + 8);
  int s12 = *(le<int>* )(vsp + 12);
  uint s16 = *(le<uint>* )(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x28)),&s12,vr7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x30)),&s4,vr7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c2029b4(ar4,ar5,ar6,ar7));
  if (iVar1 == 1) {
    (*(le<int>* )(fr0_ - 0x1c)) = s8 - s16;
    (*(le<int>* )(fr0_ - 0x20)) = (s4 - s12) - (uint)(s8 < s16);
  }
  else {
    (*(le<int>* )(fr0_ - 0x1c)) = 0;
    (*(le<int>* )(fr0_ - 0x20)) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c010794(8,s0,&(*(le<int>* )(fr0_ - 0x20)),vr7));
  return uVar2;
}

__asm__(".globl FUN_8c20284e\n.set FUN_8c20284e, FUN_8c20284e_def\n");

}
