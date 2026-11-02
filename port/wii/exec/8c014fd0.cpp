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
undefined4 FUN_8c014fd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014fd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  ar5_00 = (uint)*(byte *)(unsigned)(ar4 + 0x78);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                    ((uint)*(le<ushort>* )(unsigned)(ar4 + 0x6c),ar5_00,ar6,ar7));
  if (iVar1 == 0) {
    for (iVar1 = 4; 0 < iVar1; iVar1 = iVar1 + -1) {
      iVar4 = iVar1 * 0xc + ar4;
      iVar3 = (iVar1 + -1) * 0xc + ar4;
      uVar2 = *(le<undefined4>* )(unsigned)(iVar3 + 8);
      *(le<undefined4>* )(unsigned)(iVar4 + 4) = *(le<undefined4>* )(unsigned)(iVar3 + 4);
      *(le<undefined4>* )(unsigned)(iVar4 + 8) = uVar2;
      *(le<undefined4>* )(unsigned)(iVar4 + 0xc) = *(le<undefined4>* )(unsigned)(iVar3 + 0xc);
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014f74(ar4,ar5_00,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c014fd0\n.set FUN_8c014fd0, FUN_8c014fd0_def\n");

}
