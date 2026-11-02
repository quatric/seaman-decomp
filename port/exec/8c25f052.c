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
FUN_8c25f052_def(undefined4 ar4,int ar5,short *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c25f052";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  char * s0 = (char *)(unsigned long)*(unsigned *)(vsp + 0);
  undefined1 * s4 = (undefined1 *)(unsigned long)*(unsigned *)(vsp + 4);
  char * s8 = (char *)(unsigned long)*(unsigned *)(vsp + 8);
  undefined4 * s12 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 12);
  undefined4 * s16 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 16);
  undefined4 * s20 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  short sVar2;
  
  if (ar5 < 0x1000) {
    *ar6 = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x10)) = ar4;
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(ar6));
    (*(unsigned *)(fr0_ - 0x8) = (unsigned)(unsigned long)(ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c25ed3c(ar4,&(*(undefined4 *)(fr0_ - 0x20)),((char *)(fr0_ - 0x1c)),((char *)(fr0_ - 0x18))));
    if ((iVar1 != 0) && (sVar2 = (short)iVar1 - (short)(*(undefined4 *)(fr0_ - 0x10)), *((short *)(unsigned long)*(unsigned *)(fr0_ - 0xc)) = sVar2, 0 < sVar2)) {
      *s12 = (*(undefined4 *)(fr0_ - 0x20));
      *s8 = ((char *)(fr0_ - 0x1c))[0];
      *s0 = ((char *)(fr0_ - 0x18))[0];
      *s16 = (*(undefined4 *)(fr0_ - 0x14));
      *((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x8)) = 0xff;
      iVar1 = (int)(short)*s8 * (int)(short)*s0;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 7;
      }
      *s4 = (char)(iVar1 >> 3);
      *s20 = 1;
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c25f052\n.set _FUN_8c25f052, _FUN_8c25f052_def\n");
