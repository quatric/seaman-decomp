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
undefined1 * s_Cp_Home_njd_08bf2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Cp_Home_njd_08bf2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7c4d0) = 0;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c283bd0) + iVar1 * 0x124) = 0;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c283be4) + iVar1 * 0x124) = 0;
    *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c283bd4) + iVar1 * 0x124) = 0;
    *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c283bdc) + iVar1 * 0x124) = 0;
  }
  *(unsigned *)0x8c283b34 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ea4));
  *(unsigned *)0x8c283b38 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ef4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b3c) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b40) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b44) = (*(undefined4 *)(unsigned)(unsigned)0x8c139ea0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b48) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e8c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b50) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e90);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b64) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b68) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b54) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b60) = 0x8c28412c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283b74) = 0x8c2841b0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283be4) = 0x8c284488;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c08) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c0c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bd0) = 0x8c284008;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bd4) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bd8) = 0x8c284064;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bdc) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bec) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bf4) = (short)(int)(14400.0 / (0.5 / (*(undefined4 *)(unsigned)(unsigned)0x8c283bf0)));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c283bf4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c283bf4) = 1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bf8) = (*(undefined4 *)(unsigned)(unsigned)0x8c283bf8) * 0.7;
  *(unsigned *)0x8c283c58 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ea4));
  *(unsigned *)0x8c283c5c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139ef4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c60) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c64) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c68) = (*(undefined4 *)(unsigned)(unsigned)0x8c139ea0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c6c) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e8c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c74) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e90);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c88) = (*(undefined4 *)(unsigned)(unsigned)0x8c139e94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c8c) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c78) = 0xb;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c84) = 0x8c28412c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c98) = 0x8c2841b0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d08) = 0x8c284488;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d2c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d30) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283cf4) = 0x8c284008;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283cf8) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283cfc) = 0x8c284064;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d00) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c283d1c) * 0.7;
  *(unsigned *)0x8c283d7c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139f54));
  *(unsigned *)0x8c283d80 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139f5c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d84) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f44);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d88) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d8c) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d90) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e2c) = 0x8c284608;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e34) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e48) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e50) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e54) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e18) = 0x8c2840c0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e1c) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e20) = 0x8c2840d4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e24) = 2;
  *(unsigned *)0x8c283ea0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139f8c));
  *(unsigned *)0x8c283ea4 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c139fa8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ea8) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f78);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283eac) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283eb0) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f80);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283eb4) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f7c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ebc) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f84);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ed0) = (*(undefined4 *)(unsigned)(unsigned)0x8c139f88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ed4) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ec0) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ecc) = 0x8c284234;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ee0) = 0x8c2842e8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f50) = 0x8c284608;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f58) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f74) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f78) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f3c) = 0x8c2840e8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f40) = 7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f44) = 0x8c284110;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f48) = 7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f64) = (*(undefined4 *)(unsigned)(unsigned)0x8c283f64) * 0.7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fbc) = 0x43660000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fcc) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fd0) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fd4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fd8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fdc) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fe0) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fe4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fe8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283fec) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ff0) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ff4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283ff8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283be8) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283bfc) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c00) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c04) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c10) = 0x418c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c1c) = 0x41400000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283c50) = 0x43200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d20) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d24) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d28) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d34) = 0x418c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d40) = 0x41400000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283d74) = 0x43200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e44) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e4c) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e58) = 0x418c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283e98) = 0x43200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f68) = 0x3c23d70a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f6c) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f70) = 0x43660000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f7c) = 0xc0400000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c283f88) = 0x41a00000;
  return ((undefined1 *)(unsigned)0x8c283fcc);
}

__asm__(".globl _s_Cp_Home_njd_08bf2c\n.set _s_Cp_Home_njd_08bf2c, _s_Cp_Home_njd_08bf2c_def\n");
