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
undefined4 FUN_8c11adde_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11adde";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(unsigned *)(fr0_ - 0x10) = (unsigned)(unsigned long)(ar5));
  (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(ar6));
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1148c4(ar4,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c113bcc(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c113ac8(ar4,ar5,ar6,ar7));
    *(unsigned *)(unsigned)(0x1a4 + ar4) = ((void *)(unsigned)0x8c11ad68);
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11a634(ar4,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
    *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) = (*(undefined4 *)(fr0_ - 0x14));
    *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc)) = uVar1;
  }
  *(undefined1 *)(unsigned)(0x1d8 + ar4) = 1;
  return 0;
}

__asm__(".globl _FUN_8c11adde\n.set _FUN_8c11adde, _FUN_8c11adde_def\n");
