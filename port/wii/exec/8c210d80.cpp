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
undefined4 FUN_8c210d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c210d80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  le<undefined4>* puVar4;
  int iVar5;
  int iVar6;
  
  ar4_00 = 0x10000000;
  puVar1 = ((void *)(unsigned)0x8c202f40);
  iVar3 = ar4 * 4;
  iVar5 = *(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4aa21c + iVar3) - *(le<int>* )(unsigned)(0x8c4aa268 + iVar3);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 3;
  }
  iVar6 = (int)0x100;
  puVar4 = (le<undefined4>* )(unsigned)(iVar3 + 0x8c4aa268);
  do {
    iVar2 = ({ unsigned long t0_ = (unsigned long)(((le<undefined4>*  *)(fr0_ - 0x20))); *(le<unsigned>* )((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,*puVar4,(iVar5 >> 2) << 2,0x10); });
  } while (iVar2 == iVar6);
  *(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4aa21c + iVar3) =
       *(le<int>* )(unsigned)(0x8c4aa288 + iVar3) * 4 + *(le<int>* )(unsigned)(0x8c4aa268 + iVar3);
  *(le<undefined4>* )(unsigned)0x8c4a9fd4 = *((le<undefined4>*  *)(fr0_ - 0x20))[0];
  return 0;
}

__asm__(".globl FUN_8c210d80\n.set FUN_8c210d80, FUN_8c210d80_def\n");

}
