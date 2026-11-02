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
undefined4 FUN_8c11e2de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e2de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if (ar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x13,iVar5,ar7));
    }
    else {
      iVar1 = ar5;
      if (ar6 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(*(undefined4 *)(unsigned)(ar5 + 4),ar4 + 8,iVar5,ar7));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x71,iVar5,ar7));
          return 0;
        }
        iVar5 = *(int *)(unsigned)(ar5 + 4);
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar1,ar5,iVar5,ar7));
      }
      iVar4 = ar4 + 8;
      piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(0x1c,iVar4,iVar5,ar7));
      if (piVar2 != (int *)(unsigned)0x0) {
        piVar2[1] = 0;
        piVar2[2] = (uint)(ar6 == 0);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(ar4 + 8,iVar4,iVar5,ar7));
        piVar2[3] = iVar3;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x20))))(ar4 + 8,iVar4,iVar5,ar7));
        iVar5 = 0x2d79b6f5;
        piVar2[4] = iVar4;
        piVar2[6] = iVar5;
        *piVar2 = iVar1;
        piVar2[5] = ar4;
        return piVar2;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x71,iVar5,ar7));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11e2de\n.set _FUN_8c11e2de, _FUN_8c11e2de_def\n");
