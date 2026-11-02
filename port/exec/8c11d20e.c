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
undefined4 FUN_8c11d20e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d20e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_r9 = 0;
  int *piVar7;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = *(int *)(unsigned)(0xfc + ar4);
    sVar1 = *(short *)(unsigned)(unaff_r9 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7));
      return uVar3 & 0xff;
    }
    iVar4 = (int)0x100;
    if (*(int *)(unsigned)(iVar4 + ar4) != 0) {
      iVar6 = (int)0xf4;
      *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + ar4) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + ar4) + 4) + -1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(iVar4 + 8 + ar4),iVar6 + ar4,ar6,ar7));
      *(undefined4 *)(unsigned)(0x108 + ar4) = 0;
    }
    iVar4 = 0;
    if (*(int *)(unsigned)(0x104 + ar4) != 0) {
      iVar6 = *(int *)(unsigned)(0x104 + ar4);
      *(int *)(unsigned)(iVar6 + 4) = *(int *)(unsigned)(iVar6 + 4) + -1;
    }
    piVar5 = (int *)(unsigned)(0x118 + ar4);
    piVar7 = piVar5;
    do {
      if (*piVar5 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*piVar7,0xf4 + ar4,ar6,ar7));
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 3);
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)),0xf4 + ar4,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(0x2b0 + ar4),0xf4 + ar4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x54),0xf4 + ar4,ar6,ar7));
    iVar4 = 0xf4 + ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x5c),iVar4,ar6,ar7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12025e(unaff_r9,iVar4,ar6,ar7));
    if ((uVar3 & 0xff) == 0) {
      iVar4 = (int)0xf4;
      *(undefined4 *)(unsigned)(0xf0 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(ar4,iVar4 + ar4,ar6,ar7));
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d20e\n.set _FUN_8c11d20e, _FUN_8c11d20e_def\n");
