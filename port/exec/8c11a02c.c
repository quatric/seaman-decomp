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
undefined4 * FUN_8c11a02c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a02c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 unaff_r10 = 0;
  undefined4 *unaff_r11 = 0;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  undefined4 *ar5_00;
  char in_T = 0;
  
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(in_r0 + unaff_r12));
  if (in_T != '\x01') {
    do {
      ar5_00 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x114 + unaff_r12));
      if (ar5_00[1] == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112fd8(unaff_r12,ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(0x114 + unaff_r12) = uVar1;
      }
      else {
        *(undefined4 *)(unsigned)(0x114 + unaff_r12) = ar5_00[1];
      }
      ar5_00[4] = *(undefined4 *)(unsigned)(unaff_r13 + 0x10);
      *ar5_00 = 1;
      ar5_00[3] = *(undefined4 *)(unsigned)(unaff_r13 + 0xc);
      ar5_00[5] = *(undefined4 *)(unsigned)(unaff_r13 + 0x14);
      piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r13 + 4));
      ar5_00[1] = piVar2;
      *piVar2 = *piVar2 + 1;
      ar5_00[2] = unaff_r10;
      if (unaff_r11 != (undefined4 *)(unsigned)0x0) {
        unaff_r11[2] = ar5_00;
      }
      unaff_r13 = *(int *)(unsigned)(unaff_r13 + 8);
      unaff_r11 = ar5_00;
    } while (unaff_r13 != 0);
  }
  *puVar3 = unaff_r10;
  return puVar3;
}

__asm__(".globl _FUN_8c11a02c\n.set _FUN_8c11a02c, _FUN_8c11a02c_def\n");
