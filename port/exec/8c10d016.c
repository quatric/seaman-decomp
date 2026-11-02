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
undefined4 FUN_8c10d016_def(int *ar4,int *ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c10d016";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint a6;
  uint a7;
  int iVar3;
  
  iVar3 = *ar4;
  a6 = ar6;
  a7 = ar7;
  if (*ar5 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(iVar3,*ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(iVar3,ar5[2],a6,a7));
  }
  *(short *)(unsigned)(ar5 + 1) = (short)ar6;
  *(short *)(unsigned)((int)ar5 + 6) = (short)ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x10))))(iVar3,(ar6 & 0xffff) << 2,a6,a7));
  *ar5 = iVar1;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x14))))(iVar3,ar6 & 0xffff,1,a7));
  ar5[2] = iVar3;
  if ((*ar5 != 0) && (ar5[2] != 0)) {
    iVar3 = 0;
    if ((ar6 & 0xffff) != 0) {
      do {
        iVar1 = iVar3 + 1;
        *(int *)(unsigned)(*ar5 + iVar3 * 4) = s0;
        s0 = s0 + (ar7 & 0xffff);
        iVar3 = iVar1;
      } while (iVar1 < (int)(ar6 & 0xffff));
    }
    return 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c10d016\n.set _FUN_8c10d016, _FUN_8c10d016_def\n");
