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
FUN_8c260f02_def(ushort *ar4,int ar5,uint *ar6,ushort *ar7)

{
  ring[rp++ & 255] = "FUN_8c260f02";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  ushort * s0 = (ushort *)(unsigned long)*(unsigned *)(vsp + 0);
  uint * s4 = (uint *)(unsigned long)*(unsigned *)(vsp + 4);
  uint * s8 = (uint *)(unsigned long)*(unsigned *)(vsp + 8);
  uint * s12 = (uint *)(unsigned long)*(unsigned *)(vsp + 12);
  uint * s16 = (uint *)(unsigned long)*(unsigned *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *ar7 = 0;
  uVar2 = 0xff00;
  if (ar5 < 0x30) {
    return 0xffffffff;
  }
  if ((ushort)(*ar4 >> 8 | *ar4 << 8 & (ushort)0xff00) == 0x8000) {
    if ((int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & 0xff00) < 0x2c) {
      return 0xffffffff;
    }
    *ar6 = (int)(short)ar4[10] >> 8 & 0xffU | (int)(short)ar4[10] << 8 & 0xff00;
    uVar1 = (int)0xffffff00;
    *ar7 = ar4[0xb] >> 8 | ar4[0xb] << 8 & (int)0xffffff00;
    uVar3 = 0xff0000;
    if (*ar7 == 1) {
      *s0 = ar4[0xd] >> 8 | ar4[0xd] << 8 & uVar1;
      uVar4 = *(uint *)(unsigned)(ar4 + 0xe);
      *s4 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(unsigned)(ar4 + 0x10);
      *s8 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(unsigned)(ar4 + 0x12);
      *s12 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(unsigned)(ar4 + 0x14);
      *s16 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      return 0;
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c260f02\n.set _FUN_8c260f02, _FUN_8c260f02_def\n");
