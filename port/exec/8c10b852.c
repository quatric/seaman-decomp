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
int FUN_8c10b852_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b852";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  undefined4 *unaff_r13 = 0;
  char in_T = 0;
  
  ar5_00 = unaff_r12;
  if (in_T != '\x01') {
    ar5_00 = *unaff_r13;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e534(*ar4,ar5_00,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,ar6,ar7));
  }
  if (unaff_r11 == 0) {
    if (unaff_r13 == (undefined4 *)(unsigned)0x0) {
      ar4[9] = unaff_r12;
      ar4[0xb] = unaff_r12;
      ar4[10] = unaff_r12;
    }
    else {
      iVar1 = unaff_r13[1];
      if (iVar1 == 4) {
        ar4[10] = unaff_r13;
      }
      else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        ar4[9] = unaff_r13;
        ar4[0xb] = unaff_r12;
      }
      else {
        unaff_r11 = 0xd;
      }
    }
  }
  return unaff_r11 = 0;
}

__asm__(".globl _FUN_8c10b852\n.set _FUN_8c10b852, _FUN_8c10b852_def\n");
