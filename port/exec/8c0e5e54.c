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
undefined4 * s_Outside_0e5e56_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Outside_0e5e56";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *ar5_00;
  code *ar5_01;
  undefined4 uVar1;
  code *ar6_00;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  char cVar3;
  
  cVar3 = '\0';
  uVar2 = 0;
  uVar1 = 2;
  ar5_00 = ((undefined1 *)(unsigned)0x8c140040);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9c80(ar4,((undefined1 *)(unsigned)0x8c140040),2,0));
  *ar4 = ((undefined1 *)(unsigned)0x8c12b580);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x430,ar5_00,uVar1,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x432,ar5_00,uVar1,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x433,ar5_00,uVar1,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), s_66_JUNGLE_RAIN_5_0d7f1a(ar4 + 0x437,ar5_00,uVar1,uVar2));
  ({ unsigned long t0_ = (unsigned long)(100); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1fd2,((void *)0x8c0d6ee0),((void *)0x8c0d6ef8),0xc); });
  uVar1 = 0x18;
  ar6_00 = ((void *)0x8c0cffc8);
  ar5_01 = ((void *)0x8c02145c);
  ({ unsigned long t0_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x20fe,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e6ef0(ar4,ar5_01,ar6_00,uVar1));
  if (cVar3 == '\0') {
    ar4[0x2e9] = 0x425dae14;
    ar4[0x2af] = 0x453b7ff4;
    ar4[0x2b0] = 0x4506eccd;
    ar4[0x2b1] = 0x45520000;
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
    ar4[0x25] = 0x41000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2e9) = 0xabc425dae14;
    *(undefined8 *)(unsigned)(ar4 + 0x2af) = 0xac0453b7ff4;
    *(undefined8 *)(unsigned)(ar4 + 0x2b0) = 0x440ea6664506eccd;
    *(undefined8 *)(unsigned)(ar4 + 0x2b1) = 0x8045520000;
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(unsigned)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x23) = 0x9043a00000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x9442e00000;
    in_fr1 = 0x41000000;
    *(undefined8 *)(unsigned)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar3 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(unsigned)(ar4 + 0x27) = 0xa041300000;
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x106c40400000;
  }
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f718);
  ar4[0x41b] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f714);
  ar4[0x41c] = uVar2;
  ar4[0x41d] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f71c);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f724);
  ar4[0x41e] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f720);
  ar4[0x41f] = uVar2;
  ar4[0x420] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f728);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f730);
  ar4[0x421] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f72c);
  ar4[0x422] = uVar2;
  ar4[0x423] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f734);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f73c);
  ar4[0x42a] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f738);
  ar4[0x42b] = uVar2;
  ar4[0x42c] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f740);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f748);
  ar4[0x427] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f744);
  ar4[0x428] = uVar2;
  ar4[0x429] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f74c);
  ar4[0x2104] = 0;
  ar4[0x20fe] = (&(*(undefined4 *)(unsigned)(unsigned)0x8c13f2fc))[ar4[0x2104]];
  ar4[0x2100] = 500;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d76e8(ar4 + 0x427,ar5_01,ar6_00,uVar1));
  return ar4;
}

__asm__(".globl _s_Outside_0e5e56\n.set _s_Outside_0e5e56, _s_Outside_0e5e56_def\n");
