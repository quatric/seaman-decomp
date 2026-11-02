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
int FUN_8c267130_def(int ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267130";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  
  ar5_00 = 0;
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined2 *)(unsigned)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 32)), aica_ram_268618(*(char *)(unsigned)(ar4 + 1) * 0x40 + *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1b8) + (char)ar5 * 0x20 +
                    0x408,(fr0_ + (int)0xfffffff0),(*(undefined4 *)(unsigned)(unsigned)0x8c2784c0),ar7));
    *ar6 = (short)(*(undefined4 *)(fr0_ - 0x10));
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c2688a0(((void *)0x8c267130),ar5_00,iVar1,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267130\n.set _FUN_8c267130, _FUN_8c267130_def\n");
