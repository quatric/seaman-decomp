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
undefined4 FUN_8c0d69a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d69a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int a5;
  undefined4 extraout_fr1 = 0;
  undefined4 extraout_fr0 = 0;
  char cVar1;
  
  cVar1 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x60) = ar5;
  a5 = (int)&(*(undefined8 *)(fr0_ - 0x14)) + 4;
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x60) + 8) + 0x160))))(*(int *)(unsigned)(ar4 + 0x60),a5,ar6,ar7));
  if (cVar1 == '\0') {
    (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),extraout_fr0);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c102a7c(ar4 + 0x11c,a5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 100) = 2;
  return 100;
}

__asm__(".globl _FUN_8c0d69a8\n.set _FUN_8c0d69a8, _FUN_8c0d69a8_def\n");
