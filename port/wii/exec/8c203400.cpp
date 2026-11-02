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
undefined4 FUN_8c203400_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203400");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  le<undefined2>* puVar1;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408); { extern void dbg_dump(unsigned long,int); dbg_dump(0x8c2753e8, 16); dbg_dump(0x8c47eba8, 12); }
  while (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400), iVar3 != 0) {
    iVar2 = *(le<int>* )(unsigned)(iVar3 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar3,ar5,ar6,ar7); });
    iVar3 = iVar2;
  }
  while (iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c), iVar2 != 0) {
    iVar3 = *(le<int>* )(unsigned)(iVar2 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar2,ar5,ar6,ar7); });
    iVar2 = iVar3;
  }
  while (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414), iVar3 != 0) {
    iVar2 = *(le<int>* )(unsigned)(iVar3 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar3,ar5,ar6,ar7); });
    iVar3 = iVar2;
  }
  while (iVar2 != 0) {
    iVar3 = *(le<int>* )(unsigned)(iVar2 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar2,ar5,ar6,ar7); });
    iVar2 = iVar3;
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c47eba8);
  ar5_00 = ((undefined1 *)(unsigned)0x8c496ba8);
  puVar1 = (le<undefined2>* )(unsigned)((undefined1 *)(unsigned)0x8c47eba8);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0xc;
  } while (puVar1 < ((undefined1 *)(unsigned)0x8c496ba8));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275404) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27540c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275410) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275418) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275420) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275424) = 0;
  iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275428);
  while (iVar3 != 0) {
    iVar2 = *(le<int>* )(unsigned)(iVar3 + 4);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2057c0(iVar3,ar5_00,ar6_00,ar7); });
    iVar3 = iVar2;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275428) = 0;
  return 0;
}

__asm__(".globl FUN_8c203400\n.set FUN_8c203400, FUN_8c203400_def\n");

}
