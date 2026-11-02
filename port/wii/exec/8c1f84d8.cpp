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
int FUN_8c1f84d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f84d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  do {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), aica_reg_1f8544(((le<int>* )(fr0_ - 0x1c)),ar5,ar6,ar7));
    if (iVar2 == 0) {
      bVar1 = true;
    }
  } while (!bVar1);
  if (bVar1) {
    bVar1 = false;
    do {
      iVar2 = 0;
      do {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), aica_reg_1f8544(&(*(le<int>* )(fr0_ - 0x20)),ar5,ar6,ar7));
        if ((iVar3 != 0) || (((le<int>* )(fr0_ - 0x1c))[0] != (*(le<int>* )(fr0_ - 0x20)))) break;
        iVar2 = iVar2 + 1;
        ((le<int>* )(fr0_ - 0x1c))[0] = (*(le<int>* )(fr0_ - 0x20));
      } while (iVar2 < 3);
      if (iVar2 == 3) {
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    (*(le<int>* )(fr0_ - 0x20)) = -1;
  }
  return (*(le<int>* )(fr0_ - 0x20));
}

__asm__(".globl FUN_8c1f84d8\n.set FUN_8c1f84d8, FUN_8c1f84d8_def\n");

}
