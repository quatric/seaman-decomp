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
undefined4 FUN_8c25f428_def(byte *ar4,int ar5,uint *ar6,uint *ar7)

{
  ring[rp++ & 255] = "FUN_8c25f428";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 * s0 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 0);
  undefined4 * s4 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 4);
  int * s8 = (int *)(unsigned long)*(unsigned *)(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)ar4[1] << 8 | (uint)ar4[2] << 0x10 | (uint)ar4[3] << 0x18 | (uint)*ar4;
  if ((uVar4 != 0x64732e) && (uVar4 != 0x646e732e)) {
    return 0;
  }
  iVar3 = CONCAT13(ar4[4],CONCAT12(ar4[5],CONCAT11(ar4[6],ar4[7])));
  if (ar5 < iVar3) {
    return 0;
  }
  uVar4 = CONCAT13(ar4[8],CONCAT12(ar4[9],CONCAT11(ar4[10],ar4[0xb])));
  iVar2 = CONCAT13(ar4[0xc],CONCAT12(ar4[0xd],CONCAT11(ar4[0xe],ar4[0xf])));
  if (iVar2 == 1) {
    *s8 = 2;
LAB_8c25f55c:
    *s0 = 8;
  }
  else {
    if (iVar2 == 2) {
      *s8 = 1;
      goto LAB_8c25f55c;
    }
    if (iVar2 != 3) {
      return 0;
    }
    *s8 = 0;
    *s0 = 0x10;
  }
  *ar6 = (uint)ar4[0x13] |
         (int)((uint)ar4[0x11] << 8 | (uint)ar4[0x12] << 0x10 | (uint)ar4[0x13] << 0x18 |
              (uint)ar4[0x10]) >> 8 & 0xff00U | (uint)ar4[0x11] << 0x10 | (uint)ar4[0x10] << 0x18;
  *ar7 = (uint)ar4[0x17] |
         (int)((uint)ar4[0x15] << 8 | (uint)ar4[0x16] << 0x10 | (uint)ar4[0x17] << 0x18 |
              (uint)ar4[0x14]) >> 8 & 0xff00U | (uint)ar4[0x15] << 0x10 | (uint)ar4[0x14] << 0x18;
  if ((*s8 == 2) || (*s8 == 1)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar4,*ar7,vr6,vr7));
  }
  else {
    if (*s8 != 0) {
      *s4 = 0x7fff0000;
      goto LAB_8c25f636;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar4 >> 1,*ar7,vr6,vr7));
  }
  *s4 = uVar1;
LAB_8c25f636:
  return ar4 + iVar3;
}

__asm__(".globl _FUN_8c25f428\n.set _FUN_8c25f428, _FUN_8c25f428_def\n");
