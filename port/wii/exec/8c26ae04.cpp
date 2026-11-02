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
undefined4 s_E1227_sdMoveSndMemToWrkMem_r_26ae04_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("s_E1227_sdMoveSndMemToWrkMem_r_26ae04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 s4;
  
  uVar3 = 8;
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x10);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar7 * iVar2,8,vr6,vr7));
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4 + 0x38) + iVar1;
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((*(le<int>* )(fr0_ + 0x00000000)) * iVar2,uVar3,vr6,vr7));
  s4 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_2668fc(iVar1,ar6,ar6_00,ar7));
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c27394c)); unsigned long t1_ = (unsigned long)(s4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(iVar1,ar6,ar6_00,ar7); });
  }
  return uVar3;
}

__asm__(".globl s_E1227_sdMoveSndMemToWrkMem_r_26ae04\n.set s_E1227_sdMoveSndMemToWrkMem_r_26ae04, s_E1227_sdMoveSndMemToWrkMem_r_26ae04_def\n");

}
