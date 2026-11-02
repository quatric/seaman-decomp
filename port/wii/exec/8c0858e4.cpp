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
undefined4 FUN_8c0858e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0858e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  int iVar3;
  
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(ar5,iVar2,ar6,ar7));
    if ((char)uVar1 == '\x02') {
      a6 = 5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,6,5,ar7));
      *(le<undefined4>* )(unsigned)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    else {
      a6 = 0x15;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,4,0x15,ar7));
      *(le<undefined4>* )(unsigned)(0x10a8 + ar4 + iVar3 * 4) = uVar1;
    }
    iVar2 = *(le<int>* )(unsigned)(0x10a8 + ar4 + iVar3 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar2 + 8) + 0x54))))(iVar2,0x8c3eb324,a6,ar7));
    ar6 = 0;
    iVar2 = *(le<int>* )(unsigned)(0x10a8 + ar4 + iVar3 * 4);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),iVar2,0,ar7));
    *(le<undefined4>* )(unsigned)(0x10c0 + ar4 + iVar3 * 4) = uVar1;
  }
  return 6;
}

__asm__(".globl FUN_8c0858e4\n.set FUN_8c0858e4, FUN_8c0858e4_def\n");

}
