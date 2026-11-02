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
int FUN_8c265ff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c265ff4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  undefined4 a5;
  int ar5_00;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte in_T = 0;
  undefined4 uVar1;
  
  ar5_00 = 0;
  (*(uint *)(fr0_ - 0x1c)) = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  uVar1 = (*(undefined4 *)(fr0_ - 0x2c));
  (*(undefined4 *)(fr0_ - 0x20)) = ar5;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c265a2c(ar4,&(*(int *)(fr0_ - 0x24)),ar6,ar7));
    uVar1 = (*(undefined4 *)(fr0_ - 0x2c));
    if ((*(int *)(fr0_ - 0x24)) == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4bd404) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
      if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1a8) == 0) {
        ar5_00 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c265620(ar4,(*(undefined4 *)(fr0_ - 0x20)),ar6,ar7));
        uVar1 = (*(undefined4 *)(fr0_ - 0x2c));
        if (ar5_00 == 0) {
          return 0;
        }
      }
      else if (((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1a8) == 1) &&
               (ar5_00 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c265d38(ar4,(*(undefined4 *)(fr0_ - 0x20)),ar6,ar7)), uVar1 = (*(undefined4 *)(fr0_ - 0x2c)), ar5_00 == 0
               )) && (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 400) == 0)) {
        (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c265c50((fr0_ + (int)0xffffffd4),&(*(undefined4 *)(fr0_ - 0x28)),ar6,ar7));
        uVar1 = (*(undefined4 *)(fr0_ - 0x2c));
        ar5_00 = (vsp = ((unsigned long)(fr0_ - 88)), aica_ram_2657ec((*(undefined4 *)(fr0_ - 0x2c)),(*(undefined4 *)(fr0_ - 0x28)),ar6,ar7));
        if ((ar5_00 == 0) && (a5 = (*(undefined4 *)(fr0_ - 0x28)), *(int *)(unsigned)(ar4 + 0x10) == -1)) {
          while (*(int *)(unsigned)(ar4 + 0x18) != 1) {
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c2688e0((*(undefined4 *)(fr0_ - 0x2c)),a5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 88)), noop_2658de((*(undefined4 *)(fr0_ - 0x2c)),a5,ar6,ar7));
          }
        }
      }
    }
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c2688a0(((void *)0x8c265ff4),ar5_00,ar6,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ff4\n.set _FUN_8c265ff4, _FUN_8c265ff4_def\n");
