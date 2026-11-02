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
undefined4 FUN_8c208680_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c208680";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  int *a7;
  undefined4 ain0;
  
  iVar1 = *ar4;
  a7 = &(*(int *)(fr0_ - 0x14));
  (*(int *)(fr0_ - 0x14)) = ar4[1];
  ((int *)(fr0_ - 0x10))[0] = ar4[2];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c54) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c58) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d54);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c5c) = *(undefined4 *)(unsigned)(iVar1 + 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c60) = *(undefined4 *)(unsigned)(iVar1 + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c64) = *(undefined4 *)(unsigned)(iVar1 + 0xc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c68) = (uint)(*(float *)(unsigned)(iVar1 + 0x18) * 255.0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c68) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c68) << 0x18 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c68) << 0x10 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c68) << 8 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c68)
  ;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c6c) = *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x14)) + 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c70) = *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x14)) + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c74) = *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x14)) + 0xc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c78) = (uint)(*(float *)(unsigned)((*(int *)(fr0_ - 0x14)) + 0x18) * 255.0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c78) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c78) << 0x18 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c78) << 0x10 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c78) << 8 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c78)
  ;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c7c) = *(undefined4 *)(unsigned)(((int *)(fr0_ - 0x10))[0] + 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c80) = *(undefined4 *)(unsigned)(((int *)(fr0_ - 0x10))[0] + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c84) = *(undefined4 *)(unsigned)(((int *)(fr0_ - 0x10))[0] + 0xc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c88) = (uint)(*(float *)(unsigned)(((int *)(fr0_ - 0x10))[0] + 0x18) * 255.0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c88) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c88) << 0x18 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c88) << 0x10 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c88) << 8 | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c88)
  ;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) = 0x3c;
  ain0 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d50);
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c20820a((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c),0x3c,((int *)(fr0_ - 0x10)),a7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c2081e0(ar4_00,0,0,a7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d5c) = *(undefined4 *)(unsigned)(iVar1 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c208680\n.set _FUN_8c208680, _FUN_8c208680_def\n");
