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
undefined4 FUN_8c01fc78_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01fc78");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  (*(le<undefined4>* )(fr0_ - 0xec)) = *ar5;
  (*(le<undefined4>* )(fr0_ - 0xe8)) = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0xf4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 244)); strcpy(((undefined1 *)(fr0_ - 0xbc)),ar5 + 0xc,ar6,ar7); });
  iVar2 = 0;
  while (iVar3 = iVar2, iVar3 < 0x20) {
    ((le<undefined4>* )(fr0_ - 0x94))[iVar3] = ar5[iVar3 + 0x16];
    (*(le<int>* )(fr0_ - 0xf4)) = iVar3;
    iVar2 = iVar3 + 1;
  }
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x10);
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0xf4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 244)); strcpy(((undefined1 *)(fr0_ - 0xdc)),iVar2,ar6,ar7); });
  (*(le<undefined4>* )(fr0_ - 0xe0)) = *(le<undefined4>* )(unsigned)(iVar2 + 0x20);
  (*(le<int>* )(fr0_ - 0xe4)) = iVar2 + 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 244)), s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,&(*(le<undefined4>* )(fr0_ - 0xec)),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01fc78\n.set FUN_8c01fc78, FUN_8c01fc78_def\n");

}
