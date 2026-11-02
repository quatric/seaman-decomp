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
FUN_8c260390_def(int ar4,undefined4 ar5,short *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c260390";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined1 * s0 = (undefined1 *)(unsigned long)*(unsigned *)(vsp + 0);
  char * s4 = (char *)(unsigned long)*(unsigned *)(vsp + 4);
  char * s8 = (char *)(unsigned long)*(unsigned *)(vsp + 8);
  uint * s12 = (uint *)(unsigned long)*(unsigned *)(vsp + 12);
  int * s16 = (int *)(unsigned long)*(unsigned *)(vsp + 16);
  undefined4 * s20 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 20);
  undefined2 * s24 = (undefined2 *)(unsigned long)*(unsigned *)(vsp + 24);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int *piVar2;
  
  *ar6 = (ushort)*(byte *)(unsigned)(ar4 + 7) << 4;
  *s8 = (*(byte *)(unsigned)(ar4 + 9) & 3) + 1;
  *s12 = (uint)*(ushort *)(unsigned)(ar4 + 0x2a);
  cVar1 = *(char *)(unsigned)(ar4 + 8);
  piVar2 = (int *)(unsigned)(ar4 + 0xc);
  if (cVar1 == '\0') {
    *s0 = 0x10;
    *s4 = *s8 << 1;
    *s20 = 1;
    *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
    *s24 = 0;
  }
  else if (cVar1 == '\x01') {
    *s0 = 8;
    *s4 = *s8;
    *s20 = 1;
    *s16 = *piVar2;
    *s24 = 1;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *s0 = 4;
    *s4 = *s8;
    *s20 = 2;
    *s16 = *piVar2 << 1;
    *s24 = 2;
  }
  *s4 = '\x02';
  *s20 = 1;
  *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
  *s0 = 0x10;
  *ar7 = 0xff;
  return 0;
}

__asm__(".globl _FUN_8c260390\n.set _FUN_8c260390, _FUN_8c260390_def\n");
