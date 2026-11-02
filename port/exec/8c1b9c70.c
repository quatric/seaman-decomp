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
undefined4 FUN_8c1b9c70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9c70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 in_r0 = (undefined2)(unsigned long)vin0;
  undefined4 uVar1;
  short *extraout_r1 = 0;
  int extraout_r2 = 0;
  int a7;
  char *unaff_r12 = 0;
  int in_GBR = (void *)0x8cf80000;
  char extraout_S = 0;
  undefined4 extraout_MACH = 0;
  undefined4 extraout_MACL = 0;
  
  *(undefined2 *)(unsigned)(unaff_r12 + 0xe) = in_r0;
  a7 = (int)*unaff_r12;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9aa8(ar4,ar5,ar6,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9c52(ar4,ar5,ar6,a7));
  *(short *)(unsigned)(in_GBR + 0x1cc) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(unsigned)(extraout_r2 + 0x1a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c70\n.set _FUN_8c1b9c70, _FUN_8c1b9c70_def\n");
