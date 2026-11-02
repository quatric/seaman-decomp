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
uint FUN_8c012f58_def(undefined1 *ar4,ushort *ar5,byte *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c012f58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 uVar2;
  undefined4 ar6_00;
  undefined4 in_fr4 = 0;
  
  (*(ushort *)(fr0_ - 0x16)) = (ushort)((uint)in_fr4 >> 0x10);
  if (((*(ushort *)(fr0_ - 0x16)) & 0x8000) == 0x8000) {
    uVar2 = 0xff;
  }
  else {
    uVar2 = 1;
  }
  *ar4 = uVar2;
  *ar5 = (*(ushort *)(fr0_ - 0x16));
  *ar5 = (short)(*ar5 & 0x7ff0) >> 4;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c012a24((fr0_ + (int)0xffffffe0),((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  ar6_00 = 3;
  (vsp = ((unsigned long)(fr0_ - 64)), memmove(ar6,(fr0_ + (int)0xffffffe1),3,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c012a24((fr0_ + (int)0xffffffe0),((undefined1 *)(fr0_ - 0x1c)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), memmove(ar6 + 3,(fr0_ + (int)0xffffffe0),4,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c01289c(ar6,7,3,ar7); });
  if ((short)*ar5 < 1) {
    *ar5 = *ar5 + 1;
    uVar1 = (int)(char)*ar6 & 0x7f;
    *ar6 = (byte)uVar1;
    while ((*ar6 & 0x80) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01289c(ar6,7,1,ar7));
      *ar5 = *ar5 - 1;
    }
  }
  else {
    uVar1 = (int)(char)*ar6 | 0x80;
    *ar6 = (byte)uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c012f58\n.set _FUN_8c012f58, _FUN_8c012f58_def\n");
