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
int FUN_8c1f8462_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f8462");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  le<int>* piVar3;
  le<int>* piVar4;
  le<int>* a4;
  
  piVar3 = ((le<int>* )(fr0_ - 0x24));
  piVar4 = piVar3;
  for (a4 = piVar3; a4 < ((le<int>* )(fr0_ - 0x24)) + 2; a4 = a4 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), aica_reg_1f8544(a4,ar5,ar6,ar7));
    if (iVar2 != 0) {
      *piVar4 = ar4;
    }
    piVar4 = piVar4 + 1;
  }
  bVar1 = false;
  piVar4 = ((le<int>* )(fr0_ - 0x24)) + 1;
  do {
    if (((le<int>* )(fr0_ - 0x24)) + 1 <= piVar3) {
LAB_8c1f84bc:
      if (!bVar1) {
        ar4 = ((le<int>* )(fr0_ - 0x24))[0];
      }
      return ar4;
    }
    if (*piVar3 != *piVar4) {
      bVar1 = true;
      goto LAB_8c1f84bc;
    }
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}

__asm__(".globl FUN_8c1f8462\n.set FUN_8c1f8462, FUN_8c1f8462_def\n");

}
