#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0b7ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7ad0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b34(0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xcc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x83,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xd6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x8e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xe0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x99,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xea,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xf4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xaf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xfe,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xba,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x108,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xc5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x112,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xd0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x11c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xdb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x126,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xe6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x130,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xf1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x13a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xfc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x144,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x107,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x14e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x112,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x158,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x11d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x162,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x128,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x16c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x133,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x176,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x13e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x180,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x149,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x18a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x154,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x194,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x15f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x19e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x16a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1a8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x175,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1b2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x180,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1bc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x18b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1c6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x196,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1d0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1a1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1da,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1ac,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1e4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1b7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1ee,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1c2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1f8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1cd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x202,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1d8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x20c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1e3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x216,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1ee,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x220,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1f9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x22a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x204,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x234,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x20f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x23e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x21a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x248,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x225,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x252,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x230,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x25c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x23b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x266,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x246,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x270,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x251,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x27a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x25c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x284,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x267,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x28e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x272,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x298,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x27d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2a2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x288,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2ac,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x293,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2b6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x29e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2c0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2a9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2ca,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2b4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2d4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2bf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2de,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2ca,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2e8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2d5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2f2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2e0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2fc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2eb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x306,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2f6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x310,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x301,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x31a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x30c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x324,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x317,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x32e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x322,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x338,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x32d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x342,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x338,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x34c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x343,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x356,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x34e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x360,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x359,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x36a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x364,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x374,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x36f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x37e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x37a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x388,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x385,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x392,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x390,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x39c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x39b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3a6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3a6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3b0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3b1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ba,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3bc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3c4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3c7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ce,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3d2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3d8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3dd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3e2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3e8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ec,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3f3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3f6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3fe,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x400,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x409,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x40a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x414,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x414,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x41f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x41e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x428,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x435,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x432,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x440,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x43c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x44b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x446,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x456,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x450,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x461,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x464,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x46c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x46e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x477,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x478,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x482,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x482,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x48d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x48c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x498,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x496,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4a3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4a0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4ae,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4aa,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4b9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4b4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4c4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4be,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4cf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4c8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4da,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4d2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4e5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4dc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4e6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4fb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4f0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x506,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4fa,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x511,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x504,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x51c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x50e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x527,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x518,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x532,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x522,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x53d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x52c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x548,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x536,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x553,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x540,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x55e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x54a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x569,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x554,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x574,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x55e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x57f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x568,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x58a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x572,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x595,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x57c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5a0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x586,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5ab,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x590,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5b6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x59a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5a4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5cc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5ae,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5d7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5b8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5e2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5c2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5ed,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5cc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5f8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5d6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x603,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5e0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x60e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5ea,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x619,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5f4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x624,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5fe,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x62f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x608,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x63a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x612,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x645,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x61c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x650,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x626,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x65b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x630,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x666,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x63a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x671,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x644,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x67c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x64e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x687,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x658,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x692,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x662,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x66c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6a8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x676,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6b3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x680,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6be,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x68a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6c9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x694,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6d4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x69e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6df,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6a8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6ea,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6b2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6f5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6bc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x700,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6c6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x70b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6d0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x716,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6da,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x721,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6e4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x72c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6ee,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x737,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6f8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x742,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x702,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x74d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x70c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x758,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x716,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x763,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x720,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x72a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x779,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x734,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x784,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x73e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x78f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x748,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x79a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x752,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7a5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x75c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7b0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x766,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7bb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x770,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7c6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x77a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7d1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x784,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7dc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x78e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7e7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x798,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7f2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x7a2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7fd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x7ac,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x808,10,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (ar4 + 0x7b6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x813,10,
                     ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0b7ad0\n.set FUN_8c0b7ad0, FUN_8c0b7ad0_def\n");

}
