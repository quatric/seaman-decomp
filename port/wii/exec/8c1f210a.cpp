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
undefined4 FUN_8c1f210a_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f210a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  le<int>* ar4_00;
  le<int>* ar5_00;
  int iVar2;
  int iVar3;
  int iVar4;
  le<int>* piVar5;
  int iVar6;
  
  iVar3 = *ar4;
  piVar5 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x10));
  iVar4 = piVar5[1]; { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x210a, iVar3, iVar4, (unsigned)ar4); }
  iVar2 = iVar4;
  if (iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  iVar6 = 0;
  piVar5[2] = ar4[2];
  ar4_00 = ar4 + 4;
  ar5_00 = piVar5 + 4;
  if (0 < iVar2) {
    do {
      in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c1f2a5c(ar4_00,ar5_00,0x2c,ar7); });
      iVar6 = iVar6 + 1;
      ar4_00 = ar4_00 + 0xb;
      ar5_00 = ar5_00 + 0xb;
    } while (iVar6 < iVar2);
  }
  *piVar5 = iVar6;
  if (iVar4 < iVar3) {
    uVar1 = 0xfffffff4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c1f210a\n.set FUN_8c1f210a, FUN_8c1f210a_def\n");

}
