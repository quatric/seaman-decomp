#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c264b14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264b14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262c38(*(undefined4 *)(unsigned)(ar4 + 4),((undefined1 *)(unsigned)0x8c278064),vr6,vr7));
  if (iVar1 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263156(*(undefined4 *)(unsigned)(ar4 + 4),vr5,vr6,vr7));
    iVar4 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar4 * 4 + ar4 + 0x18));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0x24))))(piVar3,1,vr6,vr7));
        if (0x1f < iVar1) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (iVar4 == iVar2) {
      (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(unsigned)(ar4 + 0xc),0,vr6,vr7));
      iVar1 = 4;
      *(undefined1 *)(unsigned)(ar4 + 1) = 4;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b14\n.set _FUN_8c264b14, _FUN_8c264b14_def\n");
