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
FUN_8c260d7c_def(ushort *ar4,int ar5,short *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c260d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined1 * s0 = (undefined1 *)(unsigned long)*(unsigned *)(vsp + 0);
  undefined1 * s4 = (undefined1 *)(unsigned long)*(unsigned *)(vsp + 4);
  undefined1 * s8 = (undefined1 *)(unsigned long)*(unsigned *)(vsp + 8);
  uint * s12 = (uint *)(unsigned long)*(unsigned *)(vsp + 12);
  uint * s16 = (uint *)(unsigned long)*(unsigned *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *extraout_r3 = 0;
  uint uVar2;
  
  if (ar5 < 0x10) {
    return 0xffffffff;
  }
  if (((int)(uint)*ar4 >> 8 | (*ar4 & 0xff) << 8) == 0x8000) {
    *ar6 = (ar4[1] >> 8 | ar4[1] << 8) + 4;
    *ar7 = (char)ar4[2];
    *s4 = *(undefined1 *)(unsigned)((int)ar4 + 5);
    *s0 = (char)ar4[3];
    *s8 = *(undefined1 *)(unsigned)((int)ar4 + 7);
    uVar2 = *(uint *)(unsigned)(ar4 + 4);
    *s12 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)(unsigned)(ar4 + 6);
    *s16 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(((char)*s4 + -2) * 8,(int)(char)*s0,vr6,vr7));
    *extraout_r3 = uVar1;
    return 0;
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c260d7c\n.set _FUN_8c260d7c, _FUN_8c260d7c_def\n");
