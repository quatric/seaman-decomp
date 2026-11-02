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
undefined4 FUN_8c11d200_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d200";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar3 == 0) {
    iVar3 = *(int *)(unsigned)(0xfc + ar4);
    sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,vr6,vr7));
      return uVar4 & 0xff;
    }
    iVar5 = (int)0x100;
    if (*(int *)(unsigned)(iVar5 + ar4) != 0) {
      iVar7 = (int)0xf4;
      *(int *)(unsigned)(*(int *)(unsigned)(iVar5 + ar4) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(iVar5 + ar4) + 4) + -1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(iVar5 + 8 + ar4),iVar7 + ar4,vr6,vr7));
      *(undefined4 *)(unsigned)(0x108 + ar4) = 0;
    }
    iVar5 = 0;
    if (*(int *)(unsigned)(0x104 + ar4) != 0) {
      iVar7 = *(int *)(unsigned)(0x104 + ar4);
      *(int *)(unsigned)(iVar7 + 4) = *(int *)(unsigned)(iVar7 + 4) + -1;
    }
    piVar6 = (int *)(unsigned)(0x118 + ar4);
    piVar8 = piVar6;
    do {
      if (*piVar6 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*piVar8,0xf4 + ar4,vr6,vr7));
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 3);
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)),0xf4 + ar4,vr6,vr7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(0x2b0 + ar4),0xf4 + ar4,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x54),0xf4 + ar4,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x5c),0xf4 + ar4,vr6,vr7));
    cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12025e(ar4,vr5,vr6,vr7));
    if (cVar2 == '\0') {
      iVar5 = (int)0xf4;
      *(undefined4 *)(unsigned)(0xf0 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(ar4,iVar5 + ar4,vr6,vr7));
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d200\n.set _FUN_8c11d200, _FUN_8c11d200_def\n");
