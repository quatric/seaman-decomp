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
uint FUN_8c02d854_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d854";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint uVar3;
  uint ar4_00;
  undefined4 uVar4;
  
  cVar1 = (char)ar6;
  uVar3 = 0;
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x14);
    ar4_00 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_0103d0(ar5,uVar4,ar6,ar7));
    if ((iVar2 == 0) && (*(int *)(unsigned)(ar4 + 4) < *(int *)(unsigned)(ar4 + 0xc))) {
      *(int *)(unsigned)(ar4 + 4) = *(int *)(unsigned)(ar4 + 4) + 1;
    }
    uVar3 = *(uint *)(unsigned)(ar4 + 8);
    if (((*(uint *)(unsigned)(ar4 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
       (uVar3 = 0x258, 0x258 < ar5)) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,uVar4,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar4,100,ar6,ar7));
      if (uVar3 == 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                          (*(undefined4 *)(unsigned)(ar4 + 0x10),10,ar6,ar7));
        *(uint *)(unsigned)(ar4 + 8) = uVar3 * 6;
      }
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c02d854\n.set _FUN_8c02d854, _FUN_8c02d854_def\n");
