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
undefined4 FUN_8c265e08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c265e08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int *ar5_00;
  char in_IMASK = 0;
  char in_S = 0;
  byte in_T = 0;
  
  ar5_00 = ((int *)(fr0_ - 0x10));
  if ((((*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)) != 0) &&
       ((byte)((in_T | in_S << 1) & 0xf0 | in_IMASK << 4) == 0xf0)) &&
      ((vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1f8d48))))
                 (*(undefined4 *)(unsigned)((int)0x1ac + *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0))),((int *)(fr0_ - 0x10)),ar6,ar7)),
      ((int *)(fr0_ - 0x10))[0] == 0)) && (*(int *)(unsigned)((int)0x190 + *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0))) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1f8cbc))))
              (*(undefined4 *)(unsigned)((int)0x1ac + *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0))),ar5_00,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c265e08\n.set _FUN_8c265e08, _FUN_8c265e08_def\n");
