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
int FUN_8c25a49e_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a49e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<int>* piVar3;
  
  piVar3 = (le<int>*)(((le<undefined4>* )(unsigned)0x8c277b08));
  *ar4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  uVar2 = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  ar4[4] = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x10) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01051c((int)ar4 - (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),0x44,vr6,vr7));
  if ((0 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4)) && (iVar1 == (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1)) {
    while ((0 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) &&
           (iVar1 = *(le<int>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)), iVar1 == -1))) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1;
    }
  }
  for (; (uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c) && (iVar1 = *(le<int>* )(unsigned)(uVar2 * 0x44 + *piVar3), iVar1 != -1));
      uVar2 = uVar2 + 1) {
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) = uVar2;
  return iVar1;
}

__asm__(".globl FUN_8c25a49e\n.set FUN_8c25a49e, FUN_8c25a49e_def\n");

}
