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
undefined4 FUN_8c09ff1c_def(int ar4,undefined4 ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c09ff1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 a5;
  le<int>* ar6_00;
  
  a5 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(le<int>* )(unsigned)(ar4 + 0x38) == 2) {
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13adfc) + *(le<int>* )(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a00f8(ar4,ar5,ar6,ar7));
    a5 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 == 2) {
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
  }
  else if (iVar1 == 3) {
    if (*(le<int>* )(unsigned)(ar4 + 4) == 0xb) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0278(ar4,ar5,ar6_00,ar7));
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fdd8(ar4,ar5,ar6_00,ar7));
    }
  }
  else if (iVar1 == 6) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,a5,ar6_00,ar7));
    if (iVar2 == 1) {
      iVar2 = *ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar2,a5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,a5,ar6_00,ar7));
    }
  }
  else if (((iVar1 == 10) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar6[1],a5,ar6_00,ar7)), iVar2 != 0)) &&
          (iVar2 == 1)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0xe;
  }
  return 1;
}

__asm__(".globl FUN_8c09ff1c\n.set FUN_8c09ff1c, FUN_8c09ff1c_def\n");

}
