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
int FUN_8c2654fc_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2654fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int unaff_r12 = 0;
  int *piVar2;
  int ar5_01;
  undefined4 in_PR = 0;
  
  ar5_01 = 0;
  if (unaff_r12 == 0) {
    ar5_01 = 0x7000103;
  }
  else {
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r12 + 8));
    if (*piVar2 == 0x56524453) {
      if (((char)piVar2[1] == '\x01') && (*(char *)(unsigned)((int)piVar2 + 5) < '\x02')) {
        (vsp = ((unsigned long)(fr0_ - 4)), aica_reg_265278(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), aica_ram_2684b8(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c265704(((undefined4 *)(unsigned)0x8c2784b8),ar5,ar6,ar7));
        ar7 = 0xffffffff;
        ar6 = piVar2[2];
        ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c265ea0(0,piVar2 + 8,ar6,0xffffffff); });
        ar5_00 = 0;
        ar4_00 = 0;
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c265ff4(0,0,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), aica_reg_2652f4(ar4_00,ar5_00,ar6,ar7));
        for (iVar1 = 0x200000; iVar1 != 0; iVar1 = iVar1 + -1) {
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c2784c4) = 1;
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2653e0(0,ar5_00,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2659dc(unaff_r12,ar5_00,ar6,ar7));
      }
      else {
        ar5_01 = 0xb000002;
      }
    }
    else {
      ar5_01 = 0x9000001;
    }
  }
  if (ar5_01 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2688a0(((void *)0x8c2654f4),ar5_01,ar6,ar7); });
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c2654fc\n.set _FUN_8c2654fc, _FUN_8c2654fc_def\n");
