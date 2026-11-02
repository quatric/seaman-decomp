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
undefined4 FUN_8c031ab4_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031ab4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined8 *ar5_00;
  undefined8 in_dr0 = 0;
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0231c8(ar4 + 0x80,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)ar5 = uVar1;
    (*(undefined4 *)(fr0_ - 0x10)) = uVar1;
  }
  else {
    *ar5 = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c02327c(ar4 + 0x80,ar5_00,ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x14)) = uVar1;
  if (cVar2 != '\0') {
    (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)in_dr0;
    (*(undefined4 *)(fr0_ - 0x10)) = uVar1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)((int)ar5 + 4) = (*(undefined4 *)(fr0_ - 0x14));
  }
  else {
    *(undefined8 *)(unsigned)((int)ar5 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
  }
  return 0;
}

__asm__(".globl _FUN_8c031ab4\n.set _FUN_8c031ab4, _FUN_8c031ab4_def\n");
