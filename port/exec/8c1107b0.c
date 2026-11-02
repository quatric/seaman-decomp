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
undefined4 FUN_8c1107b0_def(int *ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c1107b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int a5;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    *(undefined1 *)(unsigned)(ar4 + 10) = 1;
  }
  else if (uVar1 == (int)0xf8) {
    *ar7 = ar4[0x12];
  }
  else {
    if (uVar1 != (int)0xff) {
      return 0;
    }
    a5 = ar4[0xe];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,a5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c1107b0\n.set _FUN_8c1107b0, _FUN_8c1107b0_def\n");
