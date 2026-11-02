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
undefined4 FUN_8c264222_def(ushort *ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264222";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (((1 < ar5) &&
      (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & 0xff00 & 0xffff) == 0x8000)) &&
     ((*(unsigned *)(fr0_ - 0x8) = (unsigned)(unsigned long)(ar6)),
     iVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); unsigned long t1_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(((undefined1 *)(fr0_ - 0x18))); unsigned long t3_ = (unsigned long)(((undefined1 *)(fr0_ - 0x14))); unsigned long t4_ = (unsigned long)(
                        ((undefined1 *)(fr0_ - 0x10))); *(unsigned *)((((unsigned long)(fr0_ - 40)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 40)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c260d7c))))
                       (ar4,ar5,((short *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x24))); }), -1 < iVar1)) {
    *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x8)) = (int)((short *)(fr0_ - 0x28))[0];
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c264222\n.set _FUN_8c264222, _FUN_8c264222_def\n");
