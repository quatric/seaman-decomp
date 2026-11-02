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
undefined4
FUN_8c25f42c_def(int ar4,int ar5,uint *ar6,uint *ar7)

{
  ring[rp++ & 255] = "FUN_8c25f42c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 * s4 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 4);
  undefined4 * s8 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 8);
  int * s12 = (int *)(unsigned long)*(unsigned *)(vsp + 12);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *unaff_r14 = 0;
  
  uVar4 = (uint)unaff_r14[1] << 8 | (uint)unaff_r14[2] << 0x10 | (uint)unaff_r14[3] << 0x18 |
          (uint)*unaff_r14;
  if ((uVar4 != 0x64732e) && (uVar4 != 0x646e732e)) {
    return 0;
  }
  iVar3 = CONCAT13(unaff_r14[4],CONCAT12(unaff_r14[5],CONCAT11(unaff_r14[6],unaff_r14[7])));
  if (ar5 < iVar3) {
    return 0;
  }
  uVar4 = CONCAT13(unaff_r14[8],CONCAT12(unaff_r14[9],CONCAT11(unaff_r14[10],unaff_r14[0xb])));
  iVar2 = CONCAT13(unaff_r14[0xc],CONCAT12(unaff_r14[0xd],CONCAT11(unaff_r14[0xe],unaff_r14[0xf])));
  if (iVar2 == 1) {
    *s12 = 2;
LAB_8c25f55c:
    *s4 = 8;
  }
  else {
    if (iVar2 == 2) {
      *s12 = 1;
      goto LAB_8c25f55c;
    }
    if (iVar2 != 3) {
      return 0;
    }
    *s12 = 0;
    *s4 = 0x10;
  }
  *ar6 = (uint)unaff_r14[0x13] |
         (int)((uint)unaff_r14[0x11] << 8 | (uint)unaff_r14[0x12] << 0x10 |
               (uint)unaff_r14[0x13] << 0x18 | (uint)unaff_r14[0x10]) >> 8 & 0xff00U |
         (uint)unaff_r14[0x11] << 0x10 | (uint)unaff_r14[0x10] << 0x18;
  *ar7 = (uint)unaff_r14[0x17] |
         (int)((uint)unaff_r14[0x15] << 8 | (uint)unaff_r14[0x16] << 0x10 |
               (uint)unaff_r14[0x17] << 0x18 | (uint)unaff_r14[0x14]) >> 8 & 0xff00U |
         (uint)unaff_r14[0x15] << 0x10 | (uint)unaff_r14[0x14] << 0x18;
  if ((*s12 == 2) || (*s12 == 1)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar4,*ar7,vr6,vr7));
  }
  else {
    if (*s12 != 0) {
      *s8 = 0x7fff0000;
      goto LAB_8c25f636;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar4 >> 1,*ar7,vr6,vr7));
  }
  *s8 = uVar1;
LAB_8c25f636:
  return ar4 + iVar3;
}

__asm__(".globl _FUN_8c25f42c\n.set _FUN_8c25f42c, _FUN_8c25f42c_def\n");
