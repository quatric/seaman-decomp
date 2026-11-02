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
undefined4 FUN_8c09efb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09efb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0xfd0) != 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + -1;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2140c6(*(int *)(unsigned)(ar4 + 0xfd0) + 1,1,ar6,ar7));
    uVar1 = 0xfd0;
    *(undefined4 *)(unsigned)(ar4 + 0xfd0) = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c09efb4\n.set _FUN_8c09efb4, _FUN_8c09efb4_def\n");
