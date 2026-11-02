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
le<int>*  s_E1212_mwlRnaStartTrans_rna_s_269252_def
                (undefined1 *ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  TRACE_ENTER("s_E1212_mwlRnaStartTrans_rna_s_269252");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined1 *a7;
  le<int>* piVar3;
  undefined1 *puVar4;
  le<int>* a5;
  undefined1 *a6;
  le<int>* piVar5;
  int iVar6;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(0x20,*(le<undefined4>* )(unsigned)(ar4 + 8),vr6,vr7));
  iVar1 = iVar1 * 8;
  piVar3 = (le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x28) - *(le<int>* )(unsigned)(ar4 + 0x34));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(piVar3,iVar1,vr6,vr7));
  piVar5 = (le<int>* )(unsigned)(iVar2 * iVar1);
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[3]; iVar2 = iVar2 + 1) {
    if (*(le<int>* )(unsigned)(ar4 + iVar2 * 4 + 0x10) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(piVar3,ar5,ar6,ar7));
    }
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar2 * 4 + 0x10));
    iVar6 = (int)piVar5 * *(le<int>* )(unsigned)(ar4 + 8);
    ar7 = ar4 + iVar2 * 8 + 0x18;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    ar5 = 1;
    ar6 = (undefined1 *)(unsigned)(iVar6 >> 3);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x18))))(piVar3,1,ar6,ar7));
  }
  if (ar4[3] == '\x01') {
    puVar4 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x1c));
  }
  else {
    ar6 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x1c));
    ar7 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x24));
    puVar4 = ar7;
    if ((int)ar6 < (int)ar7) {
      puVar4 = ar6;
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(puVar4,*(le<undefined4>* )(unsigned)(ar4 + 8),vr6,vr7));
  piVar3 = (le<int>* )(unsigned)(iVar2 << 3);
  if ((int)piVar5 <= iVar2 << 3) {
    piVar3 = piVar5;
  }
  a5 = (le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x28) - *(le<int>* )(unsigned)(ar4 + 0x2c));
  if ((int)a5 <= (int)piVar3) {
    piVar3 = a5;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(piVar3,iVar1,vr6,vr7));
  if (iVar2 * iVar1 < 1) {
    for (iVar1 = 0; iVar1 < (int)(uint)(byte)ar4[3]; iVar1 = iVar1 + 1) {
      if (*(le<int>* )(unsigned)(ar4 + iVar1 * 4 + 0x10) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), debug_printf(piVar3,a5,ar6,ar7));
      }
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 0x10));
      a5 = (le<int>* )(unsigned)0x1;
      ar6 = ar4 + iVar1 * 8 + 0x18;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x1c))))(piVar3,1,ar6,ar7));
    }
    piVar5 = (le<int>* )(unsigned)0x0;
  }
  else {
    puVar4 = ((undefined1 *)(unsigned)0x8c4bea40);
    for (piVar3 = (le<int>* )(unsigned)0x0; (int)piVar3 < (int)(uint)(byte)ar4[3];
        piVar3 = (le<int>* )(unsigned)((int)piVar3 + 1)) {
      a7 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + (int)piVar3 * 8 + 0x18));
      a6 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x2c));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4bea40) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(puVar4,a5,ar6,ar7));
      puVar4 = ar4;
      a5 = piVar3;
      piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268ddc(ar4,piVar3,a6,a7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4bea44) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(puVar4,a5,a6,a7));
      ar6 = a6;
      ar7 = a7;
    }
    *(le<unsigned>* )(unsigned)(ar4 + 0x3c) = piVar5;
  }
  return piVar5;
}

__asm__(".globl s_E1212_mwlRnaStartTrans_rna_s_269252\n.set s_E1212_mwlRnaStartTrans_rna_s_269252, s_E1212_mwlRnaStartTrans_rna_s_269252_def\n");

}
