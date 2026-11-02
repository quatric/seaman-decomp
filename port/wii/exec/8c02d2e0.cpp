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
undefined4 FUN_8c02d2e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02d2e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  undefined4 ain0;
  
  ar5_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02d944(ar4 + 0x90,ar5,ar6,ar7); });
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02e3cc(iVar2 * 0x18 + ar4,ar5,ar6,ar7));
  }
  if ((6 < ar5) && ((*(le<int>* )(unsigned)(ar4 + 0x13c) == 2 || (*(le<int>* )(unsigned)(ar4 + 0x13c) == 6)))) {
    ar5_00 = 10000;
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02ce00(ar4 + 0x18,10000,ar6,ar7); });
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02d3e0(ar4 + 0x90,ar5_00,ar6,ar7));
  ain0 = CONCAT31((int3)((uint)(*(le<undefined4>* )(fr0_ - 0x1c)) >> 8),(char)uVar1);
  if ((char)uVar1 == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c518(ar4,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c328(ar4 + 0xa8,uVar1,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02de00(ar4 + 0xa8,ar5,*(le<undefined4>* )(unsigned)(ar4 + 0x13c),ar7));
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02ce00(ar4 + 0x60,10000,ar6,ar7); });
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02c330(ar4 + 0x60,1,ar6,ar7); });
  }
  return uVar1;
}

__asm__(".globl FUN_8c02d2e0\n.set FUN_8c02d2e0, FUN_8c02d2e0_def\n");

}
