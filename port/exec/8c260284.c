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
int FUN_8c260284_def(undefined4 ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c260284";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  
  if ((*(int *)(unsigned)(unaff_r14 + 4) == 1) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7))
     , iVar1 == 0)) {
    ar5 = unaff_r13 + 0x70;
    ar7 = unaff_r13 + 0x78;
    ar6 = unaff_r13 + 0x74;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + unaff_r14))))
              (*(undefined4 *)(unsigned)(0x88 + 4 + unaff_r14),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260062(unaff_r14,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(unaff_r14 + 4) = 2;
  }
  iVar1 = *(int *)(unsigned)(unaff_r14 + 4);
  if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26501c(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7));
    if (iVar1 == 3) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260198(unaff_r14,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264fea(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5,ar6,ar7));
      iVar1 = (int)0x90;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + unaff_r14))))
                        (*(undefined4 *)(unsigned)(iVar1 + 4 + unaff_r14),
                         *(undefined4 *)(unsigned)(iVar1 + 0x14 + unaff_r14),
                         *(undefined4 *)(unsigned)(iVar1 + 0x10 + unaff_r14),ar7));
      *(undefined4 *)(unsigned)(unaff_r14 + 4) = 3;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c260284\n.set _FUN_8c260284, _FUN_8c260284_def\n");
