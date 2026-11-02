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
undefined4 s_CSquidLine_036894_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CSquidLine_036894";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 a6;
  int iVar2;
  
  a6 = ar6;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    if (*(int *)(unsigned)(0x111c + ar4 + iVar2 * 4) == 0) {
      ar7 = 2;
      a6 = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d1d,
                 (&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d28,1,2));
    }
    else {
      iVar1 = *(int *)(unsigned)(0x111c + ar4 + iVar2 * 4);
      ar5_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,ar6,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(0x111c + ar4 + iVar2 * 4),ar5_00,a6,ar7));
      iVar1 = *(int *)(unsigned)(0x111c + ar4 + iVar2 * 4);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x5c))))(iVar1,ar5_00,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x4c))))(ar5,*(undefined4 *)(unsigned)(0x111c + ar4 + iVar2 * 4),a6,ar7));
    }
  }
  return 6;
}

__asm__(".globl _s_CSquidLine_036894\n.set _s_CSquidLine_036894, _s_CSquidLine_036894_def\n");
