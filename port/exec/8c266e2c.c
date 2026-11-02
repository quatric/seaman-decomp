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
undefined4 FUN_8c266e2c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266e2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int ar6_00;
  undefined4 uVar1;
  
  ar6_00 = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0));
  uVar1 = 0xd000001;
  if (((ar6_00 != 0) && (uVar1 = 0x7000103, ar4 != 0)) &&
     (uVar1 = 0x7000203, ar6 != (undefined1 *)(unsigned)0x0)) {
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(ar6));
    (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c268650))))
              (*(char *)(unsigned)(ar4 + 1) * 0x40 + (int)0x400 + *(int *)(unsigned)(0x1b8 + ar6_00) +
               (char)ar5 * 0x20 + 0x11,((undefined1 *)(fr0_ - 0x10)),ar6_00,ar7));
    *((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0xc)) = ((undefined1 *)(fr0_ - 0x10))[0];
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c266e2c\n.set _FUN_8c266e2c, _FUN_8c266e2c_def\n");
