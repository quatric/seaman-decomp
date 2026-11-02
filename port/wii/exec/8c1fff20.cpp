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
int FUN_8c1fff20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fff20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  uint uVar2;
  uint uVar3;
  int in_r3 = 0;
  int unaff_r11 = 0;
  int unaff_r13 = 0;
  int iVar4;
  
  uVar2 = 0xfffc;
  piVar1 = 0x8c4783dc;
  iVar4 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(unaff_r13 + in_r3 + 0x1c) + 0x30);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < unaff_r11) {
      return 0xffffffff;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0xc))))
                      (*(le<undefined4>* )(unsigned)(unaff_r13 + in_r3 + 0x24),iVar4 * 2,ar6,ar7));
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar4;
}

__asm__(".globl FUN_8c1fff20\n.set FUN_8c1fff20, FUN_8c1fff20_def\n");

}
