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
int FUN_8c0f58a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f58a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = 3;
  ar5_00 = 0xf;
  ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0f4040(ar4,0xf,3,ar5); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12bec0));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410(ar4 + 0x170,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x1b4,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x1bc,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x1dc,ar5_00,ar6_00,ar5));
  *(undefined1 *)(unsigned)(0x1d8 + ar4) = 0;
  *(undefined4 *)(unsigned)0x8c43b338 = 0;
  ((undefined1 *)(unsigned)1)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)2)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)3)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)4)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)5)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)6)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)7)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)8)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)9)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)10)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0xb)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)0xc)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0xd)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)0xe)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)0xf)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)0x10)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)0x11)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x12)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x13)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x14)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x15)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x16)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)0x17)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x18)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x19)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x1a)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x1b)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x1c)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x1d)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x1e)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x1f)[0x8c43b338] = (short)0xff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f5ad0(ar4,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,0x8c43b47c,ar4 + 0x1dc,ar5));
  return ar4;
}

__asm__(".globl _FUN_8c0f58a4\n.set _FUN_8c0f58a4, _FUN_8c0f58a4_def\n");
