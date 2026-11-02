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
int FUN_8c264b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264b1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *a4;
  int unaff_r13 = 0;
  int iVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262c38(*(undefined4 *)(unsigned)(unaff_r13 + 4),ar5,ar6,ar7));
  if (iVar1 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263156(*(undefined4 *)(unsigned)(unaff_r13 + 4),ar5,ar6,ar7));
    iVar3 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 * 4 + unaff_r13 + 0x18));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x24))))(a4,1,ar6,ar7));
        if (0x1f < iVar1) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (iVar3 == iVar2) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c2690d8))))
                (*(undefined4 *)(unsigned)(unaff_r13 + 0xc),0,ar6,ar7));
      iVar1 = 4;
      *(undefined1 *)(unsigned)(unaff_r13 + 1) = 4;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b1a\n.set _FUN_8c264b1a, _FUN_8c264b1a_def\n");
