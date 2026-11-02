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
undefined4 FUN_8c20e1e6_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e1e6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 2) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 3)) ||
       ((*(le<int>* )(unsigned)(iVar1 + 4) != 0 && (*(le<int>* )(unsigned)(iVar1 + 4) != 2)))) ||
      ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 3 || (iVar2 = *(le<int>* )(unsigned)(iVar1 + 8), iVar2 == 0)) || (iVar2 == 2)) ||
        (iVar2 == 4)) &&
       ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 2 || (*(le<int>* )(unsigned)(iVar1 + 8) == 0)) || (*(le<int>* )(unsigned)(iVar1 + 8) == 2)))))) &&
     (((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 1 || (*(le<int>* )(unsigned)(iVar1 + 4) != 0)) ||
       ((*(le<int>* )(unsigned)(iVar1 + 8) == 0 || (*(le<int>* )(unsigned)(iVar1 + 8) == 2)))) &&
      (((*(le<int>* )(unsigned)(iVar1 + 4) != 1 || (*(le<int>* )(unsigned)(iVar1 + 8) == 1)) || (*(le<int>* )(unsigned)(iVar1 + 8) == 3))))))
  {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 4;
}

__asm__(".globl FUN_8c20e1e6\n.set FUN_8c20e1e6, FUN_8c20e1e6_def\n");

}
